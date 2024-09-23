/*
** EPITECH PROJECT, 2024
** B-CPP-500-PAR-5-1-rtype-yanis.harkouk
** File description:
** GameEngine
*/

#include "GameEngine.hpp"

GameEngine::GameEngine(ecs::Registry &reg, std::string &gameName) : _reg(reg)
{
    SetTraceLogLevel(TraceLogLevel::LOG_FATAL);
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, gameName.c_str());
    MaximizeWindow();
}

void GameEngine::run()
{
    SetTargetFPS(FPS_LIMIT);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();
        DrawFPS(SCREEN_WIDTH - FPS_MARGIN, MARGIN_TOP);
        _reg.runSystems();
    }
}
