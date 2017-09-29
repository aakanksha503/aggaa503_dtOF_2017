#include "ofApp.h"
int r, g, b;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
//    ofBackground(ofRandom(r), ofRandom(g), ofRandom(b));
//    
//    r = ofRandom(255);
//    g = ofRandom(255);
//    b = ofRandom(255);

    pos.set(ofGetWidth()*0.5, ofGetHeight()*0.5);
 
 
}

//--------------------------------------------------------------
void ofApp::update(){
    float time = ofGetElapsedTimef();
    pos.x = sin(time) * 1000 + ofGetWidth()* 0.5;
    pos.y = cos(time)*1000 + ofGetWidth()*0.5;

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawCircle(pos, 10);
    ofSetColor(ofRandom(255), ofRandom(100), ofRandom(200));
    
    ofSetLineWidth(ofRandom(10));
                      
    ofDrawLine(pos, ofVec2f(ofGetWidth() *.75, pos.y+300));
    ofDrawLine(pos, ofVec2f(pos.x+400, ofGetHeight()*.75));
    
    ofDrawLine(pos, ofVec2f(pos.x, 0));
    ofDrawLine(pos, ofVec2f(0, pos.y));
    
    ofDrawLine(ofVec2f(pos.x, 0), pos);
    ofDrawLine(ofVec2f(0, pos.y), pos);


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
