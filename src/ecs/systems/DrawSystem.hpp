/*
** EPITECH PROJECT, 2024
** B-CPP-500-PAR-5-1-rtype-yanis.harkouk
** File description:
** DrawSystem
*/

#ifndef DRAWSYSTEM_HPP_
    #define DRAWSYSTEM_HPP_

    #include "ISystem.hpp"
    #include "Components.hpp"

    #define SCREEN_WIDTH 1920
    #define SCREEN_HEIGHT 1080

namespace ecs
{
    namespace system
    {
        class DrawSystem : virtual public ecs::system::ISystem
        {
            public:
                DrawSystem() = default;
                ~DrawSystem() = default;

                void operator()(Registry &reg) override;
            private:
                void loadTextures(SparseArray<component::Drawable> &drawables);
                void drawBackground(component::Velocity &velocities, component::Drawable &drawables, component::Position &positions);
                void changeBackgroundPos(component::Velocity &velocities, component::Drawable &drawables, component::Position &positions);
                Vector2 changeNewBackgroundPos(component::Velocity &velocities, component::Drawable &drawables, component::Position &positions, int i);
                int getNbrRepeatBackground(component::Drawable &drawables, float spriteSize, int screenSize);
        };
    }
}

#endif /* !DRAWSYSTEM_HPP_ */
