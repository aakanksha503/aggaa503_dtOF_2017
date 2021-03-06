#pragma once

#include "ofMain.h"
#include "Brush1.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    ofPolyline straightSegmentPolyline;
    ofPolyline curvedSegmentPolyline;
    ofPolyline closedShapePolyline;
    ofPolyline currentPolyline;
    bool LeftMouseButtonPressed;
    ofVec2f lastpoint;
    float minDistance;
    vector <ofPolyline> polylines;
    int r,g, b;

//        brush1 brusha;
        ofImage night;
        ofImage tree;
        ofImage boy;
        ofTrueTypeFont 	Avenir;
        string introString;
//    bool ofbgBackground;
     
		
};
