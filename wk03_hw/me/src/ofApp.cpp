#include "ofApp.h"
int alpha=10;

int xPos = 0;
int yPos = 0;



//--------------------------------------------------------------
void ofApp::setup(){
    me.load("images/me.jpg");
    ofSetBackgroundAuto(false);
    ofSetCircleResolution(3);
    
}

//--------------------------------------------------------------
void ofApp::update(){
//    alpha ++;

    xPos= xPos + ofGetMouseX()/400;
   
    yPos = yPos + ofGetMouseY()/400;

}

//--------------------------------------------------------------
void ofApp::draw(){
    me.draw(xPos,yPos);
    
//    float xPos = ofMap(sin(ofGetElapsedTimef()), -1, 1, 0, ofGetWidth());
//    ofRect(xPos, ofGetMouseX(), 10,10);
//    ofSetColor(20, 80, 90);
    
    ofDrawCircle(ofGetMouseX(), ofGetMouseY(), 10);
    ofColor myRed1(180, 16, 250, 50);
    ofColor myOrange1(155, 120, 119, 50);
    
    ofColor inBetween1 = myRed1.getLerped(myOrange1, ofRandom(1000.0));
    ofSetColor(inBetween1);

    ofDrawCircle(ofGetMouseX(), ofGetMouseY(), ofRandom(0,5));
    ofColor myRed(100, 6, 20, 50);
    ofColor myOrange(15, 182, 90, 50);
   
    ofColor inBetween = myRed.getLerped(myOrange, ofRandom(10.0));
    ofSetColor(inBetween);}





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
