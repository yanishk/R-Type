/*
** EPITECH PROJECT, 2024
** B-CPP-500-PAR-5-1-rtype-yanis.harkouk
** File description:
** main
*/

#include <iostream>
#include "Server.hpp"

int main()
{
    try {
        asio::io_context io_context;
        Server server(io_context);
        io_context.run();
    }
    catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
