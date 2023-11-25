#include "raylib.h"

int main()
{
	InitWindow(720, 480, "Game");

	while(!WindowShouldClose())
	{
		// UpdateGame();

		BeginDrawing();
		ClearBackground(WHITE);

		// DrawGame();

		EndDrawing();
	}

	CloseWindow();
}