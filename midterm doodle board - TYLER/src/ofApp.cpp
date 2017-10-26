#include "ofApp.h"

int alpha =0;
//--------------------------------------------------------------
void ofApp::setup(){
    Avenir.load("Avenir.ttc", 12);
    
    //ofSetBackgroundAuto(false);	// TYLER - try without this ?
	
    ofBackground(0);
    
    boy.load("images/boy.jpg");
    tree.load("images/tree.jpg");
    
    minDistance = 10;
    
    LeftMouseButtonPressed=false;
    
    gravity = ofVec2f(0.00001,ofRandom(0,0.0002));
    
    lastUpdateTime = ofGetElapsedTimef();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //Brush 1 sparkly star
	
	// TYLER - the following code is duplicated in ofApp::mousePressed() below
	// you don't need it both places
    
    //AAKANKSHA - if I remove it from here it doesn't work
	
    if (LeftMouseButtonPressed) {
        ofVec2f mousePos(ofGetMouseX(), ofGetMouseY());
        if (lastpoint.distance(mousePos) >= minDistance) {
            currentPolyline.curveTo(mousePos);
            lastpoint = mousePos;
            alpha=+0.5;
        }
    }
    
   //brush 3
    
//    float timeDiff = ofGetElapsedTimef() - lastUpdateTime;
//    
//
//    for (int i=0; i<200; i++)
//    {
//        Brush3vec[].update(gravity, timeDiff);	// update
//    }
//    
//    lastUpdateTime = ofGetElapsedTimef();
}


//--------------------------------------------------------------
void ofApp::draw(){
    //Brush 1 sparkly star
	

	// ofBackground(0);	// TYLER -
						// ofBackground(0) clears the screen,
						// so this would cancel the effect of ofSetBackgroundAuto(false)
	
	
	// TYLER - draw page background
	
	if (page == 1)
	{   boy.draw(0,0, 1000, 500);
		introString =	"Hi. This is Ted. Will you help him complete his drawing? Press Y to continue or N to terminate";"\n";
		ofSetHexColor(0xffffff);
		Avenir.drawString(introString, 20, 30);
	}
	
	else if (page == 2)
	{
		tree.draw(0,0);
	}
	
	// draw the brush drawings
	
    
    for (int i=0; i<polylines.size(); i++) {
		
        ofPolyline polyline = polylines[i];
        polyline.draw();
		
        vector<ofVec3f> vertices = polyline.getVertices();
        for (int vertexIndex=0; vertexIndex<vertices.size(); vertexIndex++) {
		
			
        ofVec3f vertex = vertices[vertexIndex];  // ofVec3f is like ofVec2f, but with a third dimension,
			
			if (brush == 1)
			{
				brush1.draw(vertex);	// draw the Brush1 pattern at this position
			}
			else if (brush == 2)
			{
//				if (vertexIndex % 10 == 0) {						brush2.draw(vertex);
				}
//            else if (brush == 3)
//            { (vertexIndex % 10 == 0);{ // only draw this one every 10th vertex
//            brush3.draw(vertex);}
//			}
		
        }
    
    }}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	
    //different scenes background
    
    if (key == 'a')
	{
        // switch to page 1 and brush 1
		
		page = 1;
		
		brush = 1;
		
		// clear the drawing by clearing the polylines
		
		polylines.clear();
	}

    else if (key == 'y')
    {
		
		page = 2;
		
		brush = 2;
		
		polylines.clear();

	}
	
	else if (key == '1')
	{
		// switch to brush 1
		brush = 1;
	}
	else if (key == '2')
	{
		// switch to brush 2
		brush = 2;
	}
	
    else if (key == '3')
    {
        // switch to brush 3
        brush = 3;
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
