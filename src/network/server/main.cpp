/*
** EPITECH PROJECT, 2024
** B-CPP-500-PAR-5-1-rtype-yanis.harkouk
** File description:
** main
*/

#include <iostream>
#include "Server.hpp"

int main(int ac, char **av)
{
    if (ac != 2 || av[1] == NULL) {
        std::cout << "Usage: ./client [port]" << std::endl;
        return -1;
    }
    try {
        asio::io_context io_context;
        asio::thread_pool pool(4);
        Server server(io_context, std::stoi(av[1]), pool);

        io_context.run();
        pool.join();
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
        return -1;
    }

    return 0;
}
