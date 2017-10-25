//
//  particle.hpp
//  trial
//
//  Created by Aditya Aggarwal on 12/10/2017.
//
//

#ifndef particle_hpp
#define particle_hpp

#include <stdio.h>

#endif /* particle_hpp */

#include "ofMain.h"

class particle
{
public:
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f frc;   // frc is also know as acceleration (newton says "f=ma")
    
    particle();
    virtual ~particle(){};

    int r = ofRandom(100, 190);
    int b = ofRandom(60, 100);
    int g = ofRandom(80,120);
    
    int alpha = ofRandom(0, 255);
    
    void resetForce();
    void addForce(float x, float y);
    void addDampingForce();
    void setInitialCondition(float px, float py, float vx, float vy);
    void update();
    void draw();
    
    float damping;
    
protected:
private:
};
