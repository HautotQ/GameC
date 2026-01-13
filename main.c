//
// Created by Quentin Hautot on 13/01/2026.
//

#include "raylib.h"
#include "src/world.h"

int main(void) {
    InitWindow(1000, 600, "Mini Minecraft - Raylib");
    SetTargetFPS(60);

    Camera3D camera = { 0 };
    camera.position = (Vector3){ 8.0f, 8.0f, 20.0f };
    camera.target   = (Vector3){ 8.0f, 8.0f, 0.0f };
    camera.up       = (Vector3){ 0.0f, 1.0f, 0.0f };
    camera.fovy     = 70.0f;
    camera.projection = CAMERA_PERSPECTIVE;

    CreateWorld();

    DisableCursor(); // FPS style

    while (!WindowShouldClose())
    {
        UpdateCamera(&camera, CAMERA_FIRST_PERSON);

        BeginDrawing();
        ClearBackground(SKYBLUE);

        BeginMode3D(camera);

        // Sol
        DrawGrid(20, 1.0f);

        // Blocs
        for (int x = 0; x < WX; x++)
            for (int y = 0; y < WY; y++)
                for (int z = 0; z < WZ; z++)
                {
                    if (world[x][y][z] != BLOCK_AIR)
                    {
                        Color color = GREEN;
                        if (world[x][y][z] == BLOCK_STONE) color = GRAY;

                        DrawCube((Vector3){ x, y, z }, 1.0f, 1.0f, 1.0f, color);
                        DrawCubeWires((Vector3){ x, y, z }, 1.0f, 1.0f, 1.0f, BLACK);
                    }
                }

        EndMode3D();

        DrawText("WASD + souris | Mini Minecraft", 10, 10, 20, BLACK);
        DrawFPS(10, 40);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
