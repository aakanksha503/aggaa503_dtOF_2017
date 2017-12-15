#include "ofApp.h"
int i;
//Process of making memories

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
    for (int i=-50; i<50; i++) {
        ofPushMatrix();
        
        ofTranslate( i*ofRandom(40), ofRandom(5) );
        
        ofRotate( i * ofRandom(5) );
        
        ofScale( ofRandom(6), ofRandom(6) );
        
        ofSetColor(0);
        
        ofDrawTriangle( 0, 0, -1, 1, 2, 2 );
        
        ofPopMatrix();
    }
    
    ofSetLineWidth(ofRandom(3));
    ofNoFill();
    for (int i=-50; i<50; i++) {
        ofPushMatrix();
        
        ofTranslate( ofRandom(10), ofRandom(10) );
        
        ofRotate( i * ofRandom(5) );
        
        ofScale( ofRandom(ofGetElapsedTimef()), ofRandom(ofGetElapsedTimef()) );
        
        ofSetColor(0);
        
        ofDrawTriangle( 3, 3, -4, 4, 5, 5 );
        
        ofPopMatrix();
    }
    
    ofSetLineWidth(ofRandom(3));
    ofNoFill();
    for (int i=-50; i<50; i++) {
        ofPushMatrix();
        
        ofTranslate( ofRandom(10), ofRandom(10) );
        
        ofRotate( i * ofRandom(5) );
        
        ofScale( ofRandom(ofGetElapsedTimef()), ofRandom(ofGetElapsedTimef()) );
        
        ofSetColor(0);
        
        ofDrawTriangle( 6, 6, -7, 7, 8, 8 );
        
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
