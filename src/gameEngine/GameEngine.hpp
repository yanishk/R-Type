/*
** EPITECH PROJECT, 2024
** B-CPP-500-PAR-5-1-rtype-yanis.harkouk
** File description:
** GameEngine
*/

#ifndef GAMEENGINE_HPP_
    #define GAMEENGINE_HPP_

    #include "Registry.hpp"
    #include "Components.hpp"
    #include <raylib.h>

    #define SCREEN_WIDTH 1920
    #define SCREEN_HEIGHT 1080
    #define MARGIN_TOP 10
    #define FPS_MARGIN 100
    #define FPS_LIMIT 60

class GameEngine
{
    public:
        GameEngine(ecs::Registry &reg, std::string &gameName);
        ~GameEngine() = default;

        void run();

    private:
        ecs::Registry _reg;
};

#endif /* !GAMEENGINE_HPP_ */
