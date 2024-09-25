/*
** EPITECH PROJECT, 2024
** B-CPP-500-PAR-5-1-rtype-yanis.harkouk
** File description:
** PositionSystem
*/

#ifndef POSITIONSYSTEM_HPP_
#define POSITIONSYSTEM_HPP_

#include "Components.hpp"
#include "ISystem.hpp"

namespace ecs {
    namespace system {
        class PositionSystem : virtual public ecs::system::ISystem {
          public:
            PositionSystem() = default;
            ~PositionSystem() = default;

            void operator()(Registry &reg) override;
          private:
            void playerPosition(std::size_t playerIndex, Registry &reg);
        };
    }
}

#endif /* !POSITIONSYSTEM_HPP_ */
