#pragma once
#include "ofMain.h"

class Vehicle {
public:
	
	Vehicle()	{}
	~Vehicle()	{}
	
    void setup();
    void update();
    void draw();
    
    void applyForce	(ofVec3f force);
	
    void seek (ofVec3f target);		// seek a target
	void avoid (ofVec3f obstacle);	// avoid an obstacle
    
    ofVec3f pos, vel, acc;
	    
    float maxSpeed, maxForce;	// "speed limits"
    
    int x;
    int y;
    int alpha;
};
    
