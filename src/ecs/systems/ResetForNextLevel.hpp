/*
** EPITECH PROJECT, 2024
** B-CPP-500-PAR-5-1-rtype-yanis.harkouk
** File description:
** ResetForNextLevel
*/

#ifndef RESETFORNEXTLEVEL_HPP_
#define RESETFORNEXTLEVEL_HPP_

#include "Components.hpp"
#include "ISystem.hpp"

namespace ecs {
    namespace system {

        class ResetForNextLevel : virtual public ecs::system::ISystem {
            public:
                ResetForNextLevel() = default;
                ~ResetForNextLevel() = default;

                void operator()(Registry &reg) override;

            protected:
            private:
        };
    }
}

#endif /* !RESETFORNEXTLEVEL_HPP_ */
