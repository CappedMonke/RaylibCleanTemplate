#include "raylib.h"


int main()
{
    InitWindow(720, 480, "GameName");

    while (!WindowShouldClose())
    {
        // Update

        // UpdateGame()


        // Draw
        BeginDrawing();
        ClearBackground(WHITE);

        // DrawGame()

        EndDrawing();
    }

    CloseWindow();

    return 0;
}