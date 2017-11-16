#ifndef particle_hpp
#define particle_hpp

#include <stdio.h>

#include "ofMain.h"

class Particle {

    Particle();
    
    public:
    void setup();
    void update();
    void draw();
    
    ofParameterGroup Parameters;
    ofParameter<float> rotateX;
    ofParameter<float> rotateY;
    ofParameter<float> rotateZ;
    ofParameter<float> release;
    ofParameter<float> sensitivity;
    
    float * fftSmooth;
    int bands;
    
    float rotationX = 0.0;
    float rotationY = 0.0;
    float rotationZ = 0.0;
    
    ofPoint pos;
    ofPoint vel;
    
    float frequencies;
    ofPoint center;
    int numParticles = 500;
    
};

#endif /* particle_hpp */
