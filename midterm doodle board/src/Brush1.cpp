//#include "Brush1.hpp"
//
//int alpha =0;
//int r = (200, 90, 10);
//int g = (30,180, 160);
//
//
//brush1::brush1(){
//    ofSetBackgroundAuto(false);
//    minDistance = 10;
//    LeftMouseButtonPressed=false;
//    
//}
//
//
//void brush1::update(){
//    if (LeftMouseButtonPressed) {
//        ofVec2f mousePos(ofGetMouseX(), ofGetMouseY());
//        if (lastpoint.distance(mousePos) >= minDistance) {
//            currentPolyline.curveTo(mousePos);
//            lastpoint = mousePos;
//            alpha=+0.5;
//        }
//    }
//}
//
//void brush1::draw(){
//    ofBackground(0);
//    ofColor r;
//    ofColor b;
//    ofColor p = b.getLerped(r, 10);
//    
//    ofSetLineWidth(ofRandom((1,2)));
//    currentPolyline.draw();
//    straightSegmentPolyline.draw();
//    
//    ofSetColor(p);
//    for (int i=0; i<polylines.size(); i++) {
//        ofPolyline polyline = polylines[i];
//        polyline.draw();
//        vector<ofVec3f> vertices = polyline.getVertices();
//        for (int vertexIndex=0; vertexIndex<vertices.size(); vertexIndex++) {
//            ofVec3f vertex = vertices[vertexIndex];  // ofVec3f is like ofVec2f, but with a third dimension, z
//            ofDrawCircle(vertex, ofRandom(0,4));
//            ofDrawCircle(vertex+10, ofRandom(0, 2));
//            ofDrawCircle(vertex+20, ofRandom(1,2));
//            ofDrawCircle(vertex+30, ofRandom(0,3));
//        }
//    }
//   
//}
//
//void brush1::keyPressed(int (s)){
//    ofBackground(0);
//    ofColor r;
//    ofColor b;
//    ofColor p = b.getLerped(r, 10);
//    
//    ofSetColor(p);
//    for (int i=0; i<polylines.size(); i++) {
//        ofPolyline polyline = polylines[i];
//        polyline.draw();
//        vector<ofVec3f> vertices = polyline.getVertices();
//        for (int vertexIndex=0; vertexIndex<vertices.size(); vertexIndex++) {
//            ofVec3f vertex = vertices[vertexIndex];  // ofVec3f is like ofVec2f, but with a third dimension, z
//            ofDrawCircle(vertex, ofRandom(1,5));
//            ofDrawCircle(vertex+10, ofRandom(2, 4));
//            ofDrawCircle(vertex+20, ofRandom(1,2));
//        }
//    }
//    
//    
//    ofSetLineWidth(ofRandom((1,2)));
//    currentPolyline.draw();
//    straightSegmentPolyline.draw();
//}
//
//void brush1::mousePressed(int x, int y, int button){
//    if (button == OF_MOUSE_BUTTON_LEFT) {
//        
//        LeftMouseButtonPressed = true;
//        currentPolyline.curveTo(x, y);  // Remember that x and y are the location of the mouse
//        currentPolyline.curveTo(x, y);  // Necessary duplicate for first control point
//        lastpoint.set(x, y);  // Set the x and y of a ofVec2f in a single line
//    }
//    
//}
//
//void brush1::mouseReleased(int x, int y, int button){
//    if (button == OF_MOUSE_BUTTON_LEFT) {
//        LeftMouseButtonPressed = false;
//        currentPolyline.curveTo(x, y); // Necessary duplicate for last control point
//        polylines.push_back(currentPolyline);
//        currentPolyline.clear();  // Erase the vertices, allows us to start a new brush stroke
//    }
//    
//}
//
//
