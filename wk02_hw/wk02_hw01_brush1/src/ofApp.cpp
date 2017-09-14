#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    minDistance = 1;
    ofBackground(255);
    leftMouseButtonPressed = false;
    ofSetBackgroundAuto(false);

}

//--------------------------------------------------------------
void ofApp::update(){
    
    if (leftMouseButtonPressed) {
    ofVec2f mousePos(ofGetMouseX(), ofGetMouseY());
    if (lastPoint.distance(mousePos) >= minDistance) {
        // a.distance(b) calculates the Euclidean distance between point a and b.  It's
        // the length of the straight line distance between the points.
        currentPolyline.addVertex(mousePos);  // Here we are using an ofVec2f with curveTo(...)
        lastPoint = mousePos;
    }
}
    

}

//--------------------------------------------------------------
void ofApp::draw(){
   
        for (int i=0; i<polylines.size(); i++) {
        ofPolyline polyline = polylines[i];
         
        polyline.draw();
            
    }
     ofSetLineWidth(ofRandom(0, 70));
    ofColor Pink(223, 90, 157);
    ofColor Yellow(202, 90, 40);
    ofColor inBetween = Pink.getLerped(Yellow, ofRandom(500.0));
    ofSetColor(inBetween, alpha);
    alpha++;
    currentPolyline.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 's'){
        currentPolyline.end();
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
    if (button == OF_MOUSE_BUTTON_LEFT) {
        leftMouseButtonPressed = true;
        currentPolyline.curveTo(x, y);  // Remember that x and y are the location of the mouse
        currentPolyline.curveTo(x, y);  // Necessary duplicate for first control point
        lastPoint.set(x, y);  // Set the x and y of a ofVec2f in a single line
    }

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    if (button == OF_MOUSE_BUTTON_LEFT) {
        leftMouseButtonPressed = false;
        currentPolyline.curveTo(x, y); // Necessary duplicate for last control point
        currentPolyline.clear();  // Erase the vertices, allows us to start a new brush stroke
    }

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
