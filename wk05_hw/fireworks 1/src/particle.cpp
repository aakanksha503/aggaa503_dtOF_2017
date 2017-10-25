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
    damping =  ofRandom(1, 10);
}

//------------------------------------------------------------
void particle::resetForce(){
    // we reset the forces every frame
    frc.set(0,0);
}

//------------------------------------------------------------
void particle::addForce(float x, float y){
    // add in a force in X and Y for this frame.
    frc.x = frc.x + x/10;
    frc.y = frc.y + y;
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
    vel = vel + frc*0.01;
    pos = pos + vel;
}

//------------------------------------------------------------
void particle::draw(){
    ofPushStyle();
    ofSetColor(r,g,b,alpha);
    ofDrawCircle(pos.x, pos.y, ofRandom(0,2));
    ofPopStyle();
}
