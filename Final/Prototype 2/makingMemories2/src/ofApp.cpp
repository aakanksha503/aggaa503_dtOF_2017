#include "ofApp.h"
int i;
int alpha;
int lineWidth;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(10);
    ofBackground(ofColor::white);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    alpha = ofMap(ofGetElapsedTimeMillis(),0, 5000, 255, 0);
    lineWidth = ofMap (ofGetElapsedTimef(), 0, 5000, 3, 0);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofPushMatrix();
    ofTranslate( ofGetWidth() / 2, ofGetHeight() / 2 );
    stripePattern();
    ofPopMatrix();
    
}

void ofApp::stripePattern() {
    
    ofSetLineWidth(lineWidth);
    ofNoFill();
    
    for (int i=-50; i<50; i++) {
        ofPushMatrix();
        
        ofTranslate( i*ofRandom((cos(ofGetElapsedTimef()))), ofRandom((sin(ofGetElapsedTimef()))));
        
        ofRotate(i * ofRandom(360));
        
        ofScale(ofRandom(1/ofGetElapsedTimef()), ofRandom(50));
        
        ofNoFill();
        
        ofFill();
        
        ofDrawEllipse(10, 10, ofRandom(2),2);
        
        ofPopMatrix();
    }
    
    
    ofSetLineWidth(ofRandom(3));
    ofNoFill();
    for (int i=-100; i<100; i++) {
        ofPushMatrix();
        
        ofTranslate(ofRandom(ofGetElapsedTimef()), ofRandom(ofGetElapsedTimef())) ;
        
        ofRotate(i * ofRandom(360));
        
        ofScale(ofRandom((1/ofGetElapsedTimef())),ofRandom((1/ofGetElapsedTimef())));
        
        ofSetColor(0);
        
        ofDrawTriangle(100, 100, 90, 90, 80, 80);
        
        ofDrawTriangle(80, 80, 90, 90, 100, 100);
        
        ofDrawTriangle(50, -50, 60, -60, 70, -70);
        
        ofRotate(i * ofRandom((1/ofGetElapsedTimef())));
        
        ofScale(ofRandom((1/ofGetElapsedTimef())),ofRandom((1/ofGetElapsedTimef())));
        
        ofPopMatrix();
        
        
        ofSetLineWidth(ofRandom(2));
        ofNoFill();
        for (int i=-5; i<5; i++) {
            ofPushMatrix();
            
            ofTranslate( ofRandom(cos(ofGetElapsedTimef())), ofRandom(10) );
            
            ofRotate( i * ofRandom(360));
            
            ofScale( ofRandom(ofGetElapsedTimef()), ofRandom(1)
                    );
            
            ofSetColor(0);//
            ofDrawTriangle( -1, -1, 2, 2, 3, 3 );
            
            ofPopMatrix();
        }}
    
    
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
