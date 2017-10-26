#include "Brush3.hpp"


void Brush3::draw(ofVec3f pos){
    
    float lifespan = 0.3; // seconds
    
    ofPushStyle();
    float hue = ofRandom(0, 255);
    
    ofSetLineWidth(ofRandom(0, 10));
    
    ofSetColor(ofColor::fromHsb(hue,hue,hue));
    
    ofDrawCircle(pos, 1+sin(ofGetElapsedTimef()));
    ofDrawCircle(pos+2, ofRandom(0,1));
    ofDrawCircle(pos+20, 1+sin(ofGetElapsedTimef()));
    ofDrawCircle(pos+10, 2+cos(ofGetElapsedTimef()));
    
    ofPopStyle();
    
    
    ofPushStyle();
    
    float hue1 = ofMap(lifespan, 0., 3, 0, 250);
    float hue2= ofMap(lifespan, 0., 3., 150, 255);
    
    ofSetColor(ofColor::fromHsb(hue1,50+hue2,hue2));
    
    ofDrawCircle(pos+20, ofRandom(0,2));
    ofDrawCircle(pos+21, ofRandom(0,2));
    ofDrawCircle(pos+22, ofRandom(0,2));
    ofDrawCircle(pos+25, ofRandom(0,1));
    ofDrawCircle(pos+30, ofRandom(0,1));
    ofDrawCircle(pos+31, ofRandom(0,1));
    ofDrawCircle(pos+32, ofRandom(0,1));
    
    ofPopStyle();
    
    
    ofPushStyle();
    
    float hue3 = ofMap(lifespan, 0., 3, 0, 250);
    float hue4= ofMap(lifespan, 0., 3., 100, 255);
    
    ofSetColor(ofRandom(120), ofRandom(90), ofRandom(220));
    
    ofDrawCircle(pos +40, ofRandom(0,2) * sin(ofGetElapsedTimef()));
    ofDrawCircle(pos+42, ofRandom(0,2));
    
    ofPopStyle();
}
