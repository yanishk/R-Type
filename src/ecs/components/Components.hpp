/*
** EPITECH PROJECT, 2024
** B-CPP-500-PAR-5-1-rtype-yanis.harkouk
** File description:
** Components
*/

#ifndef COMPONENTS_HPP_
    #define COMPONENTS_HPP_

    #include <string>
    #include <memory>
    #include <raylib.h>

namespace ecs
{
    enum entityType {
        PLAYER,
        PLAYERSHOT,
        ENEMY
    };

    namespace component
    {
        struct Drawable {
            std::string spritePath;
            std::size_t patternNb = 1;
            bool isLoaded = false;
            Texture2D spriteTexture;
            Rectangle spriteRect;
        };

        struct Controllable {
            bool isControllable = true;
        };

        struct Position {
            float x, y;
        };

        struct Velocity {
            float vx, vy;
        };

        struct Type {
            ecs::entityType type;
        };

        struct Life {
            std::size_t nbLives;
        };
    }
}

#endif /* !COMPONENTS_HPP_ */