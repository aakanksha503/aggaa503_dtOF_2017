#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    void draw2d();

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

    ofVideoPlayer myPlayer;
    ofVideoPlayer myPlayer2;
    ofxGuiGroup mixerGroup;
    ofxFloatSlider  myPlayerAlpha;
    ofFbo fbo;
    ofShader shader;
    ofxToggle kenabled;
    ofxIntSlider ksectors;
    float kangle, kx, ky;
    
    ofSerial serial;
    string str;
		
};
