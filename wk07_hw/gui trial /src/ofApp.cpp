#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(200);
    gui.setup();
    gui.add(posX.setup("posX", 30, 0, ofGetWidth()));
    gui.add(posY.setup("posY", 30, 0, ofGetHeight()));
    gui.add(radius.setup("radius", 10, 0, 300));
    gui.add(red.setup("red", 0, 0, 255));
    gui.add(green.setup("green", 0, 0, 255));
    gui.add(blue.setup("blue", 0, 0, 255));
    gui.add(velX.setup("velX", 0, 0, 5));
    gui.add(velY.setup("velY", 0, 0, 5));
}

//--------------------------------------------------------------
void ofApp::update(){
    posX = posX + velX;
    posY = posY + velY;

}

//--------------------------------------------------------------
void ofApp::draw(){
   
    ofSetColor(red, green, blue);
    ofDrawCircle(posX, posY, radius);
    gui.draw();

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
