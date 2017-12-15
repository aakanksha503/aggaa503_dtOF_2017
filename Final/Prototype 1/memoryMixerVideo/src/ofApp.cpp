#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    serial.setup("/dev/cu.usbmodem14511", 9600);
    
    int myByte = 0;
    myByte = serial.readByte();
    if ( myByte == OF_SERIAL_NO_DATA )
        printf("no data was read");
    else if ( myByte == OF_SERIAL_ERROR )
        printf("an error occurred");
    else
        printf("myByte is %d", myByte);
    

    ofSetFrameRate(5);
    
    //code referenced from openFrameworks Essentials and the openFrameworks book/
    myPlayer.load("test.mp4");
    myPlayer2.load("test.mp4");

    myPlayer.play();
    myPlayer2.play();
   
    
    mixerGroup.setup("Mixer");
    mixerGroup.setHeaderBackgroundColor(ofColor(0));
    mixerGroup.setBorderColor(ofColor(0));
    
    mixerGroup.add( myPlayerAlpha.setup( "video", 200,0,255 ) );
    
    shader.load("kaleido.vert", "kaleido.frag");
    mixerGroup.add( kenabled.setup( "Decay", false) );
    mixerGroup.add( ksectors.setup( "Memory mixer", 5, 2, 50 ) );
    
    fbo.allocate( ofGetWidth(), ofGetHeight(), GL_RGB );
}

//--------------------------------------------------------------
void ofApp::update(){
    myPlayer.update();
    myPlayer2.update();
    
    
    while ( true ) {
        int c = serial.readByte();
        if ( c == OF_SERIAL_NO_DATA || c == OF_SERIAL_ERROR || c == 0 )
            break;
        if ( c == '\n' ) {
            ksectors = ofToInt( str );
            str = "";
        }
        else str.push_back( c );
    }
}

//--------------------------------------------------------------
void ofApp::draw2d(){
    
//    ofSetColor(ofRandom(255), ofRandom(0, 255));
//    myPlayer2.draw(0, 0, ofGetWidth(), ofGetHeight());
    
    ofSetColor(255, myPlayerAlpha);
    myPlayer2.draw(0.2, 0.2, ofGetWidth(), ofGetHeight());
    }

void ofApp::draw(){
    fbo.begin();
    //ofClear(0, 0, 0);
    draw2d();
    fbo.end();
    ofSetColor( 255 );
    if (kenabled == true) {
        shader.begin();
        shader.setUniform1i( "ksectors", ksectors );
        shader.setUniform1f( "kangleRad", ofDegToRad(kangle) );
        shader.setUniform2f( "kcenter", kx*ofGetWidth(),
                            ky*ofGetHeight() );
        shader.setUniform2f( "screenCenter", 0.5*ofGetWidth(),
                            0.5*ofGetHeight() );
    }
    fbo.draw( 0, 0, ofGetWidth(), ofGetHeight() );
    
    if (kenabled) shader.end();
    
    mixerGroup.draw();
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
