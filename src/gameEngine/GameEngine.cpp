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
        EndDrawing();
        DrawFPS(SCREEN_WIDTH - FPS_MARGIN, MARGIN_TOP);
        _reg.runSystems();
        if (_gameState(_reg) != game::GameStatus::PLAYING)
            CloseWindow();
    }
}
