#include "ofApp.h"

int alpha =0;
int r = (200, 90, 10);
int g = (30,180, 160);


//--------------------------------------------------------------
void ofApp::setup(){
   Avenir.load("Avenir.ttc", 12);
    
    ofSetBackgroundAuto(false);
    ofBackground(0);
    boy.load("images/boy.jpg");
    tree.load("images/tree.jpg");
    minDistance = 10;
    LeftMouseButtonPressed=false;
//    ofbgBackground=true;
}

//--------------------------------------------------------------
void ofApp::update(){
//    brusha.update();
    
    //Brush 1 sparkly star
    if (LeftMouseButtonPressed) {
        ofVec2f mousePos(ofGetMouseX(), ofGetMouseY());
        if (lastpoint.distance(mousePos) >= minDistance) {
            currentPolyline.curveTo(mousePos);
            lastpoint = mousePos;
            alpha=+0.5;
        }
    }}


//--------------------------------------------------------------
void ofApp::draw(){
////  brusha.draw();
//    
////    if(ofbgBackground){
////    night.draw(0,0, 1024, 768);
////    ofbgBackground = false;
////    }
//    
    //Brush 1 sparkly star
    ofBackground(0);
    ofColor r;
    ofColor b;
    ofColor p = b.getLerped(r, 10);
    
    ofSetColor(p);
    for (int i=0; i<polylines.size(); i++) {
        ofPolyline polyline = polylines[i];
        polyline.draw();
        vector<ofVec3f> vertices = polyline.getVertices();
        for (int vertexIndex=0; vertexIndex<vertices.size(); vertexIndex++) {
            ofVec3f vertex = vertices[vertexIndex];  // ofVec3f is like ofVec2f, but with a third dimension, z
            ofDrawCircle(vertex, ofRandom(0,4));
            ofDrawCircle(vertex+10, ofRandom(0, 2));
            ofDrawCircle(vertex+20, ofRandom(1,2));
            ofDrawCircle(vertex+30, ofRandom(0,3));
        }
    }
    
    
    ofSetLineWidth(ofRandom((1,2)));
    currentPolyline.draw();
    straightSegmentPolyline.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    //different scenes background
    if (key == 'a')
   {boy.draw(0,0, 1000, 500);
       introString =	"Hi. This is Ted. Will you help him complete his drawing? Press Y to continue or N to terminate";"\n";
       ofSetHexColor(0xffffff);
       Avenir.drawString(introString, 20, 30);}

    if (key == 'y')
    {tree.draw(0,0);}
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
        currentPolyline.curveTo(x, y);
        currentPolyline.curveTo(x, y);
        lastpoint.set(x, y);
    }

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    if (button == OF_MOUSE_BUTTON_LEFT) {
        LeftMouseButtonPressed = false;
        currentPolyline.curveTo(x, y);
        polylines.push_back(currentPolyline);
        currentPolyline.clear();
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
