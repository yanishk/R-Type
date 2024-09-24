/*
** EPITECH PROJECT, 2024
** B-CPP-500-PAR-5-1-rtype-yanis.harkouk
** File description:
** GameEngine
*/

#include "GameEngine.hpp"

void GameEngine::run()
{
    SetTargetFPS(FPS_LIMIT);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        _reg.runSystems();
        EndDrawing();
        if (_gameState(_reg) != game::GameStatus::PLAYING)
            CloseWindow();
    }
}
