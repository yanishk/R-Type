/*
** EPITECH PROJECT, 2024
** B-CPP-500-PAR-5-1-rtype-yanis.harkouk
** File description:
** PlayerSpawnSystem
*/

#ifndef PLAYERSPAWNSYSTEM_HPP_
#define PLAYERSPAWNSYSTEM_HPP_

#include "Components.hpp"
#include "ISystem.hpp"

#define CYAN                                                                                                                               \
    CLITERAL(Color) { 120, 200, 225, 255 }

namespace ecs {
    namespace system {
        class PlayerSpawnSystem : virtual public ecs::system::ISystem {
          public:
            PlayerSpawnSystem() = default;
            ~PlayerSpawnSystem() = default;

            void operator()(Registry &reg) override;

          private:
            void createNewPlayer(Registry &reg, entity_t entity, std::size_t clientIndex);
            std::size_t getPlayerTemplateIndex(Registry &reg);
            void setPlayerColor(entity_t playerEntity, std::size_t clientIndex, Registry &reg);
        };
    }
}

#endif /* !PLAYERSPAWNSYSTEM_HPP_ */
