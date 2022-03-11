/*******************************************************************************************
*
*   raylib [core] example - Picking in 3d mode
*
*   This example has been created using raylib 1.3 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2015 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"
#include <iostream>
#include <list>
#include <iostream>
#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h> //for usleep dude, what did u think, recome to C99 BTW
#endif // _WIN32
#include <chrono> // i use this two guys here for time lol
#include <thread> // btw


    // Custom raylib color palette for amazing visuals, that what Ray Say lul
    #define LIGHTGRAY  (Color){ 200, 200, 200, 255 }        // Light Gray
    #define GRAY       (Color){ 130, 130, 130, 255 }        // Gray
    #define DARKGRAY   (Color){ 80, 80, 80, 255 }           // Dark Gray
    #define YELLOW     (Color){ 253, 249, 0, 255 }          // Yellow
    #define GOLD       (Color){ 255, 203, 0, 255 }          // Gold
    #define ORANGE     (Color){ 255, 161, 0, 255 }          // Orange
    #define PINK       (Color){ 255, 109, 194, 255 }        // Pink
    #define RED        (Color){ 230, 41, 55, 255 }          // Red
    #define MAROON     (Color){ 190, 33, 55, 255 }          // Maroon
    #define GREEN      (Color){ 0, 228, 48, 255 }           // Green
    #define LIME       (Color){ 0, 158, 47, 255 }           // Lime
    #define DARKGREEN  (Color){ 0, 117, 44, 255 }           // Dark Green
    #define SKYBLUE    (Color){ 102, 191, 255, 255 }        // Sky Blue
    #define BLUE       (Color){ 0, 121, 241, 255 }          // Blue
    #define DARKBLUE   (Color){ 0, 82, 172, 255 }           // Dark Blue
    #define PURPLE     (Color){ 200, 122, 255, 255 }        // Purple
    #define VIOLET     (Color){ 135, 60, 190, 255 }         // Violet
    #define DARKPURPLE (Color){ 112, 31, 126, 255 }         // Dark Purple
    #define BEIGE      (Color){ 211, 176, 131, 255 }        // Beige
    #define BROWN      (Color){ 127, 106, 79, 255 }         // Brown
    #define DARKBROWN  (Color){ 76, 63, 47, 255 }           // Dark Brown

    #define WHITE      (Color){ 255, 255, 255, 255 }        // White
    #define BLACK      (Color){ 0, 0, 0, 255 }              // Black
    #define BLANK      (Color){ 0, 0, 0, 0 }                // Transparent
    #define MAGENTA    (Color){ 255, 0, 255, 255 }          // Magenta
    #define RAYWHITE   (Color){ 245, 245, 245, 255 }        // Ray White

#define NUM_FRAMES  3

/*void sleepcp(int milliseconds);

void sleepcp(int milliseconds) // Cross-platform sleep function
{
    usleep(milliseconds * 1000);
}*/

typedef enum {
    STORAGE_POSITION_DEFAULTSIZEX      = 0,
    STORAGE_POSITION_DEFAULTPOSITIONX    = 1,
    STORAGE_POSITION_DEFAULTPOSITIONY    = 2,
    STORAGE_POSITION_DEFAULTSIZEY     = 3
} v;

void waitimnotsonic(int time){
    //sleepcp(200);
    std::this_thread::sleep_for(std::chrono::milliseconds(time));
}
using namespace std;

int checkedbox(Vector3 DefaultPosition,Vector3 DefaultSize){
    DrawCube(DefaultPosition, DefaultSize.x, DefaultSize.y, DefaultSize.z, GRAY);
    DrawCubeWires(DefaultPosition, DefaultSize.x, DefaultSize.y, DefaultSize.z, DARKGRAY);
    DrawCubeWires(DefaultPosition, DefaultSize.x + 0.2f, DefaultSize.y + 0.2f, DefaultSize.z + 0.2f, GREEN);
}
int colorpiker(int posx,int posy,int width,int height, Color color){
    DrawRectangle(posx,posy,width,height,color);
}

class Cube {        // The class
  public:              // Access specifier
    void New(Camera camera,Color material);   // Method/function declaration
};

void Cube::New(Camera camera,Color material) {
    //unsigned int microseconds = 1000; not worked to me lol
    const int screenWidth = 800;
    const int screenHeight = 450;
    float camzoom = 1.0f;
    const char *fileName = "pixelart.png";
    Vector3 DefaultPosition = { 0.0f, 1.0f, 0.0f };
    Vector3 DefaultSize = { 2.0f, 2.0f, 2.0f };

    Ray ray = { 0 };                    // Picking line ray

    RayCollision collision = { 0 };

      while (!WindowShouldClose())        // Detect window close button or ESC key
    {
        if (IsKeyPressed(KEY_ENTER))
        {
            SaveStorageValue(STORAGE_POSITION_DEFAULTPOSITIONX, DefaultPosition.x);
            SaveStorageValue(STORAGE_POSITION_DEFAULTSIZEX, DefaultSize.x);
            SaveStorageValue(STORAGE_POSITION_DEFAULTPOSITIONY, DefaultPosition.z);
            SaveStorageValue(STORAGE_POSITION_DEFAULTSIZEY, DefaultSize.z);
            TakeScreenshot(fileName); 
        }
        else if (IsKeyPressed(KEY_S))
        {
            // NOTE: If requested position could not be found, value 0 is returned
            DefaultPosition.x = LoadStorageValue(STORAGE_POSITION_DEFAULTPOSITIONX);
            DefaultSize.x = LoadStorageValue(STORAGE_POSITION_DEFAULTSIZEX);
            DefaultPosition.z = LoadStorageValue(STORAGE_POSITION_DEFAULTPOSITIONY);
            DefaultSize.z = LoadStorageValue(STORAGE_POSITION_DEFAULTSIZEY);
        }
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            if (!collision.hit)
            {
                ray = GetMouseRay(GetMousePosition(), camera);

                // Check collision between ray and box
                collision = GetRayCollisionBox(ray,
                            (BoundingBox){(Vector3){ DefaultPosition.x - DefaultSize.x/2, DefaultPosition.y - DefaultSize.y/2, DefaultPosition.z - DefaultSize.z/2 },
                                          (Vector3){ DefaultPosition.x + DefaultSize.x/2, DefaultPosition.y + DefaultSize.y/2, DefaultPosition.z + DefaultSize.z/2 }});
            }
            else collision.hit = false;
        }
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            BeginMode3D(camera);
                    camzoom -= (GetMouseWheelMove()*5);
        camera.fovy = camzoom;

                if (collision.hit)
                {
                        if (IsKeyDown(KEY_LEFT)){
                            DefaultPosition.z = DefaultPosition.z + 2;
                            waitimnotsonic(200);
                        }
                        if (IsKeyDown(KEY_RIGHT)){
                             DefaultPosition.z = DefaultPosition.z - 2;
                             waitimnotsonic(200);
                        }
                        if (IsKeyDown(KEY_UP)){
                            DefaultPosition.y = DefaultPosition.y + 2;
                            waitimnotsonic(200);
                        }
                        if (IsKeyDown(KEY_DOWN)){
                            DefaultPosition.y = DefaultPosition.y - 2;
                            waitimnotsonic(200);
                        }
                        checkedbox(DefaultPosition,DefaultSize);
                        
                    
                }
                else
                {
                    DrawCube(DefaultPosition, DefaultSize.x, DefaultSize.y, DefaultSize.z, material);
                    DrawCubeWires(DefaultPosition, DefaultSize.x, DefaultSize.y, DefaultSize.z, material);
                }


                DrawRay(ray, RAYWHITE);
                DrawGrid(1000, 1.0f);

            EndMode3D();
        EndDrawing();
    }
}

/*int cube(Vector3 position, float width, float height, float length, Color color){
    DrawCube(Vector3 position, float width, float height, float length, Color color);
}*/
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    list<float> liste;
    Cube Cube;
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Zakar Engine Editor");

    // Define the camera to look into our 3d world
    Camera camera = { 0 };
    camera.position = (Vector3){ 10.0f, 0.0f, 0.0f }; // Camera position
    camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };      // Camera looking at point
    camera.up = (Vector3){ 0.0f, 10.0f, 0.0f };          // Camera up vector (rotation towards target)
    camera.fovy = 45.0f;                                // Camera field-of-view Y
    /*SetConfigFlags(FLAG_MSAA_4X_HINT | FLAG_VSYNC_HINT);
    int score = 0;
    int hiscore = 0;
    int framesCounter = 0;
    camera.position = (Vector3){ 70.0f, 70.0f, 0.0f }; // Camera position
    camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };      // Camera looking at point
    camera.up = (Vector3){ 0.0f, 0.6f, 0.0f };          // Camera up vector (rotation towards target)
    camera.fovy = 45.0f;                                // Camera field-of-view Y
    camera.projection = CAMERA_PERSPECTIVE;                   // Camera mode type
    int btnState = 0;               // Button state: 0-NORMAL, 1-MOUSE_HOVER, 2-PRESSED
    bool btnAction = false;         // Button action should be activated
    SetCameraMode(camera, CAMERA_FREE);

    Vector3 DefaultPosition = { 0.0f, 1.0f, 0.0f };
    Vector3 DefaultSize = { 2.0f, 2.0f, 2.0f };

    Ray ray = { 0 };                    // Picking line ray

    RayCollision collision = { 0 };*/

    SetTargetFPS(60);                   // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())        // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        UpdateCamera(&camera);          // Update camera
        Cube.New(camera,RED); 
/*        if (IsKeyPressed(KEY_ENTER))
        {
            SaveStorageValue(STORAGE_POSITION_DEFAULTPOSITIONX, DefaultPosition.x);
            SaveStorageValue(STORAGE_POSITION_DEFAULTSIZEX, DefaultSize.x);
            SaveStorageValue(STORAGE_POSITION_DEFAULTPOSITIONY, DefaultPosition.z);
            SaveStorageValue(STORAGE_POSITION_DEFAULTSIZEY, DefaultSize.z);
        }
        else if (IsKeyPressed(KEY_S))
        {
            // NOTE: If requested position could not be found, value 0 is returned
            DefaultPosition.x = LoadStorageValue(STORAGE_POSITION_DEFAULTPOSITIONX);
            DefaultSize.x = LoadStorageValue(STORAGE_POSITION_DEFAULTSIZEX);
            DefaultPosition.z = LoadStorageValue(STORAGE_POSITION_DEFAULTPOSITIONY);
            DefaultSize.z = LoadStorageValue(STORAGE_POSITION_DEFAULTSIZEY);
        }
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            if (!collision.hit)
            {
                ray = GetMouseRay(GetMousePosition(), camera);

                // Check collision between ray and box
                collision = GetRayCollisionBox(ray,
                            (BoundingBox){(Vector3){ DefaultPosition.x - DefaultSize.x/2, DefaultPosition.y - DefaultSize.y/2, DefaultPosition.z - DefaultSize.z/2 },
                                          (Vector3){ DefaultPosition.x + DefaultSize.x/2, DefaultPosition.y + DefaultSize.y/2, DefaultPosition.z + DefaultSize.z/2 }});
            }
            else collision.hit = false;
        }
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            BeginMode3D(camera);

                if (collision.hit)
                {
                        if (IsKeyPressed(KEY_UP)){
                            DefaultPosition.x = DefaultPosition.x - 1;
                        }
                        if (IsKeyPressed(KEY_DOWN)){
                             DefaultPosition.x = DefaultPosition.x + 1;
                        }
                        if (IsKeyPressed(KEY_LEFT)){
                        DefaultPosition.z = DefaultPosition.z + 1;
                        }
                        if (IsKeyPressed(KEY_RIGHT)){
                            DefaultPosition.z = DefaultPosition.z - 1;
                        }
                        checkedbox(DefaultPosition,DefaultSize);
                    
                }
                else
                {
                    DrawCube(DefaultPosition, DefaultSize.x, DefaultSize.y, DefaultSize.z, GRAY);
                    DrawCubeWires(DefaultPosition, DefaultSize.x, DefaultSize.y, DefaultSize.z, DARKGRAY);
                }


                DrawRay(ray, MAROON);
                DrawGrid(1000, 1.0f);

            EndMode3D();
        EndDrawing();
        //----------------------------------------------------------------------------------
    }*/

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
  }
}
/*#include <list>
#include <iostream>
using namespace std;
int main()
{
list<int> liste;
liste.push_back(5);
liste.push_back(8);
liste.push_back(7);

for(list<int>::iterator it = liste.begin(); it!=liste.end(); ++it)
{
cout << *it << endl;
}
return 0;
}*/
//WTF, i really forget why i add this comment, just for let the code with 300 lines i guess