#include "ofApp.h"
int alpha =0;
int r = (200, 90, 10);
int g = (30,180, 160);

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
//    straightSegmentPolyline.addVertex(100, 100);  // Add a new point: (100, 100)
//    straightSegmentPolyline.addVertex(50, 150);  // Add a new point: (150, 150)
//    straightSegmentPolyline.addVertex(100, 200);  // etc...
//    straightSegmentPolyline.addVertex(400, 250);
//    straightSegmentPolyline.addVertex(500, 300);
////
//    curvedSegmentPolyline.curveTo(350, 100);  // These curves are Catmull-Rom splines
//    curvedSegmentPolyline.curveTo(350, 100);  // Necessary Duplicate for Control Point
//    curvedSegmentPolyline.curveTo(400, 150);
//    curvedSegmentPolyline.curveTo(450, 100);
//    curvedSegmentPolyline.curveTo(500, 150);
//    curvedSegmentPolyline.curveTo(550, 100);
//    curvedSegmentPolyline.curveTo(550, 100);  // Necessary Duplicate for Control Point
//    
//    closedShapePolyline.addVertex(600, 125);
//    closedShapePolyline.addVertex(700, 100);
//    closedShapePolyline.addVertex(800, 125);
//    closedShapePolyline.addVertex(700, 150);
//    closedShapePolyline.close();  // Connect first and last vertices
    
    minDistance = 10;
    LeftMouseButtonPressed=false;

}

//--------------------------------------------------------------
void ofApp::update(){
    if (LeftMouseButtonPressed) {
        ofVec2f mousePos(ofGetMouseX(), ofGetMouseY());
        if (lastpoint.distance(mousePos) >= minDistance) {
            // a.distance(b) calculates the Euclidean distance between point a and b.  It's
            // the length of the straight line distance between the points.
            currentPolyline.curveTo(mousePos);  // Here we are using an ofVec2f with curveTo(...)
            lastpoint = mousePos;
            alpha++;
        }

    }}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    ofColor r;
    ofColor b;
    ofColor p = b.getLerped(r, 1000);
    

//    ofSetColor(123, 89, 80, alpha);  // White color for saved polylines
    ofSetColor(p);
    for (int i=0; i<polylines.size(); i++) {
        ofPolyline polyline = polylines[i];
        polyline.draw();
        vector<ofVec3f> vertices = polyline.getVertices();
        for (int vertexIndex=0; vertexIndex<vertices.size(); vertexIndex++) {
            ofVec3f vertex = vertices[vertexIndex];  // ofVec3f is like ofVec2f, but with a third dimension, z
            ofDrawCircle(vertex, ofRandom(1,3));
            ofDrawCircle(vertex+10, ofRandom(1,5));
            ofDrawCircle(vertex+20, ofRandom(1,2));
            ofDrawCircle(vertex/3, ofRandom(1,4));
            ofDrawCircle(vertex/2, ofRandom(1, 3));


        }
    }
    
   
    ofSetLineWidth(ofRandom((1,10)));
    currentPolyline.draw();
    straightSegmentPolyline.draw();
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
    if (button == OF_MOUSE_BUTTON_LEFT) {
        
        LeftMouseButtonPressed = true;
        currentPolyline.curveTo(x, y);  // Remember that x and y are the location of the mouse
        currentPolyline.curveTo(x, y);  // Necessary duplicate for first control point
        lastpoint.set(x, y);  // Set the x and y of a ofVec2f in a single line
    }

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    if (button == OF_MOUSE_BUTTON_LEFT) {
        LeftMouseButtonPressed = false;
        currentPolyline.curveTo(x, y); // Necessary duplicate for last control point
        polylines.push_back(currentPolyline);
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
