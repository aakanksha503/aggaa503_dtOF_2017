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
        int numLines = 1;
        int minRadius = 10;
        int maxRadius = 200;
        for (int i=0; i<numLines; i++) {
            float angle = ofRandom(ofDegToRad(360.0));
            float distance = ofRandom(minRadius, maxRadius);
            float xOffset = cos(angle) * distance;
            float yOffset = sin(angle) * distance;
            float alpha = ofMap(distance, minRadius, maxRadius, 10, 0);  // Make shorter lines more opaque
            ofColor myColor1(200, 100, 200);
            ofColor myColor2(200, 50, 190);
            ofColor inBetween = myColor1.getLerped(myColor2, ofRandom(500.0));
            ofSetColor(inBetween, alpha);
            ofDrawLine(ofGetMouseX(), ofGetMouseY(), ofGetMouseX()+xOffset, ofGetMouseY()+yOffset);
        }
        
    }
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 's') {
        // It's strange that we can compare the int key to a character like `s`, right?  Well, the super short
        // explanation is that characters are represented by numbers in programming.  `s` and 115 are the same
        // thing.  If you want to know more, check out the wiki for ASCII.
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
