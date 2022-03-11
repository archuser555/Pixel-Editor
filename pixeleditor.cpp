#include "raylib.h"
#include <iostream>

int recone(){
    DrawRectangle(0,0,50,50,BLUE);}
int rectwo(){
    DrawRectangle(50,0,50,50,BLUE);
}
int recthree(){
    DrawRectangle(100,0,50,50,BLUE);
}
int recfour(){
    DrawRectangle(150,0,50,50,BLUE);
}
int recfive(){
    DrawRectangle(200,0,50,50,BLUE);
}
int recsix(){
    DrawRectangle(250,0,50,50,BLUE);
}
int recseven(){
    DrawRectangle(300,0,50,50,BLUE);
}
int receight(){
    DrawRectangle(350,0,50,50,BLUE);
}
int recnin(){
    DrawRectangle(400,0,50,50,BLUE);
}
int recten(){
    DrawRectangle(450,0,50,50,BLUE);
}
int rec11(){
    DrawRectangle(500,0,50,50,BLUE);
}
int rec12(){
    DrawRectangle(550,0,50,50,BLUE);
}
int rec13(){
    DrawRectangle(600,0,50,50,BLUE);
}
int rec14(){
    DrawRectangle(650,0,50,50,BLUE);
}
int rec15(){
    DrawRectangle(700,0,50,50,BLUE);
}
int rec16(){
    DrawRectangle(750,0,50,50,BLUE);
}
int rec17(){
    DrawRectangle(800,0,50,50,BLUE);
}
int rec18(){
    DrawRectangle(850,0,50,50,BLUE);
}
int rec19(){
    DrawRectangle(900,0,50,50,BLUE);
}
int rec20(){
    DrawRectangle(950,0,50,50,BLUE);
}
int rec21(){
    DrawRectangle(1000,0,50,50,BLUE);
}
int rec22(){
    DrawRectangle(1050,0,50,50,BLUE);
}
int rec23(){
    DrawRectangle(1100,0,50,50,BLUE);
}
int rec24(){
    DrawRectangle(0,0,50,50,BLUE);
    }
int rec25(){
    DrawRectangle(50,0,50,50,BLUE);
}
int rec26(){
    DrawRectangle(100,0,50,50,BLUE);
}
int rec27(){
    DrawRectangle(150,0,50,50,BLUE);
}
int rec28(){
    DrawRectangle(200,0,50,50,BLUE);
}
int rec29(){
    DrawRectangle(250,0,50,50,BLUE);
}
int rec30(){
    DrawRectangle(300,0,50,50,BLUE);
}
int rec31(){
    DrawRectangle(350,0,50,50,BLUE);
}
int rec32(){
    DrawRectangle(400,0,50,50,BLUE);
}
int rec33(){
    DrawRectangle(450,0,50,50,BLUE);
}

int rec(int posx,int posy,int width,int height,Color color,Vector2 mp,int fiftin){
    //posx = posx + 300;
    int lol = posy;
    for(float a = 0;a < 22;a++){
    for(float i = 0;i < 22;i++){
        DrawRectangle(posx+i*50,posy,width,height,color);
        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin && mp.y < fiftin){
            recone();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+50 && mp.y < fiftin){
            rectwo();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+100 && mp.y < fiftin){
            recthree();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+150 && mp.y < fiftin){
            recfour();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+200 && mp.y < fiftin){
            recfive();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+250 && mp.y < fiftin){
            recsix();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+300 && mp.y < fiftin){
            recseven();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+350 && mp.y < fiftin){
            receight();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+400 && mp.y < fiftin){
            recnin();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+450 && mp.y < fiftin){
            recten();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+500 && mp.y < fiftin){
            rec11();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+550 && mp.y < fiftin){
            rec12();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+600 && mp.y < fiftin){
            rec13();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+650 && mp.y < fiftin){
            rec14();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+700 && mp.y < fiftin){
            rec15();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+750 && mp.y < fiftin){
            rec16();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+800 && mp.y < fiftin){
            rec17();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+850 && mp.y < fiftin){
            rec18();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+900 && mp.y < fiftin){
            rec19();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+950 && mp.y < fiftin){
            rec20();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1000 && mp.y < fiftin){
            rec21();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1050 && mp.y < fiftin){
            rec22();
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1100 && mp.y < fiftin){
            rec23();
        }
    }
    posy += 1.0f*50;
    }
}
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1100;
    const int screenHeight = 800;

    int fiften = 50; // very hard too understand but its true, fiftin = fiftin = fiftin = 50

    InitWindow(screenWidth, screenHeight, "Zakar Engine Pixel Editor");
    Color color = BLACK;

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    Vector2 mp;
    //---------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
        mp = GetMousePosition();
        std::cout << mp.x << "x-" << mp.y << "y" << std::endl;

            ClearBackground(RAYWHITE);
            rec(0, 0, fiften,fiften,color,mp,fiften);
        EndDrawing();
        if(IsKeyPressed(KEY_S)){
            
        }
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}