/*
** EPITECH PROJECT, 2024
** B-CPP-500-PAR-5-1-rtype-yanis.harkouk
** File description:
** ISystem
*/

#ifndef ISYSTEM_HPP_
    #define ISYSTEM_HPP_

    #include "Registry.hpp"

namespace ecs
{
    namespace system
    {
        class ISystem
        {
            public:
                ISystem() = default;
                ~ISystem() = default;

                virtual void operator()(Registry &reg) = 0;
        };
    }
}

#endif /* !ISYSTEM_HPP_ */
