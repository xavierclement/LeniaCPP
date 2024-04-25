/*
** EPITECH PROJECT, 2024
** LeniaCPP
** File description:
** Window.cpp
*/

#include "include/Window.hpp"

Window::Window(void) {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        throw std::runtime_error("SDL_Init Error: " + std::string(SDL_GetError()));
    }
    if (SDL_GetDesktopDisplayMode(0, &_display_mode) != 0) {
        SDL_Quit();
        throw std::runtime_error("SDL_GetDesktopDisplayMode Error: " + std::string(SDL_GetError()));
    }
    _window = SDL_CreateWindow("Lenia", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, _display_mode.w,
                               _display_mode.h,
                               SDL_WINDOW_FULLSCREEN_DESKTOP);
    if (_window == nullptr) {
        SDL_Quit();
        throw std::runtime_error("SDL_CreateWindow Error: " + std::string(SDL_GetError()));
    }
    _renderer = SDL_CreateRenderer(_window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (_renderer == nullptr) {
        SDL_DestroyWindow(_window);
        SDL_Quit();
        throw std::runtime_error("SDL_CreateRenderer Error: " + std::string(SDL_GetError()));
    }
}

Window::~Window(void) {
    SDL_DestroyRenderer(_renderer);
    SDL_DestroyWindow(_window);
    SDL_Quit();
}

int Window::getWidth(void) const {
    return _display_mode.w;
}

int Window::getHeight(void) const {
    return _display_mode.h;
}

void Window::run(void) {
    SDL_Event event;
    Uint32 frameStart;
    int frameTime;

    _running = true;
    while (_running) {
        frameStart = SDL_GetTicks();

        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                _running = false;
            }
            if (event.type == SDL_KEYDOWN) {
                if (event.key.keysym.sym == SDLK_ESCAPE) {
                    _running = false;
                }
            }
        }

        SDL_RenderClear(_renderer);

        for (int x = 0; x < getWidth(); x++) {
            for (int y = 0; y < getHeight(); y++) {
                setPixel(x, y, Color(0, 0, 0, 255));
            }
        }

        SDL_RenderPresent(_renderer);

        frameTime = SDL_GetTicks() - frameStart;
        if (FRAME_DELAY > frameTime) {
            SDL_Delay(FRAME_DELAY - frameTime);
        }
    }
}

void Window::setPixel(int x, int y, Color color) {
    SDL_SetRenderDrawColor(_renderer, color.getRed(), color.getGreen(), color.getBlue(), color.getAlpha());
    SDL_RenderDrawPoint(_renderer, x, y);
}
