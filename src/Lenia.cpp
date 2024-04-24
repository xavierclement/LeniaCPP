/*
** EPITECH PROJECT, 2024
** LeniaCPP
** File description:
** Lenia.cpp
*/

#include "include/Lenia.hpp"

Lenia::Lenia(void) {
    try {
        _window = std::make_unique<Window>();
    } catch (const std::exception &e) {
        throw std::runtime_error("Window creation failed");
    }
}

Lenia::~Lenia(void) {}

void Lenia::run(void) {
    _window->run();
}
