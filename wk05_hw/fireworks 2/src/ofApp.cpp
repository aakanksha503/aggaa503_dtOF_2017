/* Have an explosion of particles by clicking on the screen. */
#include "ofApp.h"
int a=255;
int b= 110;
int c= 45;
ofVec2f pos;
int i;


//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetVerticalSync(true);
    ofEnableAlphaBlending();
    ofSetBackgroundAuto(false);
    ofSetFrameRate(ofRandom(50, 200));
    float vx = 0;
    float vy = 0;
    
    
    for (int i = 0; i < 200; i++){
        particle myParticle;
        myParticle.setInitialCondition(-100,-100,vx, vy);
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
       
        particles[i].addDampingForce();
        particles[i].addForce(0, 0.1/i+0.09);
        
         // gravity
      
        particles[i].update();
    
 
        
    }
 
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
  
    for (int i = 0; i < 200; i++){
        
    particles[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    for (int i = 0; i < particles.size(); i++){
        float vx = ofRandom(-5,5);
        float vy = ofRandom(-5,5);
        particles[i].setInitialCondition(mouseX,mouseY,vx, vy);	
    }
}
