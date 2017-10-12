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
//    int numRects = 15;
//    for (int r=0; r<numRects; r++) {
//        ofSetColor(ofRandom(50, 255));
//        float width = ofRandom(5, 20);
//        float height = ofRandom(5, 20);
//        float distance = ofRandom(35);
//        
//        // Formula for converting from polar to Cartesian coordinates:
//        //  x = cos(polar angle) * (polar distance)
//        //  y = sin(polar angle) * (polar distance)
//        
//        // We need our angle to be in radians if we want to use sin() or cos()
//        // so we can make use of an openFrameworks function to convert from degrees
//        // to radians
//        float angle = ofRandom(ofDegToRad(360.0));
//        
//        float xOffset = cos(angle) * distance;
//        float yOffset = sin(angle) * distance;
//        ofDrawRectangle(ofGetMouseX()+xOffset, ofGetMouseY()+yOffset, width, height);}
         
         
//          int maxRadius = 40;  // Increase for a wider brush
//          int radiusStepSize = 10;  // Decrease for more circles (i.e. a more opaque brush)
//          int alpha = 3;  // Increase for a more opaque brush
//          int maxOffsetDistance = 100;  // Increase for a larger spread of circles
//        // draw smaller and smaller circles and layering (increasing) opaqueness
//            for (int radius=maxRadius; radius>0; radius-=radiusStepSize) {
//            float angle = ofRandom(ofDegToRad(360.0));
//            float distance = ofRandom(maxOffsetDistance);
//            float xOffset = cos(angle) * distance;
//            float yOffset = sin(angle) * distance;
//            ofColor myOrange(255, 132, 0, alpha);
//            ofColor myRed(255, 6, 0, alpha);
//            ofColor inBetween = myOrange.getLerped(myRed, ofRandom(1.0));
//            ofSetColor(inBetween);
//            ofDrawCircle(ofGetMouseX()+xOffset, ofGetMouseY()+yOffset, radius);}
         
             int numLines = 30;
             int minRadius = 1;
             int maxRadius = 20;
             for (int i=0; i<numLines; i++) {
             float angle = ofRandom(ofDegToRad(360.0));
             float distance = ofRandom(minRadius, maxRadius);
             float xOffset = cos(angle) * distance;
             float yOffset = sin(angle) * distance;
                 int alpha = ofRandom(0, 255);
             ofColor myColor1(125, 100, 200);
             ofColor myColor2(200, 170, 190);
             ofColor inBetween = myColor1.getLerped(myColor2, ofRandom(5.0));
             ofSetColor(inBetween, 10);
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
