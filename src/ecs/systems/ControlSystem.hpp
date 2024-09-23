/*
** EPITECH PROJECT, 2024
** B-CPP-500-PAR-5-1-rtype-yanis.harkouk
** File description:
** ControlSystem
*/

#ifndef CONTROLSYSTEM_HPP_
    #define CONTROLSYSTEM_HPP_

    #include "ISystem.hpp"
    #include "Components.hpp"

    #define NEGATIVE_VELOCITY -5
    #define POSITIVE_VELOCITY 5

namespace ecs
{
    namespace system
    {
        class ControlSystem : virtual public ecs::system::ISystem
        {
            public:
                ControlSystem() = default;
                ~ControlSystem() = default;

                void operator()(Registry &reg) override;
        };
    }
}

#endif /* !CONTROLSYSTEM_HPP_ */
