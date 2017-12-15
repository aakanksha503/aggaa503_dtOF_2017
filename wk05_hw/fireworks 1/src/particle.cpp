
#include "particle.hpp"
#include "ofMain.h"

//------------------------------------------------------------
particle::particle(){
    setInitialCondition(0,0,0,0);
    damping =  ofRandom(1, 10);
}

//------------------------------------------------------------
void particle::resetForce(){
    frc.set(0,0);
}

//------------------------------------------------------------
void particle::addForce(float x, float y){
    frc.x = frc.x + x/10;
    frc.y = frc.y + y;
}

//------------------------------------------------------------
void particle::addDampingForce(){
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
//      ofPushStyle();
      ofSetColor(r,g,b,alpha);
      ofDrawCircle(pos.x, pos.y, ofRandom(0,1));
//      ofPopStyle();
}
