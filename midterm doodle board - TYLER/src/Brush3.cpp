#include "Brush3.hpp"


Brush3::Brush3(ofVec3f _pos)
{
    pos = _pos;
    pos.x = ofGetMouseX();
    pos.y = ofGetMouseY();
}

void Brush3::applyForce(ofVec3f force){
    acc += force;
}

void Brush3::update(float timeDiff){
    vel += acc;
    pos += vel;
    acc *= 0;
}

void Brush3::draw(ofVec3f pos){
    
    float lifespan = 0.3; // seconds
    
    ofPushStyle();
    float hue = ofRandom(0, 255);
    
    ofSetColor(ofColor::fromHsb(hue,hue,hue));
    
    ofDrawCircle(pos, 1);
    
    ofDrawCircle(pos+10, 2);
    
    ofPopStyle();
    
    
    ofPushStyle();
    
    float hue1 = ofMap(lifespan, 0., 3., 0, 255);
    float hue2= ofMap(lifespan, 0., 3., 150, 255);
    
    ofSetColor(ofColor::fromHsb(hue1,hue2,hue2));
    
    ofDrawCircle(pos+20, ofRandom(0,2));
    
    ofPopStyle();
}
