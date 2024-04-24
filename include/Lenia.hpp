/*
** EPITECH PROJECT, 2024
** LeniaCPP
** File description:
** Lenia.hpp
*/

#ifndef LENIA_HPP
#define LENIA_HPP

#include <memory>

#include "include/Window.hpp"

class Lenia {
public:
    Lenia(void);

    ~Lenia(void);

    void run(void);

private:
    std::unique_ptr <Window> _window;
};

#endif  // LENIA_HPP
