/*
** EPITECH PROJECT, 2024
** Lenia
** File description:
** Cell.cpp
*/

#include "include/Cell.hpp"

Cell::Cell(double state) : _state(state) {}

Cell::~Cell(void) {}

Color Cell::getColor(void) const
{
    return Color(255 * _state, 0, 0, 255);
}