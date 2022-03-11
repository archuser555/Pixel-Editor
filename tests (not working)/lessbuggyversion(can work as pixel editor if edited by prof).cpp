/*******************************************************************************************
*
*   Zakar Engine Pixel Editor (zakarengine.github.io)
*
*   This Tool Are Based On Raylib 4.0
*   Zakar Engine is licensed under an unmodified GPL license
*
*   Copyright (c) 2022 Anass Zakar (@archuser555)
*
********************************************************************************************/

#include "raylib.h"
#include <iostream>
#include <chrono> // i use this two guys here for time lol
#include <thread> // btw

using namespace std;
//std::this_thread::sleep_for(std::chrono::milliseconds(100)); i plan to use this, but now after fixing bugs i dont think that

int DrawSHIT(float posx,float posy,float posz, float width, float height, float length,Color clor){
	DrawCube((Vector3){posx,posy,posz},width,height,length,clor);
}
int cube(float posx,float posy,float posz, float width, float height, float length, Color clor,Vector2 mp){
	float posx1 = posx + 0.1f;
	float fiftin = 47.0f; //what did you think?? fiften are seventy four of course dude?

		for(float a =0.0f;a < 16.0f;a++)
			{
				for(float i=0.0f;i < 16.0f;i++)
				{
					DrawCube((Vector3){posx+i,posy,posz},width,height,length,clor); 
					DrawCubeWires((Vector3){posx1+i,posy,posz},width,height,length,GREEN);
					if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin && mp.y < fiftin-5.0f){
						cout << posx << "-" << posy << "-" << posz << endl;
						DrawSHIT(posx,posy,posz-15.0f,width,height,length,WHITE); 
					}
		}
		posz += 1.0f;
	}
	return true;
}
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 800;

    InitWindow(screenWidth, screenHeight, "Zakar Engine Pixel Editor");
	

    // Define the camera to look into our 3d 
    Camera camera = { 0 };
	camera.position = (Vector3){ 8.5f, 10.0f, 8.5f }; // Camera position
    camera.target = (Vector3){ 8.5f, 0.0f, 8.5f };      // Camera looking at point
    camera.up = (Vector3){ 1.0f, 0.0f, 0.0f };          // Camera up vector (rotation towards target)
    camera.fovy = 86.5f;                                // Camera field-of-view Y
    camera.projection = CAMERA_PERSPECTIVE;                   // Camera mode type
    SetTargetFPS(60);                   // Set our game to run at 60 frames-per-second
	SetCameraMode(camera,CAMERA_FREE);
	 
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())        // Detect window close button or ESC key
    {
		
        // Update
        //----------------------------------------------------------------------------------
        UpdateCamera(&camera);          // Update camera
		Vector2 mp = GetMousePosition();
		cout << mp.x << "-" << mp.y << endl; 
		//for(float a = 0;a < 16;a++){
		
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(DARKPURPLE);

            BeginMode3D(camera);
				cube(1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,BLACK,mp);
				DrawGrid(1000, 1.0f);
            EndMode3D();

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}