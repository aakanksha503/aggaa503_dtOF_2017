
#include "Particle.hpp"

Particle::Particle()
{
    lifespan = 0.3; // seconds
}

Particle::Particle(ofVec3f _pos)
{
	pos = _pos;
    pos.x = ofGetMouseX();
    pos.y = ofGetMouseY();
//    vel.x = ofRandom(ofGetMouseX()/200, 5);
//    vel.y = ofRandom(ofGetMouseY()/200, 5);
}

void Particle::applyForce(ofVec3f force){
    acc += force;
}

void Particle::update(float timeDiff){ // how much time has passed since last frame?
    vel += acc;
    pos += vel;
    acc *= 0;
    
    
}

void Particle::draw(){
	ofPushStyle();
	float hue = ofRandom(0, 255);
	ofSetColor(ofColor::fromHsb(hue,hue,hue));
	
    ofDrawCircle(pos, 1);
    
    ofDrawCircle(pos+10, 2);
    
	ofPopStyle();
    
    ofPushStyle();
    float hue1 = ofMap(lifespan, 0., 3., 0, 255);
    float hue2= ofMap(lifespan, 0., 3., 150, 255);
//    ofSetColor(ofColor::fromHsb(hue1,hue1,hue1));
    ofSetColor(ofColor::fromHsb(hue1,hue2,hue2));
    
    ofDrawCircle(pos+20, ofRandom(0,2));
    ofPopStyle();
}

