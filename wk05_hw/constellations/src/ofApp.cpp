/* Have an explosion of particles by clicking on the screen. */
#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    
    ofSetVerticalSync(true);
    ofSetFrameRate(ofRandom(50,100));
    
    for (int i = 0; i < 1400; i++){
        particle myParticle;
        float width = ofRandom(5,10);
        float height = ofRandom(4,20);
        float distance = ofRandom(35);
        float angle = ofRandom(ofDegToRad(360.0));
        float vx = cos(angle) * distance;
        float vy = cos(angle) * distance;
//        float vx = ofRandom(-10,4);
//        float vy = ofRandom(-4,5);
        myParticle.setInitialCondition(300,300,vx, vy);
        // more interesting with diversity :)
        // uncomment this:
        //myParticle.damping = ofRandom(0.01, 0.05);
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
        particles[i].addForce(0,0.004);  // gravity
        particles[i].addDampingForce();
        particles[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0);
    
        for (int i = 0; i < particles.size(); i++){
           
            particles[i].draw();
                        }
    }


//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    for (int i = 0; i < particles.size(); i++){
        float vx = ofRandom(-4,4);
        float vy = ofRandom(-4,4);
        particles[i].setInitialCondition(mouseX,mouseY,vx, vy);	
    }
}
