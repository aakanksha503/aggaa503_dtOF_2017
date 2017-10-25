#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//
    ofSetBackgroundAuto(false);
    ofBackground(0);
    ofSetLineWidth(ofRandom(0,20));
  
    ofEnableAlphaBlending();

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
     if(ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)){

             int numLines = 300;
             int minRadius = 1;
             int maxRadius = 50;
             for (int i=0; i<numLines; i++) {
             float angle = ofRandom(ofDegToRad(360.0));
             float distance = ofRandom(minRadius, maxRadius);
             float xOffset = cos(angle) * distance;
             float yOffset = sin(angle) * distance;
                 int alpha = ofRandom(0, 255);
             ofColor myColor1(125, 100, 200);
             ofColor myColor2(200, 170, 190);
             ofColor inBetween = myColor1.getLerped(myColor2, ofRandom(5.0));
             ofSetColor(inBetween, 1);
             ofDrawLine(ofGetMouseX(), ofGetMouseY(), ofGetMouseX()+xOffset, ofGetMouseY()+yOffset);
         }

}
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 's') {
 
        ofSaveScreen("savedScreenshot_"+ofGetTimestampString()+".png");
    }

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
