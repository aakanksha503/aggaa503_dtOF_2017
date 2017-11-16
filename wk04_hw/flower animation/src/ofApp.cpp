#include "ofApp.h"
int r;
int g;
int b;
int radius;
int r1, g1, b1;
int i=0;


//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    pos.set(ofGetWidth()*0.5, ofGetHeight()*0.5);
    noisePos.set(0, ofGetHeight() * .5);
    flower.load("Images/flower.png");


    

   
    }

//--------------------------------------------------------------
void ofApp::update(){
    noisePos.x++;
//      ofBackground(r,g,b);
//    r++;
//    g++;
//    b++;
    radius++;
    float time = ofGetElapsedTimef();
    pos.x = sin(time) * i/1000 + ofGetWidth()* 0.5;
    pos.y = cos(time)*i/1000 + ofGetWidth()*0.5;
    
//    float noise= ofNoise(time * 1);
//    
//
    float noise= ofNoise(noisePos.x * 0.001);
    noisePos.y = ofMap(noise, 0, 1, ofGetHeight()*0.5-300, ofGetHeight()*.5 +300);

}

//--------------------------------------------------------------
void ofApp::draw(){
    

    //    for(i=0; i<2000; i++){
//    ofDrawCircle(ofGetMouseX()*i/100+2, ofGetMouseY()*i/100, radius*i/10000);}
//    for(i=0; i<5000; i++){
//    ofDrawCircle(ofGetMouseX()*i/100+3, ofGetMouseY()*i/100, radius*i/10000);}
//    //    for(i=0; i<3000; i++){
//        ofDrawCircle(ofGetMouseX()*i/10, ofGetMouseY()*i/1000, radius*i/100000);}
//    for(i=0; i<400; i++){
//        ofDrawCircle(ofGetMouseY()*i/100000, ofGetMouseX()*i/100000, radius*i/10000000);}
//    ofDrawCircle(noisePos,2);
//    ofDrawCircle(noisePos/2,2);
  
//    cam.begin();
    
    ofDrawCircle(noisePos/2,2);
    ofDrawCircle(noisePos/3,2);
    ofDrawCircle(noisePos/4,4);
    ofDrawCircle(noisePos/5,2);
    ofDrawCircle(noisePos/6,2);
    ofDrawCircle(noisePos/7, 4);
//    
    for(i=0; i<500; i++){
        ofDrawCircle(pos.x, pos.y, 3);}
    for(i=0; i<500; i++){
        ofDrawCircle(pos.x/i, pos.y/i, 3);}
    for(i=0; i<500; i++){
        ofDrawCircle(pos.x/i, pos.y/i, 3*i/100);}
    for(i=0; i<500; i++){
        ofDrawCircle(pos.y, pos.y, 3);}
    for(i=0; i<500; i++){
        ofDrawCircle(pos.y/i, pos.y/i, 3);}
    for(i=0; i<500; i++){
        ofDrawCircle(pos.y/i, pos.y/i, 3*i/100);}
    
    for(i=0; i<50000; i++){
    ofDrawCircle(ofGetMouseX()*i/100+1, ofGetMouseY()*i/100, radius*i/10000);}
    for(i=0; i<50000; i++){
    ofDrawCircle(ofGetMouseX()*i/100+100, ofGetMouseY()*i/100+100, radius*i/10000);}
    for(i=0; i<50000; i++){
    ofDrawCircle(ofGetMouseX()*i/100+200, ofGetMouseY()*i/100+200, radius*i/10000);}
    for(i=0; i<50000; i++){
    ofDrawCircle(ofGetMouseX()*i/100+300, ofGetMouseY()*i/100+300, radius*i/10000);}
    for(i=0; i<50000; i++){
        ofDrawCircle(ofGetMouseX()*i/100+400, ofGetMouseY()*i/100+400, radius*i/10000);}
    for(i=0; i<50000; i++){
        ofDrawCircle(ofGetMouseX()*i/100+500, ofGetMouseY()*i/100+500, radius*i/10000);}
    for(i=0; i<50000; i++){
        ofDrawCircle(ofGetMouseX()*i/100+600, ofGetMouseY()*i/100+600, radius*i/10000);}
    for(i=0; i<50000; i++){
        ofDrawCircle(ofGetMouseX()*i/100+700, ofGetMouseY()*i/100+700, radius*i/10000);}

//    cam.end();
}

//        if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {
//            int numLines = 10;
//            int minRadius = 2;
//            int maxRadius = 20;
//            for (int i=0; i<numLines; i++) {
//                
//                // Formula for converting from polar to Cartesian coordinates:
//                //    x = cos(polar angle) * (polar distance)
//                //    y = sin(polar angle) * (polar distance)
//                // We need our angle to be in radians if we want to use sin() or cos()
//                // so we can make use of an openFrameworks function to convert from degrees
//                // to radians
//                float angle = ofRandom(ofDegToRad(360.0));
//                float distance = ofRandom(minRadius, maxRadius);
//                float xOffset = cos(angle) * distance;
//                float yOffset = sin(angle) * distance;
//                
//                float alpha = ofMap(distance, minRadius, maxRadius, 0, 0); // Make shorter lines more opaque
//               
//                
//                ofSetLineWidth(ofRandom(1, 5)); // Remember, this doesn't work on all graphics cards
//                ofDrawLine(ofGetMouseX(), ofGetMouseY(), ofGetMouseX()+xOffset, ofGetMouseY()+yOffset);
//            }
//
//        }
//    }



//ofSetLineWidth(ofRandom(90));
//    for(i=0; i<50000; i++){
//    ofDrawCircle(1-ofGetWidth()*i/100, 1-ofGetHeight()*i/100, radius*i/10000);}
//    ofSetLineWidth(ofRandom(90));
//

    
//    for(i=0; i<500; i=+2){
//        ofDrawCircle(ofGetMouseX()*i/100, ofGetMouseY()*i/100, radius*i/10000);}
//
//



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
    flower.draw(ofGetMouseX(), ofGetMouseY());
    flower.draw(ofGetMouseX()/2, ofGetMouseY()/2);
      flower.draw(ofGetMouseX()/3, ofGetMouseY()/3);
//  ofDrawCircle(ofGetMouseX(), ofGetMouseY(), 3);
    ofSetColor(r1, g1, b1);
   
    r = ofRandom(255);
    g = ofRandom(40);
    b = ofRandom(255);
    
    r1 = ofRandom(230);
    g1 = ofRandom(90);
    b1 = ofRandom(150);
//  radius++;
    
    
    r1++;
    g1++;
    b1++;
    
   
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
