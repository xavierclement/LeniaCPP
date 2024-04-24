/*
** EPITECH PROJECT, 2024
** LeniaCPP
** File description:
** Color.hpp
*/

#ifndef COLOR_HPP
#define COLOR_HPP

#include <cstdint>

class Color {
public:
    Color(std::uint8_t red, std::uint8_t green, std::uint8_t blue, std::uint8_t alpha);

    ~Color(void);

    std::uint8_t getRed(void) const;

    std::uint8_t getGreen(void) const;

    std::uint8_t getBlue(void) const;

    std::uint8_t getAlpha(void) const;

    void setRed(const std::uint8_t red);

    void setGreen(const std::uint8_t green);

    void setBlue(const std::uint8_t blue);

    void setAlpha(const std::uint8_t alpha);

private:
    std::uint8_t _red;
    std::uint8_t _green;
    std::uint8_t _blue;
    std::uint8_t _alpha;
};

#endif  // COLOR_HPP
