#include "app.hpp"
#include <raylib.h>

void run_app() {
	InitWindow(1600, 900, "Filtro");
	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);
		EndDrawing();
	}
}