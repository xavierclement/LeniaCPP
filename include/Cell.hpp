/*
** EPITECH PROJECT, 2024
** Lenia
** File description:
** Cell.hpp
*/

#ifndef CELL_HPP
#define CELL_HPP

#define DEFAULT_STATUS 0.0

#include "include/Color.hpp"

class Cell {
public:
    Cell(double state);

    ~Cell(void);

    Color getColor(void) const;

private:
    double _state;
};

#endif  // CELL_HPP
