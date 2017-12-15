#include "ofApp.h"
int i;
int alpha;
int lineWidth;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(10);
    ofSetBackgroundAuto(false);
    ofBackground(ofColor::white);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    alpha = ofMap(ofGetElapsedTimeMillis(),0, 5000, 255, 0);
    ofSetBackgroundAuto(false);
    lineWidth = ofMap (ofGetElapsedTimef(), 0, 5000, 3, 0);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofPushMatrix();
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    for(int x = 0; x <1; x++){
        
        for( int y = 0; y< 2; y++){
            
            ofTranslate(ofRandom(sin(ofGetElapsedTimef())), ofRandom(cos(ofGetElapsedTimef())));
            
            stripePattern();}}
    
    ofPopMatrix();}
    
//ofPushMatrix();
//
//ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//
//for(int x = 0; x <1; x++){
//    
//    for( int y = 0; y< 2; y++){
//        
//        ofTranslate(ofRandom(sin(ofGetElapsedTimef())), ofRandom(cos(ofGetElapsedTimef())));
//        
//        stripePattern1();}}
//
//ofPopMatrix();
//
//}

void ofApp::stripePattern() {
    
    
    ofSetLineWidth(ofRandom(5));
    ofNoFill();
    for (int i=-1; i<1; i++) {
        ofPushMatrix();
        
        ofTranslate(ofRandom(ofGetElapsedTimef()), ofRandom(ofGetElapsedTimef())) ;
        
        ofRotate(i * ofRandom(360));
        
        ofScale(ofRandom((ofGetElapsedTimef())),ofRandom((ofGetElapsedTimef())));
        
        ofSetColor(0);
        
        ofDrawEllipse(1, 1, ofRandom(ofGetElapsedTimef()), ofRandom(ofGetElapsedTimef()));
        
        ofPopMatrix();
        
        

        

    }}
//void ofApp::stripePattern1() {
//    
//    
//    ofSetLineWidth(ofRandom(3));
//    ofNoFill();
//    for (int i=-1; i<10; i++) {
//        ofPushMatrix();
//        
//        ofTranslate(ofRandom(ofGetElapsedTimef()), ofRandom(ofGetElapsedTimef())) ;
//        
//        ofRotate(i * ofRandom(360));
//        
//        ofScale(ofRandom((ofGetElapsedTimef())),ofRandom((1/ofGetElapsedTimef())));
//        
//        ofSetColor(0);
//        
//        ofDrawEllipse(1, 1, ofRandom(10), ofRandom(10));
//        
//        ofRotate(i * ofRandom((1/ofGetElapsedTimef())));
//        
//        ofScale(ofRandom((1/ofGetElapsedTimef())),ofRandom((1/ofGetElapsedTimef())));
//        
//        ofPopMatrix();
//        
//        
//        
//        
//    }}
    







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
