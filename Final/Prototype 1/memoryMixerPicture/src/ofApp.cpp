#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
    
    serial.setup("/dev/cu.usbmodem14111", 9600);
    
    int myByte = 0;
    myByte = serial.readByte();
    if ( myByte == OF_SERIAL_NO_DATA )
        printf("no data was read");
    else if ( myByte == OF_SERIAL_ERROR )
        printf("an error occurred");
    else
        printf("myByte is %d", myByte);
    
    ofSetFrameRate(5);
    
    //code referenced from openFrameworks Essentials and Joselyn Mc Donald's Arduino to oF code
    
    ofLoadImage (image, "2222.jpg");
    ofLoadImage (image2, "3333.jpg");
    ofLoadImage (image3, "4444.jpg");
    
    mixerGroup.setup("Mixer");
    mixerGroup.setHeaderBackgroundColor(ofColor(0));
    mixerGroup.setBorderColor(ofColor(0));
    
    mixerGroup.add( imageAlpha1.setup( "image", 100,0,255 ) );
    mixerGroup.add( imageAlpha2.setup( "image2", 0,0,255 ) );
    mixerGroup.add( imageAlpha3.setup( "image3", 0,0,255 ) );
    
    shader.load("kaleido.vert", "kaleido.frag");
    mixerGroup.add( kenabled.setup( "Decay", false) );
    mixerGroup.add( ksectors.setup( "Fragment",20, 0, 50 ) );
    mixerGroup.add( kangle.setup( "Shift", -60, -60, 0) );

    fbo.allocate( ofGetWidth(), ofGetHeight(), GL_RGB );
}

//--------------------------------------------------------------
void ofApp::update(){
    
    while ( true ) {
        int c = serial.readByte();
        if ( c == OF_SERIAL_NO_DATA || c == OF_SERIAL_ERROR || c == 0 )
            break;
        if ( c == '\n' ) {
            ksectors = ofToFloat( str );
            str = "";
        }
        else str.push_back( c );
    }
}

//--------------------------------------------------------------
void ofApp::draw2d(){
    
    ofSetColor(255, imageAlpha1);
    image.draw(0,0,ofGetWidth(), ofGetHeight());
    ofSetColor(255, imageAlpha2);
    image2.draw(0,0,ofGetWidth(), ofGetHeight());
    ofSetColor(255, imageAlpha3);
    image3.draw(0,0,ofGetWidth(), ofGetHeight());
}

void ofApp::draw(){
    fbo.begin();
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
    
    else{
        ofSetColor(0);
    }

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
