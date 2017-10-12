#pragma once

#include "ofMain.h"

class Ball {
public:
    
    Ball();
    
    void update();
    void draw();
    
    float radius;
    ofColor color;
    float x;
    float y;
    float dirX;
    float dirY;
    float accX;
    float accY;
    
};
