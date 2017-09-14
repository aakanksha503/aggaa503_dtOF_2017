#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetBackgroundAuto(false);
    
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofVec2f mousePos(ofGetMouseX(), ofGetMouseY());
    
    int numTriangles = 10;
    int minOffset = 1;
    int maxOffset = 5000;
    int alpha = 1;
    float offsetDistance;
   
    
    for (int i = 0; i< numTriangles; i++);{
    float offsetDistance = ofRandom (minOffset, maxOffset);
    alpha++;
    }
    
    ofVec2f p1(0, 1);
    ofVec2f p2(90, 0);
    ofVec2f p3(0, -70);
    
    float rotation = ofRandom(360);
    p1.rotate(rotation);
    p2.rotate(rotation);
    p3.rotate(rotation);
    
    ofVec2f triangleOffset(offsetDistance, 0.0);
    triangleOffset.rotate(rotation);
    
    
    p1 += mousePos + triangleOffset;
    p2 += mousePos + triangleOffset;
    p3 += mousePos + triangleOffset;

    
    cout << "MouseX:" << mousePos.x << endl;
    cout << "MouseY:"<< mousePos.y << endl;
    
    ofColor Pink(223, 90, 157);
    ofColor Yellow(202, 90, 40);
    
    ofVec2f offset(10.0, 30.0);
    mousePos += offset;
    ofColor inBetween = Pink.getLerped(Yellow, ofRandom(500.0));
    
    ofSetColor(inBetween, alpha);
    ofDrawTriangle(p1, p2, p3);
   
    

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
