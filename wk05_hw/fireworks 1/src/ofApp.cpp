/* Have an explosion of particles by clicking on the screen. */
#include "ofApp.h"
int a=255;
int b= 110;
int c= 45;

//--------------------------------------------------------------
void ofApp::setup(){
//    ofBackground(a,b,c);

     night.load("images/night.jpg");
    
    
    
    ofSetVerticalSync(true);
    ofSetBackgroundAuto(false);
    ofSetFrameRate(ofRandom(50, 200));
    float vx = ofRandom(-2,2);
    float vy = ofRandom(-2,2);
    
    
    for (int i = 0; i < 200; i++){
        particle myParticle;
        myParticle.setInitialCondition(ofGetMouseX(),ofGetMouseY(),vx, vy);
        particles.push_back(myParticle);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // on every frame
    // we reset the forces
    // add in any forces on the particle
    // perfom damping and
    // then update
    
    for (int i = 0; i < particles.size(); i++){
        particles[i].resetForce();
        particles[i].addForce(0.004,0.9);  // gravity
        particles[i].addDampingForce();
        particles[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    

    night.draw(0,0);
  
    for (int i = 0; i < 200; i++){
        
    particles[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    for (int i = 0; i < particles.size(); i++){
        float vx = ofRandom(-2,2);
        float vy = ofRandom(-2,2);
        particles[i].setInitialCondition(mouseX,mouseY,vx, vy);	
    }
}
