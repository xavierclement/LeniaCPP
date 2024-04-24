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

class Window {
public:
    Window(void);

    ~Window(void);

    void run(void);

    void setPixel(int x, int y, Color color);

private:
    SDL_DisplayMode _display_mode;
    SDL_Window *_window;
    SDL_Renderer *_renderer;
};

#endif  // WINDOW_HPP
