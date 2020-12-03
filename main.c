#include "raylib.h"

// Variables Declarations
const int screenWidth = 450;
const int screenHeight = 450;

// Functions Declarations
// -------------------------------
static void Initialization(void);
static void Update(void);
static void DrawGame(void);
static void UpdateDrawFrame(void);
static void UnloadGame(void);

// Functions
// -------------------------------
int main(void) // The main function
{
    // Initialization
    //-----------------------
    Initialization();

    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose())
    {
        // Update/Draw gameloop
        UpdateDrawFrame();
    }

    // De-Initialization
    UnloadGame(); // Unload loaded data (textures, sounds, models...)

    CloseWindow(); // Close window and OpenGl context

    return 0;
}

static void Initialization(void) // Game Initializations
{
    InitWindow(screenWidth, screenHeight, "");
}

static void Update(void) // Update Game
{
}

static void DrawGame(void) // Draw Game
{
    // Start Drawing
    BeginDrawing();

    ClearBackground(BLACK);

    // End Drawing
    EndDrawing();
}

// Unload game variables
void UnloadGame(void)
{
    // TODO: Unload all dynamic loaded data ( textures, sounds, models...)
}

static void UpdateDrawFrame(void) // Update and Draw Game
{
    Update();
    DrawGame();
}
