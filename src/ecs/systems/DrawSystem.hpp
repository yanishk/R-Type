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
        };
    }
}

#endif /* !DRAWSYSTEM_HPP_ */
