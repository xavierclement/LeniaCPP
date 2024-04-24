/*
** EPITECH PROJECT, 2024
** LeniaCPP
** File description:
** main.cpp
*/

#include <memory>
#include <stdexcept>
#include <iostream>
#include <cstdlib>

#include "include/Lenia.hpp"

int main(int argc, char **argv, char **envp) {
    std::unique_ptr <Lenia> lenia = nullptr;

    (void) argc;
    (void) argv;
    (void) envp;
    try {
        lenia = std::make_unique<Lenia>();
    } catch (const std::exception &exception) {
        std::cerr << "Error: " << exception.what() << std::endl;
        return EXIT_FAILURE;
    }

    try {
        lenia->run();
    } catch (const std::exception &exception) {
        std::cerr << "Error: " << exception.what() << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}