/*
** EPITECH PROJECT, 2024
** B-CPP-500-PAR-5-1-rtype-yanis.harkouk
** File description:
** main
*/

/**
 * @brief this is the main function,
 * ...
 * @return int
 */

#include "RTypeGame.hpp"
#include "GameEngine.hpp"

int main()
{
    game::RTypeGame rtype;
    GameEngine engine(rtype.getRegister());

    engine.run();
    return 0;
}
