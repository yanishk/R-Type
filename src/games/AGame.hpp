/*
** EPITECH PROJECT, 2024
** B-CPP-500-PAR-5-1-rtype-yanis.harkouk
** File description:
** AGame
*/

#ifndef AGAME_HPP_
    #define AGAME_HPP_

    #include "Registry.hpp"
    #include "Components.hpp"
    #include "IGame.hpp"

namespace game
{
    class AGame : virtual public game::IGame
    {
        public:
            AGame(const std::string &gameName) : _gameName(gameName) {};
            ~AGame() = default;

            void initializeGame() override {
                spawnEntities();
                registerComponents();
                addComponentsToEntities();
                addSystemsToRegister();
            };

        protected:
            ecs::Registry _reg;
            std::string _gameName;
            std::unordered_map<std::string, entity_t> _stringToEntity;
    };
}

#endif /* !AGAME_HPP_ */
