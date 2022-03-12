#include "raylib.h"
#include <iostream>

int recone(){
    DrawRectangle(0,0,50,50,BLUE);
}
int rec(int posx,int posy,int width,int height,Color color,Vector2 mp,int fiftin){
    //posx = posx + 300;
    int lol = posy;
    for(float a = 0;a < 22;a++){
    for(float i = 0;i < 22;i++){
        DrawRectangle(posx+i*50,posy,width,height,BLACK);
        
        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin && mp.y < fiftin){
            recone();
        }
    }
    posy += 1.0f*50;
    }
}
int main(void)
{
    bool rec1 = false;
    bool rec2 = false;
    bool rec3 = false;
    bool rec4 = false;
    bool rec5 = false;
    bool rec6 = false;
    bool rec7 = false;
    bool rec8 = false;
    bool rec9 = false;
    bool rec10 = false;
    bool rec11 = false;
    bool rec12 = false;
    bool rec13 = false;
    bool rec14 = false;
    bool rec15 = false;
    bool rec16 = false;
    bool rec17 = false;
    bool rec18 = false;
    bool rec19 = false;
    bool rec20 = false;
    bool rec21 = false;
    bool rec22 = false;
    bool rec23 = false;
    bool rec24 = false; 
bool rec25 = false; 
bool rec26 = false; 
bool rec27 = false; 
bool rec28 = false; 
bool rec29 = false; 
bool rec30 = false; 
bool rec31 = false; 
bool rec32 = false; 
bool rec33 = false; 
bool rec34 = false; 
bool rec35 = false; 
bool rec36 = false; 
bool rec37 = false; 
bool rec38 = false; 
bool rec39 = false; 
bool rec40 = false; 
bool rec41 = false; 
bool rec42 = false; 
bool rec43 = false; 
bool rec44 = false; 
bool rec45 = false; 
bool rec46 = false; 
bool rec47 = false; 
bool rec48 = false; 
bool rec49 = false; 
bool rec50 = false; 
bool rec51 = false; 
bool rec52 = false; 
bool rec53 = false; 
bool rec54 = false; 
bool rec55 = false; 
bool rec56 = false; 
bool rec57 = false; 
bool rec58 = false; 
bool rec59 = false; 
bool rec60 = false; 
bool rec61 = false; 
bool rec62 = false; 
bool rec63 = false; 
bool rec64 = false; 
bool rec65 = false; 
bool rec66 = false; 
bool rec67 = false; 
bool rec68 = false; 
bool rec69 = false; 
bool rec70 = false; 
bool rec71 = false; 
bool rec72 = false; 
bool rec73 = false; 
bool rec74 = false; 
bool rec75 = false; 
bool rec76 = false; 
bool rec77 = false; 
bool rec78 = false; 
bool rec79 = false; 
bool rec80 = false; 
bool rec81 = false; 
bool rec82 = false; 
bool rec83 = false; 
bool rec84 = false; 
bool rec85 = false; 
bool rec86 = false; 
bool rec87 = false; 
bool rec88 = false; 
bool rec89 = false; 
bool rec90 = false; 
bool rec91 = false; 
bool rec92 = false; 
bool rec93 = false; 
bool rec94 = false; 
bool rec95 = false; 
bool rec96 = false; 
bool rec97 = false; 
bool rec98 = false; 
bool rec99 = false; 
bool rec100 = false; 
bool rec101 = false; 
bool rec102 = false; 
bool rec103 = false; 
bool rec104 = false; 
bool rec105 = false; 
bool rec106 = false; 
bool rec107 = false; 
bool rec108 = false; 
bool rec109 = false; 
bool rec110 = false; 
bool rec111 = false; 
bool rec112 = false; 
bool rec113 = false; 
bool rec114 = false; 
bool rec115 = false; 
bool rec116 = false; 
bool rec117 = false; 
bool rec118 = false; 
bool rec119 = false; 
bool rec120 = false; 
bool rec121 = false; 
bool rec122 = false; 
bool rec123 = false; 
bool rec124 = false; 
bool rec125 = false; 
bool rec126 = false; 
bool rec127 = false; 
bool rec128 = false; 
bool rec129 = false; 
bool rec130 = false; 
bool rec131 = false; 
bool rec132 = false; 
bool rec133 = false; 
bool rec134 = false; 
bool rec135 = false; 
bool rec136 = false; 
bool rec137 = false; 
bool rec138 = false; 
bool rec139 = false; 
bool rec140 = false; 
bool rec141 = false; 
bool rec142 = false; 
bool rec143 = false; 
bool rec144 = false; 
bool rec145 = false; 
bool rec146 = false; 
bool rec147 = false; 
bool rec148 = false; 
bool rec149 = false; 
bool rec150 = false; 
bool rec151 = false; 
bool rec152 = false; 
bool rec153 = false; 
bool rec154 = false; 
bool rec155 = false; 
bool rec156 = false; 
bool rec157 = false; 
bool rec158 = false; 
bool rec159 = false; 
bool rec160 = false; 
bool rec161 = false; 
bool rec162 = false; 
bool rec163 = false; 
bool rec164 = false; 
bool rec165 = false; 
bool rec166 = false; 
bool rec167 = false; 
bool rec168 = false; 
bool rec169 = false; 
bool rec170 = false; 
bool rec171 = false; 
bool rec172 = false; 
bool rec173 = false; 
bool rec174 = false; 
bool rec175 = false; 
bool rec176 = false; 
bool rec177 = false; 
bool rec178 = false; 
bool rec179 = false; 
bool rec180 = false; 
bool rec181 = false; 
bool rec182 = false; 
bool rec183 = false; 
bool rec184 = false; 
bool rec185 = false; 
bool rec186 = false; 
bool rec187 = false; 
bool rec188 = false; 
bool rec189 = false; 
bool rec190 = false; 
bool rec191 = false; 
bool rec192 = false; 
bool rec193 = false; 
bool rec194 = false; 
bool rec195 = false; 
bool rec196 = false; 
bool rec197 = false; 
bool rec198 = false; 
bool rec199 = false; 
bool rec200 = false; 
bool rec201 = false; 
bool rec202 = false; 
bool rec203 = false; 
bool rec204 = false; 
bool rec205 = false; 
bool rec206 = false; 
bool rec207 = false; 
bool rec208 = false; 
bool rec209 = false; 
bool rec210 = false; 
bool rec211 = false; 
bool rec212 = false; 
bool rec213 = false; 
bool rec214 = false; 
bool rec215 = false; 
bool rec216 = false; 
bool rec217 = false; 
bool rec218 = false; 
bool rec219 = false; 
bool rec220 = false; 
bool rec221 = false; 
bool rec222 = false; 
bool rec223 = false; 
bool rec224 = false; 
bool rec225 = false; 
bool rec226 = false; 
bool rec227 = false; 
bool rec228 = false; 
bool rec229 = false; 
bool rec230 = false; 
bool rec231 = false; 
bool rec232 = false; 
bool rec233 = false; 
bool rec234 = false; 
bool rec235 = false; 
bool rec236 = false; 
bool rec237 = false; 
bool rec238 = false; 
bool rec239 = false; 
bool rec240 = false; 
bool rec241 = false; 
bool rec242 = false; 
bool rec243 = false; 
bool rec244 = false; 
bool rec245 = false; 
bool rec246 = false; 
bool rec247 = false; 
bool rec248 = false; 
bool rec249 = false; 
bool rec250 = false; 
bool rec251 = false; 
bool rec252 = false; 
bool rec253 = false; 
bool rec254 = false; 
bool rec255 = false; 
bool rec256 = false; 
bool rec257 = false; 
bool rec258 = false; 
bool rec259 = false; 
bool rec260 = false; 
bool rec261 = false; 
bool rec262 = false; 
bool rec263 = false; 
bool rec264 = false; 
bool rec265 = false; 
bool rec266 = false; 
bool rec267 = false; 
bool rec268 = false; 
bool rec269 = false; 
bool rec270 = false; 
bool rec271 = false; 
bool rec272 = false; 
bool rec273 = false; 
bool rec274 = false; 
bool rec275 = false; 
bool rec276 = false; 
bool rec277 = false; 
bool rec278 = false; 
bool rec279 = false; 
bool rec280 = false; 
bool rec281 = false; 
bool rec282 = false; 
bool rec283 = false; 
bool rec284 = false; 
bool rec285 = false; 
bool rec286 = false; 
bool rec287 = false; 
bool rec288 = false; 
bool rec289 = false; 
bool rec290 = false; 
bool rec291 = false; 
bool rec292 = false; 
bool rec293 = false; 
bool rec294 = false; 
bool rec295 = false; 
bool rec296 = false; 
bool rec297 = false; 
bool rec298 = false; 
bool rec299 = false; 
bool rec300 = false; 
bool rec301 = false; 
bool rec302 = false; 
bool rec303 = false; 
bool rec304 = false; 
bool rec305 = false; 
bool rec306 = false; 
bool rec307 = false; 
bool rec308 = false; 
bool rec309 = false; 
bool rec310 = false; 
bool rec311 = false; 
bool rec312 = false; 
bool rec313 = false; 
bool rec314 = false; 
bool rec315 = false; 
bool rec316 = false; 
bool rec317 = false; 
bool rec318 = false; 
bool rec319 = false; 
bool rec320 = false; 
bool rec321 = false; 
bool rec322 = false; 
bool rec323 = false; 
bool rec324 = false; 
bool rec325 = false; 
bool rec326 = false; 
bool rec327 = false; 
bool rec328 = false; 
bool rec329 = false; 
bool rec330 = false; 
bool rec331 = false; 
bool rec332 = false; 
bool rec333 = false; 
bool rec334 = false; 
bool rec335 = false; 
bool rec336 = false; 
bool rec337 = false; 
bool rec338 = false; 
bool rec339 = false; 
bool rec340 = false; 
bool rec341 = false; 
bool rec342 = false; 
bool rec343 = false; 
bool rec344 = false; 
bool rec345 = false; 
bool rec346 = false; 
bool rec347 = false; 
bool rec348 = false; 
bool rec349 = false; 
bool rec350 = false; 
bool rec351 = false; 
//1100
bool rec352 = false; 
bool rec353 = false; 
bool rec354 = false; 
bool rec355 = false; 
bool rec356 = false; 
bool rec357 = false; 
bool rec358 = false; 
bool rec359 = false; 
bool rec360 = false; 
bool rec361 = false; 
bool rec362 = false; 
bool rec363 = false; 
bool rec364 = false; 
bool rec365 = false; 
bool rec366 = false; 
bool rec367 = false;
//WHY DID YOU READ THE CODE, U SPEND YOUR TIME!!
bool rec368 = false; 
bool rec369 = false; 
bool rec370 = false; 
bool rec371 = false; 
bool rec372 = false; 
bool rec373 = false; 
bool rec374 = false; 
bool rec375 = false; 
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1100;
    const int screenHeight = 800;
    const char *fileNamepng = "pxelart.png";
    int fiftin = 50; // very hard too understand but its true, fiftin = fiftin = fiftin = 50
    Color color = BLUE;
    InitWindow(screenWidth, screenHeight, "Zakar Engine Pixel Editor");
    Color colore = BLACK;

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    Vector2 mp;
    //---------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)){
            color = BLUE;
        }
        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin && mp.y < fiftin){
            rec1 = true;
        }
        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+50 && mp.y < fiftin){
            rec2 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+100 && mp.y < fiftin){
            rec3 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+150 && mp.y < fiftin){
            rec4 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+200 && mp.y < fiftin){
            rec5 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+250 && mp.y < fiftin){
            rec6 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+300 && mp.y < fiftin){
            rec7 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+350 && mp.y < fiftin){
            rec8 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+400 && mp.y < fiftin){
            rec9 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+450 && mp.y < fiftin){
            rec10 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+500 && mp.y < fiftin){
            rec11 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+550 && mp.y < fiftin){
            rec12 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+600 && mp.y < fiftin){
            rec13 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+650 && mp.y < fiftin){
            rec14 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+700 && mp.y < fiftin){
            rec15 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+750 && mp.y < fiftin){
            rec16 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+800 && mp.y < fiftin){
            rec17 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+850 && mp.y < fiftin){
            rec18 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+900 && mp.y < fiftin){
            rec19 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+950 && mp.y < fiftin){
            rec20 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1000 && mp.y < fiftin){
            rec21 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1050 && mp.y < fiftin){
            rec22 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1100 && mp.y < fiftin){
            rec23 = true;
        }
        else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+0 && mp.y < fiftin+50){
            rec24 = true;
        }

        //50
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+50 && mp.y < fiftin+50){
rec25 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+100 && mp.y < fiftin+50){
rec26 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+150 && mp.y < fiftin+50){
rec27 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+200 && mp.y < fiftin+50){
rec28 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+250 && mp.y < fiftin+50){
rec29 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+300 && mp.y < fiftin+50){
rec30 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+350 && mp.y < fiftin+50){
rec31 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+400 && mp.y < fiftin+50){
rec32 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+450 && mp.y < fiftin+50){
rec33 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+500 && mp.y < fiftin+50){
rec34 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+550 && mp.y < fiftin+50){
rec35 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+600 && mp.y < fiftin+50){
rec36 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+650 && mp.y < fiftin+50){
rec37 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+700 && mp.y < fiftin+50){
rec38 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+750 && mp.y < fiftin+50){
rec39 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+800 && mp.y < fiftin+50){
rec40 = true;
}
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+850 && mp.y < fiftin+50){
rec41 = true;
}
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+900 && mp.y < fiftin+50){
rec42 = true;
}
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+950 && mp.y < fiftin+50){
rec43 = true;
}
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1000 && mp.y < fiftin+50){
rec44 = true;
}
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1050 && mp.y < fiftin+50){
rec45 = true;
}
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+0 && mp.y < fiftin+100){
rec46 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+50 && mp.y < fiftin+100){
rec47 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+100 && mp.y < fiftin+100){
rec48 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+150 && mp.y < fiftin+100){
rec49 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+200 && mp.y < fiftin+100){
rec50 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+250 && mp.y < fiftin+100){
rec51 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+300 && mp.y < fiftin+100){
rec52 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+350 && mp.y < fiftin+100){
rec53 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+400 && mp.y < fiftin+100){
rec54 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+450 && mp.y < fiftin+100){
rec55 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+500 && mp.y < fiftin+100){
rec56 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+550 && mp.y < fiftin+100){
rec57 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+600 && mp.y < fiftin+100){
rec58 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+650 && mp.y < fiftin+100){
rec59 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+700 && mp.y < fiftin+100){
rec60 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+750 && mp.y < fiftin+100){
rec61 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+800 && mp.y < fiftin+100){
rec62 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+850 && mp.y < fiftin+100){
rec63 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+900 && mp.y < fiftin+100){
rec64 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+950 && mp.y < fiftin+100){
rec65 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1000 && mp.y < fiftin+100){
rec66 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1050 && mp.y < fiftin+100){
rec67 = true;
}
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+0 && mp.y < fiftin+150){
rec68 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+50 && mp.y < fiftin+150){
rec69 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+100 && mp.y < fiftin+150){
rec70 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+150 && mp.y < fiftin+150){
rec71 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+200 && mp.y < fiftin+150){
rec72 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+250 && mp.y < fiftin+150){
rec73 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+300 && mp.y < fiftin+150){
rec74 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+350 && mp.y < fiftin+150){
rec75 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+400 && mp.y < fiftin+150){
rec76 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+450 && mp.y < fiftin+150){
rec77 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+500 && mp.y < fiftin+150){
rec78 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+550 && mp.y < fiftin+150){
rec79 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+600 && mp.y < fiftin+150){
rec80 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+650 && mp.y < fiftin+150){
rec81 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+700 && mp.y < fiftin+150){
rec82 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+750 && mp.y < fiftin+150){
rec83 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+800 && mp.y < fiftin+150){
rec84 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+850 && mp.y < fiftin+150){
rec85 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+900 && mp.y < fiftin+150){
rec86 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+950 && mp.y < fiftin+150){
rec87 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1000 && mp.y < fiftin+150){
rec88 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1050 && mp.y < fiftin+150){
rec89 = true;
}
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+0 && mp.y < fiftin+200){
rec90 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+50 && mp.y < fiftin+200){
rec91 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+100 && mp.y < fiftin+200){
rec92 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+150 && mp.y < fiftin+200){
rec93 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+200 && mp.y < fiftin+200){
rec94 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+250 && mp.y < fiftin+200){
rec95 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+300 && mp.y < fiftin+200){
rec96 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+350 && mp.y < fiftin+200){
rec97 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+400 && mp.y < fiftin+200){
rec98 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+450 && mp.y < fiftin+200){
rec99 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+500 && mp.y < fiftin+200){
rec100 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+550 && mp.y < fiftin+200){
rec101 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+600 && mp.y < fiftin+200){
rec102 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+650 && mp.y < fiftin+200){
rec103 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+700 && mp.y < fiftin+200){
rec104 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+750 && mp.y < fiftin+200){
rec105 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+800 && mp.y < fiftin+200){
rec106 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+850 && mp.y < fiftin+200){
rec107 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+900 && mp.y < fiftin+200){
rec108 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+950 && mp.y < fiftin+200){
rec109 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1000 && mp.y < fiftin+200){
rec110 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1050 && mp.y < fiftin+200){
rec111 = true;
}
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+0 && mp.y < fiftin+250){
rec112 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+50 && mp.y < fiftin+250){
rec113 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+100 && mp.y < fiftin+250){
rec114 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+150 && mp.y < fiftin+250){
rec115 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+200 && mp.y < fiftin+250){
rec116 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+250 && mp.y < fiftin+250){
rec117 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+300 && mp.y < fiftin+250){
rec118 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+350 && mp.y < fiftin+250){
rec119 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+400 && mp.y < fiftin+250){
rec120 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+450 && mp.y < fiftin+250){
rec121 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+500 && mp.y < fiftin+250){
rec122 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+550 && mp.y < fiftin+250){
rec123 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+600 && mp.y < fiftin+250){
rec124 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+650 && mp.y < fiftin+250){
rec125 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+700 && mp.y < fiftin+250){
rec126 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+750 && mp.y < fiftin+250){
rec127 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+800 && mp.y < fiftin+250){
rec128 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+850 && mp.y < fiftin+250){
rec129 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+900 && mp.y < fiftin+250){
rec130 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+950 && mp.y < fiftin+250){
rec131 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1000 && mp.y < fiftin+250){
rec132 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1050 && mp.y < fiftin+250){
rec133 = true;
}
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+0 && mp.y < fiftin+300){
rec134 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+50 && mp.y < fiftin+300){
rec135 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+100 && mp.y < fiftin+300){
rec136 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+150 && mp.y < fiftin+300){
rec137 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+200 && mp.y < fiftin+300){
rec138 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+250 && mp.y < fiftin+300){
rec139 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+300 && mp.y < fiftin+300){
rec140 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+350 && mp.y < fiftin+300){
rec141 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+400 && mp.y < fiftin+300){
rec142 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+450 && mp.y < fiftin+300){
rec143 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+500 && mp.y < fiftin+300){
rec144 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+550 && mp.y < fiftin+300){
rec145 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+600 && mp.y < fiftin+300){
rec146 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+650 && mp.y < fiftin+300){
rec147 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+700 && mp.y < fiftin+300){
rec148 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+750 && mp.y < fiftin+300){
rec149 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+800 && mp.y < fiftin+300){
rec150 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+850 && mp.y < fiftin+300){
rec151 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+900 && mp.y < fiftin+300){
rec152 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+950 && mp.y < fiftin+300){
rec153 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1000 && mp.y < fiftin+300){
rec154 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1050 && mp.y < fiftin+300){
rec155 = true;
}
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+0 && mp.y < fiftin+350){
rec156 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+50 && mp.y < fiftin+350){
rec157 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+100 && mp.y < fiftin+350){
rec158 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+150 && mp.y < fiftin+350){
rec159 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+200 && mp.y < fiftin+350){
rec160 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+250 && mp.y < fiftin+350){
rec161 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+300 && mp.y < fiftin+350){
rec162 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+350 && mp.y < fiftin+350){
rec163 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+400 && mp.y < fiftin+350){
rec164 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+450 && mp.y < fiftin+350){
rec165 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+500 && mp.y < fiftin+350){
rec166 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+550 && mp.y < fiftin+350){
rec167 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+600 && mp.y < fiftin+350){
rec168 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+650 && mp.y < fiftin+350){
rec169 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+700 && mp.y < fiftin+350){
rec170 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+750 && mp.y < fiftin+350){
rec171 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+800 && mp.y < fiftin+350){
rec172 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+850 && mp.y < fiftin+350){
rec173 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+900 && mp.y < fiftin+350){
rec174 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+950 && mp.y < fiftin+350){
rec175 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1000 && mp.y < fiftin+350){
rec176 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1050 && mp.y < fiftin+350){
rec177 = true;
}
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+0 && mp.y < fiftin+400){
rec178 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+50 && mp.y < fiftin+400){
rec179 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+100 && mp.y < fiftin+400){
rec180 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+150 && mp.y < fiftin+400){
rec181 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+200 && mp.y < fiftin+400){
rec182 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+250 && mp.y < fiftin+400){
rec183 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+300 && mp.y < fiftin+400){
rec184 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+350 && mp.y < fiftin+400){
rec185 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+400 && mp.y < fiftin+400){
rec186 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+450 && mp.y < fiftin+400){
rec187 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+500 && mp.y < fiftin+400){
rec188 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+550 && mp.y < fiftin+400){
rec189 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+600 && mp.y < fiftin+400){
rec190 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+650 && mp.y < fiftin+400){
rec191 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+700 && mp.y < fiftin+400){
rec192 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+750 && mp.y < fiftin+400){
rec193 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+800 && mp.y < fiftin+400){
rec194 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+850 && mp.y < fiftin+400){
rec195 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+900 && mp.y < fiftin+400){
rec196 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+950 && mp.y < fiftin+400){
rec197 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1000 && mp.y < fiftin+400){
rec198 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1050 && mp.y < fiftin+400){
rec199 = true;
}
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+0 && mp.y < fiftin+450){
rec200 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+50 && mp.y < fiftin+450){
rec201 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+100 && mp.y < fiftin+450){
rec202 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+150 && mp.y < fiftin+450){
rec203 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+200 && mp.y < fiftin+450){
rec204 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+250 && mp.y < fiftin+450){
rec205 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+300 && mp.y < fiftin+450){
rec206 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+350 && mp.y < fiftin+450){
rec207 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+400 && mp.y < fiftin+450){
rec208 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+450 && mp.y < fiftin+450){
rec209 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+500 && mp.y < fiftin+450){
rec210 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+550 && mp.y < fiftin+450){
rec211 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+600 && mp.y < fiftin+450){
rec212 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+650 && mp.y < fiftin+450){
rec213 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+700 && mp.y < fiftin+450){
rec214 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+750 && mp.y < fiftin+450){
rec215 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+800 && mp.y < fiftin+450){
rec216 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+850 && mp.y < fiftin+450){
rec217 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+900 && mp.y < fiftin+450){
rec218 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+950 && mp.y < fiftin+450){
rec219 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1000 && mp.y < fiftin+450){
rec220 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1050 && mp.y < fiftin+450){
rec221 = true;
}
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+0 && mp.y < fiftin+500){
rec222 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+50 && mp.y < fiftin+500){
rec223 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+100 && mp.y < fiftin+500){
rec224 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+150 && mp.y < fiftin+500){
rec225 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+200 && mp.y < fiftin+500){
rec226 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+250 && mp.y < fiftin+500){
rec227 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+300 && mp.y < fiftin+500){
rec228 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+350 && mp.y < fiftin+500){
rec229 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+400 && mp.y < fiftin+500){
rec230 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+450 && mp.y < fiftin+500){
rec231 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+500 && mp.y < fiftin+500){
rec232 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+550 && mp.y < fiftin+500){
rec233 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+600 && mp.y < fiftin+500){
rec234 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+650 && mp.y < fiftin+500){
rec235 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+700 && mp.y < fiftin+500){
rec236 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+750 && mp.y < fiftin+500){
rec237 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+800 && mp.y < fiftin+500){
rec238 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+850 && mp.y < fiftin+500){
rec239 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+900 && mp.y < fiftin+500){
rec240 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+950 && mp.y < fiftin+500){
rec241 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1000 && mp.y < fiftin+500){
rec242 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1050 && mp.y < fiftin+500){
rec243 = true;
}
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+0 && mp.y < fiftin+550){
rec244 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+50 && mp.y < fiftin+550){
rec245 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+100 && mp.y < fiftin+550){
rec246 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+150 && mp.y < fiftin+550){
rec247 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+200 && mp.y < fiftin+550){
rec248 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+250 && mp.y < fiftin+550){
rec249 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+300 && mp.y < fiftin+550){
rec250 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+350 && mp.y < fiftin+550){
rec251 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+400 && mp.y < fiftin+550){
rec252 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+450 && mp.y < fiftin+550){
rec253 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+500 && mp.y < fiftin+550){
rec254 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+550 && mp.y < fiftin+550){
rec255 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+600 && mp.y < fiftin+550){
rec256 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+650 && mp.y < fiftin+550){
rec257 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+700 && mp.y < fiftin+550){
rec258 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+750 && mp.y < fiftin+550){
rec259 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+800 && mp.y < fiftin+550){
rec260 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+850 && mp.y < fiftin+550){
rec261 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+900 && mp.y < fiftin+550){
rec262 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+950 && mp.y < fiftin+550){
rec263 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1000 && mp.y < fiftin+550){
rec264 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1050 && mp.y < fiftin+550){
rec265 = true;
}
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+0 && mp.y < fiftin+600){
rec266 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+50 && mp.y < fiftin+600){
rec267 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+100 && mp.y < fiftin+600){
rec268 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+150 && mp.y < fiftin+600){
rec269 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+200 && mp.y < fiftin+600){
rec270 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+250 && mp.y < fiftin+600){
rec271 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+300 && mp.y < fiftin+600){
rec272 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+350 && mp.y < fiftin+600){
rec273 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+400 && mp.y < fiftin+600){
rec274 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+450 && mp.y < fiftin+600){
rec275 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+500 && mp.y < fiftin+600){
rec276 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+550 && mp.y < fiftin+600){
rec277 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+600 && mp.y < fiftin+600){
rec278 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+650 && mp.y < fiftin+600){
rec279 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+700 && mp.y < fiftin+600){
rec280 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+750 && mp.y < fiftin+600){
rec281 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+800 && mp.y < fiftin+600){
rec282 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+850 && mp.y < fiftin+600){
rec283 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+900 && mp.y < fiftin+600){
rec284 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+950 && mp.y < fiftin+600){
rec285 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1000 && mp.y < fiftin+600){
rec286 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1050 && mp.y < fiftin+600){
rec287 = true;
}
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+0 && mp.y < fiftin+650){
rec288 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+50 && mp.y < fiftin+650){
rec289 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+100 && mp.y < fiftin+650){
rec290 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+150 && mp.y < fiftin+650){
rec291 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+200 && mp.y < fiftin+650){
rec292 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+250 && mp.y < fiftin+650){
rec293 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+300 && mp.y < fiftin+650){
rec294 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+350 && mp.y < fiftin+650){
rec295 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+400 && mp.y < fiftin+650){
rec296 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+450 && mp.y < fiftin+650){
rec297 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+500 && mp.y < fiftin+650){
rec298 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+550 && mp.y < fiftin+650){
rec299 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+600 && mp.y < fiftin+650){
rec300 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+650 && mp.y < fiftin+650){
rec301 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+700 && mp.y < fiftin+650){
rec302 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+750 && mp.y < fiftin+650){
rec303 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+800 && mp.y < fiftin+650){
rec304 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+850 && mp.y < fiftin+650){
rec305 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+900 && mp.y < fiftin+650){
rec306 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+950 && mp.y < fiftin+650){
rec307 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1000 && mp.y < fiftin+650){
rec308 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1050 && mp.y < fiftin+650){
rec309 = true;
}
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+0 && mp.y < fiftin+700){
rec310 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+50 && mp.y < fiftin+700){
rec311 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+100 && mp.y < fiftin+700){
rec312 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+150 && mp.y < fiftin+700){
rec313 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+200 && mp.y < fiftin+700){
rec314 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+250 && mp.y < fiftin+700){
rec315 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+300 && mp.y < fiftin+700){
rec316 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+350 && mp.y < fiftin+700){
rec317 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+400 && mp.y < fiftin+700){
rec318 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+450 && mp.y < fiftin+700){
rec319 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+500 && mp.y < fiftin+700){
rec320 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+550 && mp.y < fiftin+700){
rec321 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+600 && mp.y < fiftin+700){
rec322 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+650 && mp.y < fiftin+700){
rec323 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+700 && mp.y < fiftin+700){
rec324 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+750 && mp.y < fiftin+700){
rec325 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+800 && mp.y < fiftin+700){
rec326 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+850 && mp.y < fiftin+700){
rec327 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+900 && mp.y < fiftin+700){
rec328 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+950 && mp.y < fiftin+700){
rec329 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1000 && mp.y < fiftin+700){
rec330 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1050 && mp.y < fiftin+700){
rec331 = true;
}
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+0 && mp.y < fiftin+750){
rec332 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+50 && mp.y < fiftin+750){
rec333 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+100 && mp.y < fiftin+750){
rec334 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+150 && mp.y < fiftin+750){
rec335 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+200 && mp.y < fiftin+750){
rec336 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+250 && mp.y < fiftin+750){
rec337 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+300 && mp.y < fiftin+750){
rec338 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+350 && mp.y < fiftin+750){
rec339 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+400 && mp.y < fiftin+750){
rec340 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+450 && mp.y < fiftin+750){
rec341 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+500 && mp.y < fiftin+750){
rec342 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+550 && mp.y < fiftin+750){
rec343 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+600 && mp.y < fiftin+750){
rec344 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+650 && mp.y < fiftin+750){
rec345 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+700 && mp.y < fiftin+750){
rec346 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+750 && mp.y < fiftin+750){
rec347 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+800 && mp.y < fiftin+750){
rec348 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+850 && mp.y < fiftin+750){
rec349 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+900 && mp.y < fiftin+750){
rec350 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+950 && mp.y < fiftin+750){
rec351 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1000 && mp.y < fiftin+750){
rec352 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1050 && mp.y < fiftin+750){
rec353 = true;
}
else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+0 && mp.y < fiftin+800){
rec354 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+50 && mp.y < fiftin+800){
rec355 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+100 && mp.y < fiftin+800){
rec356 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+150 && mp.y < fiftin+800){
rec357 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+200 && mp.y < fiftin+800){
rec358 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+250 && mp.y < fiftin+800){
rec359 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+300 && mp.y < fiftin+800){
rec360 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+350 && mp.y < fiftin+800){
rec361 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+400 && mp.y < fiftin+800){
rec362 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+450 && mp.y < fiftin+800){
rec363 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+500 && mp.y < fiftin+800){
rec364 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+550 && mp.y < fiftin+800){
rec365 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+600 && mp.y < fiftin+800){
rec366 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+650 && mp.y < fiftin+800){
rec367 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+700 && mp.y < fiftin+800){
rec368 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+750 && mp.y < fiftin+800){
rec369 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+800 && mp.y < fiftin+800){
rec370 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+850 && mp.y < fiftin+800){
rec371 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+900 && mp.y < fiftin+800){
rec372 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+950 && mp.y < fiftin+800){
rec373 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1000 && mp.y < fiftin+800){
rec374 = true;
}else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT) && mp.x < fiftin+1050 && mp.y < fiftin+800){
rec375 = true;
}



        BeginDrawing();
        mp = GetMousePosition();
        std::cout << mp.x << "x-" << mp.y << "y" << std::endl;
        ClearBackground(RAYWHITE);
        rec(0, 0, fiftin,fiftin,color,mp,fiftin);

        if(rec1){
            DrawRectangle(0,0,50,50,color);
        }
        if(rec2){
            DrawRectangle(50,0,50,50,color);
        }
        if(rec3){
            DrawRectangle(100,0,50,50,color);
        }
        if(rec4){
            DrawRectangle(150,0,50,50,color);
        }
        if(rec5){
            DrawRectangle(200,0,50,50,color);
        }
        if(rec6){
            DrawRectangle(250,0,50,50,color);
        }
        if(rec7){
            DrawRectangle(300,0,50,50,color);
        }
        if(rec8){
            DrawRectangle(350,0,50,50,color);
        }
        if(rec9){
            DrawRectangle(400,0,50,50,color);
        }
        if(rec10){
            DrawRectangle(450,0,50,50,color);
        }
        if(rec11){
            DrawRectangle(500,0,50,50,color);
        }
        if(rec12){
            DrawRectangle(550,0,50,50,color);
        }
        if(rec13){
            DrawRectangle(600,0,50,50,color);
        }
        if(rec14){
            DrawRectangle(650,0,50,50,color);
        }
        if(rec15){
            DrawRectangle(700,0,50,50,color);
        }
        if(rec16){
            DrawRectangle(750,0,50,50,color);
        }
        if(rec17){
            DrawRectangle(800,0,50,50,color);
        }
        if(rec18){
            DrawRectangle(850,0,50,50,color);
        }
        if(rec19){
            DrawRectangle(900,0,50,50,color);
        }
        if(rec20){
            DrawRectangle(950,0,50,50,color);
        }
        if(rec21){
            DrawRectangle(1000,0,50,50,color);
        }
        if(rec22){
            DrawRectangle(1050,0,50,50,color);
        }
        if(rec23){
            DrawRectangle(1100,0,50,50,color);
        }
if(rec24){
DrawRectangle(0,50,50,50,color);
}if(rec25){
DrawRectangle(50,50,50,50,color);
}if(rec26){
DrawRectangle(100,50,50,50,color);
}if(rec27){
DrawRectangle(150,50,50,50,color);
}if(rec28){
DrawRectangle(200,50,50,50,color);
}if(rec29){
DrawRectangle(250,50,50,50,color);
}if(rec30){
DrawRectangle(300,50,50,50,color);
}if(rec31){
DrawRectangle(350,50,50,50,color);
}if(rec32){
DrawRectangle(400,50,50,50,color);
}if(rec33){
DrawRectangle(450,50,50,50,color);
}if(rec34){
DrawRectangle(500,50,50,50,color);
}if(rec35){
DrawRectangle(550,50,50,50,color);
}if(rec36){
DrawRectangle(600,50,50,50,color);
}if(rec37){
DrawRectangle(650,50,50,50,color);
}if(rec38){
DrawRectangle(700,50,50,50,color);
}if(rec39){
DrawRectangle(750,50,50,50,color);
}if(rec40){
DrawRectangle(800,50,50,50,color);
}if(rec41){
DrawRectangle(850,50,50,50,color);
}if(rec42){
DrawRectangle(900,50,50,50,color);
}if(rec43){
DrawRectangle(950,50,50,50,color);
}if(rec44){
DrawRectangle(1000,50,50,50,color);
}if(rec45){
DrawRectangle(1050,50,50,50,color);
}if(rec46){
DrawRectangle(0,100,50,50,color);
}if(rec47){
DrawRectangle(50,100,50,50,color);
}if(rec48){
DrawRectangle(100,100,50,50,color);
}if(rec49){
DrawRectangle(150,100,50,50,color);
}if(rec50){
DrawRectangle(200,100,50,50,color);
}if(rec51){
DrawRectangle(250,100,50,50,color);
}
        if(rec52){
            DrawRectangle(300,100,50,50,color);
        }
        if(rec53){
            DrawRectangle(350,100,50,50,color);
        }
        if(rec54){
            DrawRectangle(400,100,50,50,color);
        }
        if(rec55){
            DrawRectangle(450,100,50,50,color);
        }
        if(rec56){
            DrawRectangle(500,100,50,50,color);
        }
        if(rec57){
            DrawRectangle(550,100,50,50,color);
        }
        if(rec58){
            DrawRectangle(600,100,50,50,color);
        }
        if(rec59){
            DrawRectangle(650,100,50,50,color);
        }
        if(rec60){
            DrawRectangle(700,100,50,50,color);
        }
        if(rec61){
            DrawRectangle(750,100,50,50,color);
        }
        if(rec62){
            DrawRectangle(800,100,50,50,color);
        }
        if(rec63){
            DrawRectangle(850,100,50,50,color);
        }
        if(rec64){
            DrawRectangle(900,100,50,50,color);
        }
        if(rec65){
            DrawRectangle(950,100,50,50,color);
        }
        if(rec66){
            DrawRectangle(1000,100,50,50,color);
        }
        if(rec67){
            DrawRectangle(1050,100,50,50,color);
        }
        if(rec68){
DrawRectangle(0,150,50,50,BLUE);
}if(rec69){
DrawRectangle(50,150,50,50,BLUE);
}if(rec70){
DrawRectangle(100,150,50,50,BLUE);
}if(rec71){
DrawRectangle(150,150,50,50,BLUE);
}if(rec72){
DrawRectangle(200,150,50,50,BLUE);
}if(rec73){
DrawRectangle(250,150,50,50,BLUE);
}if(rec74){
DrawRectangle(300,150,50,50,BLUE);
}if(rec75){
DrawRectangle(350,150,50,50,BLUE);
}if(rec76){
DrawRectangle(400,150,50,50,BLUE);
}if(rec77){
DrawRectangle(450,150,50,50,BLUE);
}if(rec78){
DrawRectangle(500,150,50,50,BLUE);
}if(rec79){
DrawRectangle(550,150,50,50,BLUE);
}if(rec80){
DrawRectangle(600,150,50,50,BLUE);
}if(rec81){
DrawRectangle(650,150,50,50,BLUE);
}if(rec82){
DrawRectangle(700,150,50,50,BLUE);
}if(rec83){
DrawRectangle(750,150,50,50,BLUE);
}if(rec84){
DrawRectangle(800,150,50,50,BLUE);
}if(rec85){
DrawRectangle(850,150,50,50,BLUE);
}if(rec86){
DrawRectangle(900,150,50,50,BLUE);
}if(rec87){
DrawRectangle(950,150,50,50,BLUE);
}if(rec88){
DrawRectangle(1000,150,50,50,BLUE);
}if(rec89){
DrawRectangle(1050,150,50,50,BLUE);
}/*if(rec90){
DrawRectangle(1100,150,50,50,BLUE);
}*/
if(rec90){
DrawRectangle(0,200,50,50,BLUE);
}if(rec91){
DrawRectangle(50,200,50,50,BLUE);
}if(rec92){
DrawRectangle(100,200,50,50,BLUE);
}if(rec93){
DrawRectangle(150,200,50,50,BLUE);
}if(rec94){
DrawRectangle(200,200,50,50,BLUE);
}if(rec95){
DrawRectangle(250,200,50,50,BLUE);
}if(rec96){
DrawRectangle(300,200,50,50,BLUE);
}if(rec97){
DrawRectangle(350,200,50,50,BLUE);
}if(rec98){
DrawRectangle(400,200,50,50,BLUE);
}if(rec99){
DrawRectangle(450,200,50,50,BLUE);
}if(rec100){
DrawRectangle(500,200,50,50,BLUE);
}if(rec101){
DrawRectangle(550,200,50,50,BLUE);
}if(rec102){
DrawRectangle(600,200,50,50,BLUE);
}if(rec103){
DrawRectangle(650,200,50,50,BLUE);
}if(rec104){
DrawRectangle(700,200,50,50,BLUE);
}if(rec105){
DrawRectangle(750,200,50,50,BLUE);
}if(rec106){
DrawRectangle(800,200,50,50,BLUE);
}if(rec107){
DrawRectangle(850,200,50,50,BLUE);
}if(rec108){
DrawRectangle(900,200,50,50,BLUE);
}if(rec109){
DrawRectangle(950,200,50,50,BLUE);
}if(rec110){
DrawRectangle(1000,200,50,50,BLUE);
}if(rec111){
DrawRectangle(1050,200,50,50,BLUE);
}
if(rec112){
DrawRectangle(0,250,50,50,BLUE);
}if(rec113){
DrawRectangle(50,250,50,50,BLUE);
}if(rec114){
DrawRectangle(100,250,50,50,BLUE);
}if(rec115){
DrawRectangle(150,250,50,50,BLUE);
}if(rec116){
DrawRectangle(200,250,50,50,BLUE);
}if(rec117){
DrawRectangle(250,250,50,50,BLUE);
}if(rec118){
DrawRectangle(300,250,50,50,BLUE);
}if(rec119){
DrawRectangle(350,250,50,50,BLUE);
}if(rec120){
DrawRectangle(400,250,50,50,BLUE);
}if(rec121){
DrawRectangle(450,250,50,50,BLUE);
}if(rec122){
DrawRectangle(500,250,50,50,BLUE);
}if(rec123){
DrawRectangle(550,250,50,50,BLUE);
}if(rec124){
DrawRectangle(600,250,50,50,BLUE);
}if(rec125){
DrawRectangle(650,250,50,50,BLUE);
}if(rec126){
DrawRectangle(700,250,50,50,BLUE);
}if(rec127){
DrawRectangle(750,250,50,50,BLUE);
}if(rec128){
DrawRectangle(800,250,50,50,BLUE);
}if(rec129){
DrawRectangle(850,250,50,50,BLUE);
}if(rec130){
DrawRectangle(900,250,50,50,BLUE);
}if(rec131){
DrawRectangle(950,250,50,50,BLUE);
}if(rec132){
DrawRectangle(1000,250,50,50,BLUE);
}if(rec133){
DrawRectangle(1050,250,50,50,BLUE);
}
if(rec134){
DrawRectangle(0,300,50,50,BLUE);
}if(rec135){
DrawRectangle(50,300,50,50,BLUE);
}if(rec136){
DrawRectangle(100,300,50,50,BLUE);
}if(rec137){
DrawRectangle(150,300,50,50,BLUE);
}if(rec138){
DrawRectangle(200,300,50,50,BLUE);
}if(rec139){
DrawRectangle(250,300,50,50,BLUE);
}if(rec140){
DrawRectangle(300,300,50,50,BLUE);
}if(rec141){
DrawRectangle(350,300,50,50,BLUE);
}if(rec142){
DrawRectangle(400,300,50,50,BLUE);
}if(rec143){
DrawRectangle(450,300,50,50,BLUE);
}if(rec144){
DrawRectangle(500,300,50,50,BLUE);
}if(rec145){
DrawRectangle(550,300,50,50,BLUE);
}if(rec146){
DrawRectangle(600,300,50,50,BLUE);
}if(rec147){
DrawRectangle(650,300,50,50,BLUE);
}if(rec148){
DrawRectangle(700,300,50,50,BLUE);
}if(rec149){
DrawRectangle(750,300,50,50,BLUE);
}if(rec150){
DrawRectangle(800,300,50,50,BLUE);
}if(rec151){
DrawRectangle(850,300,50,50,BLUE);
}if(rec152){
DrawRectangle(900,300,50,50,BLUE);
}if(rec153){
DrawRectangle(950,300,50,50,BLUE);
}if(rec154){
DrawRectangle(1000,300,50,50,BLUE);
}if(rec155){
DrawRectangle(1050,300,50,50,BLUE);
}
if(rec156){
DrawRectangle(0,350,50,50,BLUE);
}if(rec157){
DrawRectangle(50,350,50,50,BLUE);
}if(rec158){
DrawRectangle(100,350,50,50,BLUE);
}if(rec159){
DrawRectangle(150,350,50,50,BLUE);
}if(rec160){
DrawRectangle(200,350,50,50,BLUE);
}if(rec161){
DrawRectangle(250,350,50,50,BLUE);
}if(rec162){
DrawRectangle(300,350,50,50,BLUE);
}if(rec163){
DrawRectangle(350,350,50,50,BLUE);
}if(rec164){
DrawRectangle(400,350,50,50,BLUE);
}if(rec165){
DrawRectangle(450,350,50,50,BLUE);
}if(rec166){
DrawRectangle(500,350,50,50,BLUE);
}if(rec167){
DrawRectangle(550,350,50,50,BLUE);
}if(rec168){
DrawRectangle(600,350,50,50,BLUE);
}if(rec169){
DrawRectangle(650,350,50,50,BLUE);
}if(rec170){
DrawRectangle(700,350,50,50,BLUE);
}if(rec171){
DrawRectangle(750,350,50,50,BLUE);
}if(rec172){
DrawRectangle(800,350,50,50,BLUE);
}if(rec173){
DrawRectangle(850,350,50,50,BLUE);
}if(rec174){
DrawRectangle(900,350,50,50,BLUE);
}if(rec175){
DrawRectangle(950,350,50,50,BLUE);
}if(rec176){
DrawRectangle(1000,350,50,50,BLUE);
}if(rec177){
DrawRectangle(1050,350,50,50,BLUE);
}
if(rec178){
DrawRectangle(0,400,50,50,BLUE);
}if(rec179){
DrawRectangle(50,400,50,50,BLUE);
}if(rec180){
DrawRectangle(100,400,50,50,BLUE);
}if(rec181){
DrawRectangle(150,400,50,50,BLUE);
}if(rec182){
DrawRectangle(200,400,50,50,BLUE);
}if(rec183){
DrawRectangle(250,400,50,50,BLUE);
}if(rec184){
DrawRectangle(300,400,50,50,BLUE);
}if(rec185){
DrawRectangle(350,400,50,50,BLUE);
}if(rec186){
DrawRectangle(400,400,50,50,BLUE);
}if(rec187){
DrawRectangle(450,400,50,50,BLUE);
}if(rec188){
DrawRectangle(500,400,50,50,BLUE);
}if(rec189){
DrawRectangle(550,400,50,50,BLUE);
}if(rec190){
DrawRectangle(600,400,50,50,BLUE);
}if(rec191){
DrawRectangle(650,400,50,50,BLUE);
}if(rec192){
DrawRectangle(700,400,50,50,BLUE);
}if(rec193){
DrawRectangle(750,400,50,50,BLUE);
}if(rec194){
DrawRectangle(800,400,50,50,BLUE);
}if(rec195){
DrawRectangle(850,400,50,50,BLUE);
}if(rec196){
DrawRectangle(900,400,50,50,BLUE);
}if(rec197){
DrawRectangle(950,400,50,50,BLUE);
}if(rec198){
DrawRectangle(1000,400,50,50,BLUE);
}if(rec199){
DrawRectangle(1050,400,50,50,BLUE);
}
if(rec200){
DrawRectangle(0,450,50,50,BLUE);
}if(rec201){
DrawRectangle(50,450,50,50,BLUE);
}if(rec202){
DrawRectangle(100,450,50,50,BLUE);
}if(rec203){
DrawRectangle(150,450,50,50,BLUE);
}if(rec204){
DrawRectangle(200,450,50,50,BLUE);
}if(rec205){
DrawRectangle(250,450,50,50,BLUE);
}if(rec206){
DrawRectangle(300,450,50,50,BLUE);
}if(rec207){
DrawRectangle(350,450,50,50,BLUE);
}if(rec208){
DrawRectangle(400,450,50,50,BLUE);
}if(rec209){
DrawRectangle(450,450,50,50,BLUE);
}if(rec210){
DrawRectangle(500,450,50,50,BLUE);
}if(rec211){
DrawRectangle(550,450,50,50,BLUE);
}if(rec212){
DrawRectangle(600,450,50,50,BLUE);
}if(rec213){
DrawRectangle(650,450,50,50,BLUE);
}if(rec214){
DrawRectangle(700,450,50,50,BLUE);
}if(rec215){
DrawRectangle(750,450,50,50,BLUE);
}if(rec216){
DrawRectangle(800,450,50,50,BLUE);
}if(rec217){
DrawRectangle(850,450,50,50,BLUE);
}if(rec218){
DrawRectangle(900,450,50,50,BLUE);
}if(rec219){
DrawRectangle(950,450,50,50,BLUE);
}if(rec220){
DrawRectangle(1000,450,50,50,BLUE);
}if(rec221){
DrawRectangle(1050,450,50,50,BLUE);
}
if(rec222){
DrawRectangle(0,500,50,50,BLUE);
}if(rec223){
DrawRectangle(50,500,50,50,BLUE);
}if(rec224){
DrawRectangle(100,500,50,50,BLUE);
}if(rec225){
DrawRectangle(150,500,50,50,BLUE);
}if(rec226){
DrawRectangle(200,500,50,50,BLUE);
}if(rec227){
DrawRectangle(250,500,50,50,BLUE);
}if(rec228){
DrawRectangle(300,500,50,50,BLUE);
}if(rec229){
DrawRectangle(350,500,50,50,BLUE);
}if(rec230){
DrawRectangle(400,500,50,50,BLUE);
}if(rec231){
DrawRectangle(450,500,50,50,BLUE);
}if(rec232){
DrawRectangle(500,500,50,50,BLUE);
}if(rec233){
DrawRectangle(550,500,50,50,BLUE);
}if(rec234){
DrawRectangle(600,500,50,50,BLUE);
}if(rec235){
DrawRectangle(650,500,50,50,BLUE);
}if(rec236){
DrawRectangle(700,500,50,50,BLUE);
}if(rec237){
DrawRectangle(750,500,50,50,BLUE);
}if(rec238){
DrawRectangle(800,500,50,50,BLUE);
}if(rec239){
DrawRectangle(850,500,50,50,BLUE);
}if(rec240){
DrawRectangle(900,500,50,50,BLUE);
}if(rec241){
DrawRectangle(950,500,50,50,BLUE);
}if(rec242){
DrawRectangle(1000,500,50,50,BLUE);
}if(rec243){
DrawRectangle(1050,500,50,50,BLUE);
}
if(rec244){
DrawRectangle(0,550,50,50,BLUE);
}if(rec245){
DrawRectangle(50,550,50,50,BLUE);
}if(rec246){
DrawRectangle(100,550,50,50,BLUE);
}if(rec247){
DrawRectangle(150,550,50,50,BLUE);
}if(rec248){
DrawRectangle(200,550,50,50,BLUE);
}if(rec249){
DrawRectangle(250,550,50,50,BLUE);
}if(rec250){
DrawRectangle(300,550,50,50,BLUE);
}if(rec251){
DrawRectangle(350,550,50,50,BLUE);
}if(rec252){
DrawRectangle(400,550,50,50,BLUE);
}if(rec253){
DrawRectangle(450,550,50,50,BLUE);
}if(rec254){
DrawRectangle(500,550,50,50,BLUE);
}if(rec255){
DrawRectangle(550,550,50,50,BLUE);
}if(rec256){
DrawRectangle(600,550,50,50,BLUE);
}if(rec257){
DrawRectangle(650,550,50,50,BLUE);
}if(rec258){
DrawRectangle(700,550,50,50,BLUE);
}if(rec259){
DrawRectangle(750,550,50,50,BLUE);
}if(rec260){
DrawRectangle(800,550,50,50,BLUE);
}if(rec261){
DrawRectangle(850,550,50,50,BLUE);
}if(rec262){
DrawRectangle(900,550,50,50,BLUE);
}if(rec263){
DrawRectangle(950,550,50,50,BLUE);
}if(rec264){
DrawRectangle(1000,550,50,50,BLUE);
}if(rec265){
DrawRectangle(1050,550,50,50,BLUE);
}
if(rec266){
DrawRectangle(0,600,50,50,BLUE);
}if(rec267){
DrawRectangle(50,600,50,50,BLUE);
}if(rec268){
DrawRectangle(100,600,50,50,BLUE);
}if(rec269){
DrawRectangle(150,600,50,50,BLUE);
}if(rec270){
DrawRectangle(200,600,50,50,BLUE);
}if(rec271){
DrawRectangle(250,600,50,50,BLUE);
}if(rec272){
DrawRectangle(300,600,50,50,BLUE);
}if(rec273){
DrawRectangle(350,600,50,50,BLUE);
}if(rec274){
DrawRectangle(400,600,50,50,BLUE);
}if(rec275){
DrawRectangle(450,600,50,50,BLUE);
}if(rec276){
DrawRectangle(500,600,50,50,BLUE);
}if(rec277){
DrawRectangle(550,600,50,50,BLUE);
}if(rec278){
DrawRectangle(600,600,50,50,BLUE);
}if(rec279){
DrawRectangle(650,600,50,50,BLUE);
}if(rec280){
DrawRectangle(700,600,50,50,BLUE);
}if(rec281){
DrawRectangle(750,600,50,50,BLUE);
}if(rec282){
DrawRectangle(800,600,50,50,BLUE);
}if(rec283){
DrawRectangle(850,600,50,50,BLUE);
}if(rec284){
DrawRectangle(900,600,50,50,BLUE);
}if(rec285){
DrawRectangle(950,600,50,50,BLUE);
}if(rec286){
DrawRectangle(1000,600,50,50,BLUE);
}if(rec287){
DrawRectangle(1050,600,50,50,BLUE);
}
if(rec288){
DrawRectangle(0,650,50,50,BLUE);
}if(rec289){
DrawRectangle(50,650,50,50,BLUE);
}if(rec290){
DrawRectangle(100,650,50,50,BLUE);
}if(rec291){
DrawRectangle(150,650,50,50,BLUE);
}if(rec292){
DrawRectangle(200,650,50,50,BLUE);
}if(rec293){
DrawRectangle(250,650,50,50,BLUE);
}if(rec294){
DrawRectangle(300,650,50,50,BLUE);
}if(rec295){
DrawRectangle(350,650,50,50,BLUE);
}if(rec296){
DrawRectangle(400,650,50,50,BLUE);
}if(rec297){
DrawRectangle(450,650,50,50,BLUE);
}if(rec298){
DrawRectangle(500,650,50,50,BLUE);
}if(rec299){
DrawRectangle(550,650,50,50,BLUE);
}if(rec300){
DrawRectangle(600,650,50,50,BLUE);
}if(rec301){
DrawRectangle(650,650,50,50,BLUE);
}if(rec302){
DrawRectangle(700,650,50,50,BLUE);
}if(rec303){
DrawRectangle(750,650,50,50,BLUE);
}if(rec304){
DrawRectangle(800,650,50,50,BLUE);
}if(rec305){
DrawRectangle(850,650,50,50,BLUE);
}if(rec306){
DrawRectangle(900,650,50,50,BLUE);
}if(rec307){
DrawRectangle(950,650,50,50,BLUE);
}if(rec308){
DrawRectangle(1000,650,50,50,BLUE);
}if(rec309){
DrawRectangle(1050,650,50,50,BLUE);
}
if(rec310){
DrawRectangle(0,700,50,50,BLUE);
}if(rec311){
DrawRectangle(50,700,50,50,BLUE);
}if(rec312){
DrawRectangle(100,700,50,50,BLUE);
}if(rec313){
DrawRectangle(150,700,50,50,BLUE);
}if(rec314){
DrawRectangle(200,700,50,50,BLUE);
}if(rec315){
DrawRectangle(250,700,50,50,BLUE);
}if(rec316){
DrawRectangle(300,700,50,50,BLUE);
}if(rec317){
DrawRectangle(350,700,50,50,BLUE);
}if(rec318){
DrawRectangle(400,700,50,50,BLUE);
}if(rec319){
DrawRectangle(450,700,50,50,BLUE);
}if(rec320){
DrawRectangle(500,700,50,50,BLUE);
}if(rec321){
DrawRectangle(550,700,50,50,BLUE);
}if(rec322){
DrawRectangle(600,700,50,50,BLUE);
}if(rec323){
DrawRectangle(650,700,50,50,BLUE);
}if(rec324){
DrawRectangle(700,700,50,50,BLUE);
}if(rec325){
DrawRectangle(750,700,50,50,BLUE);
}if(rec326){
DrawRectangle(800,700,50,50,BLUE);
}if(rec327){
DrawRectangle(850,700,50,50,BLUE);
}if(rec328){
DrawRectangle(900,700,50,50,BLUE);
}if(rec329){
DrawRectangle(950,700,50,50,BLUE);
}if(rec330){
DrawRectangle(1000,700,50,50,BLUE);
}if(rec331){
DrawRectangle(1050,700,50,50,BLUE);
}
if(rec332){
DrawRectangle(0,750,50,50,BLUE);
}if(rec333){
DrawRectangle(50,750,50,50,BLUE);
}if(rec334){
DrawRectangle(100,750,50,50,BLUE);
}if(rec335){
DrawRectangle(150,750,50,50,BLUE);
}if(rec336){
DrawRectangle(200,750,50,50,BLUE);
}if(rec337){
DrawRectangle(250,750,50,50,BLUE);
}if(rec338){
DrawRectangle(300,750,50,50,BLUE);
}if(rec339){
DrawRectangle(350,750,50,50,BLUE);
}if(rec340){
DrawRectangle(400,750,50,50,BLUE);
}if(rec341){
DrawRectangle(450,750,50,50,BLUE);
}if(rec342){
DrawRectangle(500,750,50,50,BLUE);
}if(rec343){
DrawRectangle(550,750,50,50,BLUE);
}if(rec344){
DrawRectangle(600,750,50,50,BLUE);
}if(rec345){
DrawRectangle(650,750,50,50,BLUE);
}if(rec346){
DrawRectangle(700,750,50,50,BLUE);
}if(rec347){
DrawRectangle(750,750,50,50,BLUE);
}if(rec348){
DrawRectangle(800,750,50,50,BLUE);
}if(rec349){
DrawRectangle(850,750,50,50,BLUE);
}if(rec350){
DrawRectangle(900,750,50,50,BLUE);
}if(rec351){
DrawRectangle(950,750,50,50,BLUE);
}if(rec352){
DrawRectangle(1000,750,50,50,BLUE);
}if(rec353){
DrawRectangle(1050,750,50,50,BLUE);
}
if(rec354){
DrawRectangle(0,800,50,50,BLUE);
}if(rec355){
DrawRectangle(50,800,50,50,BLUE);
}if(rec356){
DrawRectangle(100,800,50,50,BLUE);
}if(rec357){
DrawRectangle(150,800,50,50,BLUE);
}if(rec358){
DrawRectangle(200,800,50,50,BLUE);
}if(rec359){
DrawRectangle(250,800,50,50,BLUE);
}if(rec360){
DrawRectangle(300,800,50,50,BLUE);
}if(rec361){
DrawRectangle(350,800,50,50,BLUE);
}if(rec362){
DrawRectangle(400,800,50,50,BLUE);
}if(rec363){
DrawRectangle(450,800,50,50,BLUE);
}if(rec364){
DrawRectangle(500,800,50,50,BLUE);
}if(rec365){
DrawRectangle(550,800,50,50,BLUE);
}if(rec366){
DrawRectangle(600,800,50,50,BLUE);
}if(rec367){
DrawRectangle(650,800,50,50,BLUE);
}if(rec368){
DrawRectangle(700,800,50,50,BLUE);
}if(rec369){
DrawRectangle(750,800,50,50,BLUE);
}if(rec370){
DrawRectangle(800,800,50,50,BLUE);
}if(rec371){
DrawRectangle(850,800,50,50,BLUE);
}if(rec372){
DrawRectangle(900,800,50,50,BLUE);
}if(rec373){
DrawRectangle(950,800,50,50,BLUE);
}if(rec374){
DrawRectangle(1000,800,50,50,BLUE);
}if(rec375){
DrawRectangle(1050,800,50,50,BLUE);
}
        //1100

        EndDrawing();
        if(IsKeyPressed(KEY_S)){
            TakeScreenshot(fileNamepng); 
        }
        if(IsKeyPressed(KEY_E)){
            rec(0, 0, fiftin,fiftin,color,mp,fiftin);
        }
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}