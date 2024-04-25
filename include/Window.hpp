/*
** EPITECH PROJECT, 2024
** LeniaCPP
** File description:
** Window.hpp
*/

#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <memory>

#include <SDL2/SDL.h>

#include "Color.hpp"

#define FRAME_DELAY 1000 / 24

class Window {
public:
    Window(void);

    ~Window(void);

    int getWidth(void) const;

    int getHeight(void) const;

    void run(void);

    void setPixel(int x, int y, Color color);

private:
    SDL_DisplayMode _display_mode;
    SDL_Window *_window;
    SDL_Renderer *_renderer;
    bool _running;
};

#endif  // WINDOW_HPP
