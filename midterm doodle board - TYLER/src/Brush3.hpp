#pragma once
#include "ofMain.h"

class Brush3
{

public:
  
    Brush3(ofVec3f _pos);

    void applyForce(ofVec3f force);
  
    void update(float timeDiff);
  
    void draw(ofVec3f pos);
  
    ofVec3f pos, vel, acc;
    float lifespan;
    
};

