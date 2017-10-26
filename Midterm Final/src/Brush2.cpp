#include "Brush2.hpp"

void Brush2::draw(ofVec3f pos)
    {
        ofPushStyle();	// don't let ofSetColor() affect global scene
        ofSetColor(ofRandom(50), ofRandom(20), ofRandom(10));
        
        float radius = 1. + 1. * sin(ofGetElapsedTimef());
        pos += ofVec2f( ofRandom(0,50), ofRandom(-50,0));
        ofDrawCircle(pos, radius);
        
        ofNoFill();
        ofSetColor(ofColor::white);
        ofSetLineWidth(ofRandom(0,5));
        ofDrawCircle(pos, (radius * cos(ofGetElapsedTimef())));
        
        ofPopStyle();	// always call this after ofPushStyle()
        // to go back to previous settings
        
    };
