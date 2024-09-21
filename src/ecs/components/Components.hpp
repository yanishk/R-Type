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

enum KeyPressed
{
    NO_KEY,
    UP,
    DOWN,
    LEFT,
    RIGHT
};

namespace ecs
{
    namespace component
    {
        struct Drawable {
            std::string spritePath;
            Texture2D spriteTexture;
        };

        struct Controllable {
            std::shared_ptr<KeyPressed> key;
        };

        struct Position {
            float x, y;
        };

        struct Velocity {
            float vx, vy;
        };
    }
}

#endif /* !COMPONENTS_HPP_ */