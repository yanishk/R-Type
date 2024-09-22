/*
** EPITECH PROJECT, 2024
** B-CPP-500-PAR-5-1-rtype-yanis.harkouk
** File description:
** FiringSystem
*/

#ifndef FIRINGSYSTEM_HPP_
    #define FIRINGSYSTEM_HPP_

    #include "ISystem.hpp"
    #include "Components.hpp"
    #include "AssetsPath.hpp"
    #include <iostream>

namespace ecs
{
    namespace system
    {
        class FiringSystem : virtual public ecs::system::ISystem
        {
            public:
                FiringSystem() = default;
                ~FiringSystem() = default;

                void operator()(Registry &reg) override;
            private:
                void addShot(entity_t entity, float x, float y, Registry &reg);
        };
    }
}

#endif /* !FIRINGSYSTEM_HPP_ */
