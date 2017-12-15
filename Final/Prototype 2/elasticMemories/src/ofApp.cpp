#include "ofApp.h"
int i;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(10);
    ofBackground(ofColor::white);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    i++;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofPushMatrix();
    ofTranslate( ofGetWidth() / 2, ofGetHeight() / 2 );
    stripePattern();
    ofPopMatrix();
}

void ofApp::stripePattern() {
    ofSetLineWidth(ofRandom(3));
    ofNoFill();
    ofSetLineWidth(ofRandom(3));
    ofNoFill();
    for (int i=-100; i<100; i++) {
        
        ofPushMatrix();
        
        ofTranslate(ofRandom(10), ofRandom(10)) ;
        
        ofRotate(i * ofRandom(sin(ofGetElapsedTimef())));
        
        ofScale(ofRandom((sin(ofGetElapsedTimef()))),ofRandom((1/ofGetElapsedTimef())));
        
        ofSetColor(0);
        
        ofDrawTriangle(100, 100, 90, 90, 80, 80);
        
        ofDrawTriangle(-100, 80, -90, 70, -80, 60);
        
        
        ofPopMatrix();
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
