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
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    for(int x = 0; x <2; x++){
        
        for( int y = 0; y< 10; y++){
        
        ofTranslate(2*cos(ofGetElapsedTimef()), 2*sin(ofGetElapsedTimef()));
            
        stripePattern();}}

    ofPopMatrix();

}

void ofApp::stripePattern() {
    
    
    ofSetLineWidth(ofRandom(3));
    ofNoFill();
    for (int i=-20; i<20; i++) {
        ofPushMatrix();
        
        ofTranslate(ofRandom(ofGetElapsedTimef()), ofRandom(ofGetElapsedTimef())) ;
        
        ofRotate(i * ofRandom(360));
        
        ofScale(ofRandom((1/ofGetElapsedTimef())),ofRandom((1/ofGetElapsedTimef())));
        
        ofSetColor(0);
        
        ofDrawEllipse(10i, 10i, 40-i, 40-i);
        
        ofRotate(i * ofRandom((1/ofGetElapsedTimef())));
        
        ofScale(ofRandom((1/ofGetElapsedTimef())),ofRandom((1/ofGetElapsedTimef())));
        
        ofPopMatrix();
    
        
//        ofSetLineWidth(2);
//        ofNoFill();
//        for (int i=-10; i<20; i++) {
//            ofPushMatrix();
//            
//            ofTranslate(2i/3, 5i/2);
//            
//            ofRotate( i * ofRandom(360));
//            
//            ofScale(ofRandom(ofGetElapsedTimef()), ofRandom(1));
//            
//            ofSetColor(0);
//            
//            ofDrawTriangle( 1, 1, 20, 20, 3, 3 );
//            
//            ofPopMatrix();
//        

    
    }}


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
