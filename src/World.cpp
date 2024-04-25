/*
** EPITECH PROJECT, 2024
** Lenia
** File description:
** World.cpp
*/

#include "include/World.hpp"

World::World(int width, int height)
{
    for (int i = 0; i < width; i++) {
        std::vector<std::unique_ptr<Cell>> row;
        for (int j = 0; j < height; j++) {
            row.push_back(std::make_unique<Cell>(DEFAULT_STATUS));
        }
        _cells.push_back(std::move(row));
    }
}

World::~World(void) {}
