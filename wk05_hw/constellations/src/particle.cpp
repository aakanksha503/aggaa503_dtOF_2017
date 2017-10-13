//
//  particle.cpp
//  trial
//
//  Created by Aditya Aggarwal on 12/10/2017.
//
//

#include "particle.hpp"
#include "ofMain.h"

//------------------------------------------------------------
particle::particle(){
    setInitialCondition(0,0,0,0);
    damping =  ofRandom(0.02, 0.05);
}

//------------------------------------------------------------
void particle::resetForce(){
    // we reset the forces every frame
    frc.set(0,0);
}

//------------------------------------------------------------
void particle::addForce(float x, float y){
    // add in a force in X and Y for this frame.
    frc.x = frc.x + x*2;
    frc.y = frc.y + y*3;
}

//------------------------------------------------------------
void particle::addDampingForce(){
    
    // the usual way to write this is  vel *= 0.99
    // basically, subtract some part of the velocity
    // damping is a force operating in the oposite direction of the
    // velocity vector
    
    frc.x = frc.x - vel.x * damping;
    frc.y = frc.y - vel.y * damping;
}

//------------------------------------------------------------
void particle::setInitialCondition(float px, float py, float vx, float vy){
    pos.set(px,py);
    vel.set(vx,vy);
}

//------------------------------------------------------------
void particle::update(){
    vel = vel + frc*0.1;
    pos = pos + vel;
}

//------------------------------------------------------------
void particle::draw(){
    ofSetColor(r,g,b);
    int numLines = 10;
    int minRadius = 5;
    int maxRadius = 50;
    for (int i=0; i<numLines; i++) {
        float angle = ofRandom(ofDegToRad(360.0));
        float distance = ofRandom(minRadius, maxRadius);
        float xOffset = cos(angle) * distance;
        float yOffset = sin(angle) * distance;
        float alpha = ofMap(distance, minRadius, maxRadius, 50, 0);  // Make shorter lines more opaque
        ofSetColor(255, alpha);
        ofDrawLine(pos.x, pos.y, pos.x+xOffset, pos.y+yOffset);
    }}
