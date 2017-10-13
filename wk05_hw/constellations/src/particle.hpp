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

    int r = ofRandom(10);
    int b = ofRandom(10);
    int  g = ofRandom(10);
    void resetForce();
    void addForce(float x, float y);
    void addDampingForce();
    void setInitialCondition(float px, float py, float vx, float vy);
    void update();
    void draw();
    
    float damping;
    int numLines = 20;
    int minRadius = 5;
    int maxRadius = 50;
    
    
protected:
private:
};
