#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    ofLoadImage(imageTexture, "1.png");
    image.load ("background.png");
    cross.load("hey.png");
 
    
    points[0].x = 100; points[0].y = 100;
    points[1].x = 500; points[1].y = 100;
    points[2].x = 500; points[2].y = 700;
    points[3].x = 100; points[3].y = 700;


}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
//    cam.begin();
    

    
    image.draw(0,0,ofGetWidth(), ofGetHeight());
    cross.draw(500,200);
//

//    cam.end();

    imageTexture.draw(points[0], points[1], points[2], points[3]);

    
    ofSetLineWidth(10);
    
    
    ofPushMatrix();
    
    ofSetColor(200, 180, 190, 255);
    
//    if (nPts >1){
//        for (int i=0; i< nPts - 1; i++){
//        ofDrawLine(pts[i].x, pts[i].y, pts[i+1].x, pts[i+1].y);
//        }
//        
//    }
    pts.draw();
    
    ofPopMatrix();
    

//    ofDrawCircle(ofGetMouseX(), ofGetMouseY(), 10);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if( key == '1'){
        cornerIndex = 0;
    }
    if( key == '2'){
        cornerIndex = 1;
    }
    if( key == '3'){
        cornerIndex = 2;
    }
    if( key == '4'){
        cornerIndex = 3;
    }
    
    if (key == OF_KEY_LEFT){
        points[cornerIndex].x -= 30;
    }
    
    if (key == OF_KEY_RIGHT){
        points[cornerIndex].x += 30;
    }
    
    if (key == OF_KEY_UP){
        points[cornerIndex].y -= 30;
    }
    
    if (key == OF_KEY_DOWN){
        points[cornerIndex].y += 30;
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
    if (pts.size() < MAX_PTS)
    {
        pts.addVertex(ofVec2f(x,y));
    }
//    if (nPts < MAX_PTS){
//        pts[nPts].x = x;
//        pts[nPts].y = y;
//        nPts ++;
//    }
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
//    nPts = 0;

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
