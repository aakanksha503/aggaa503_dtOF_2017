#include "ofApp.h"
int xPos;
int radius = 5;

//--------------------------------------------------------------
void ofApp::setup(){
    xPos = 0;  // horizontal start position
    ofBackground(100, 210, 200);  // black background
    ofSetCircleResolution(100);
    ofEnableAntiAliasing();


}

//--------------------------------------------------------------
void ofApp::update(){
    xPos += 10;
    radius += 0.2;
              // reset horizontal position

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(20, 90, 100);  // draw
    ofDrawCircle(ofGetMouseX(), ofGetMouseY(), radius);   // draw a circle at the (variable) horizontal position, 100 pixels from the top with a 10 pixel diameter
    
    
    float sinOfTime               = sin( ofGetElapsedTimef() );
    float sinOfTimeMapped         = ofMap(sinOfTime, -1, 1, 0, 255);
    
    ofBackground(sinOfTimeMapped, sinOfTimeMapped, sinOfTimeMapped);
    
    float sinOfTime2              = sin( ofGetElapsedTimef() + PI);
    float sinOfTimeMapped2        = ofMap(sinOfTime2, -1, 1, 0, 255);
    
    ofSetColor(sinOfTimeMapped2, ofGetMouseY()/10, ofGetMouseX());
    ofRect(0,0,ofGetWidth(), ofGetHeight());
    

    
    if(xPos>=ofGetWidth()){
        ofDrawCircle(ofGetMouseX()/2, ofGetMouseY()/2, ofGetMouseX()/100);
        ofDrawCircle(ofGetMouseX()/4, ofGetMouseY()/4,  ofGetMouseY()/200);
        ofDrawCircle(ofGetMouseX()/6, ofGetMouseY()/6, ofGetMouseY()/50);
        ofDrawCircle(ofGetMouseX()/8, ofGetMouseY()/8, ofGetMouseY()/70);
    }
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
