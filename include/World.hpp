/*
** EPITECH PROJECT, 2024
** Lenia
** File description:
** World.hpp
*/

#ifndef WORLD_HPP
#define WORLD_HPP

#include <vector>
#include <memory>

#include "include/Cell.hpp"

class World {
public:
    World(int width, int height);

    ~World(void);

private:
    std::vector<std::vector<std::unique_ptr<Cell>>> _cells;
};

#endif  // WORLD_HPP
