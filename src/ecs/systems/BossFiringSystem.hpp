/*
** EPITECH PROJECT, 2024
** B-CPP-500-PAR-5-1-rtype-yanis.harkouk
** File description:
** BossFiringSystem
*/

#ifndef BOSSFIRINGSYSTEM_HPP_
#define BOSSFIRINGSYSTEM_HPP_

#include "Components.hpp"
#include "ISystem.hpp"

namespace ecs {
    namespace system {

        class BossFiringSystem : virtual public ecs::system::ISystem {
            public:
                BossFiringSystem() = default;
                ~BossFiringSystem() = default;

                void operator()(Registry &reg) override;

            protected:
            private:
                void addShot(std::size_t index, Registry &reg);
                std::size_t getEnemyShootIndex(Registry &reg);

        };
    }
}

#endif /* !BOSSFIRINGSYSTEM_HPP_ */
