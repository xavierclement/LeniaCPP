/*
** EPITECH PROJECT, 2024
** LeniaCPP
** File description:
** Color.cpp
*/

#include "include/Color.hpp"

Color::Color(std::uint8_t red, std::uint8_t green, std::uint8_t blue, std::uint8_t alpha) : _red(red), _green(green),
                                                                                            _blue(blue),
                                                                                            _alpha(alpha) {}

Color::~Color(void) {}

std::uint8_t Color::getRed(void) const {
    return _red;
}

std::uint8_t Color::getGreen(void) const {
    return _green;
}

std::uint8_t Color::getBlue(void) const {
    return _blue;
}

std::uint8_t Color::getAlpha(void) const {
    return _alpha;
}

void Color::setRed(const std::uint8_t red) {
    _red = red;
}

void Color::setGreen(const std::uint8_t green) {
    _green = green;
}

void Color::setBlue(const std::uint8_t blue) {
    _blue = blue;
}

void Color::setAlpha(std::uint8_t alpha) {
    _alpha = alpha;
}
