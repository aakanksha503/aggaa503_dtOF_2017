#include "particle.hpp"

Particle::Particle(){
    center = ofPoint (ofGetWidth()/2, ofGetHeight()/2);
}

void Particle::setup(){
    Parameters.add(rotateX.set("rotateX", 20.0, -1.0, 1.0));
    Parameters.add(rotateY.set("rotateY", -20.0, -1.0, 1.0));
    Parameters.add(rotateZ.set("rotateZ", 20.0, -1.0, 1.0));
   Parameters.add(sensitivity.set("sensitivity", 800, 100, 1000));
}

void Particle::update(){
    rotationX = rotationX + rotateX;
    rotationY = rotationY + rotateY;
    rotationZ = rotationZ + rotateZ;
}

void Particle::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
    
    for(int i=0; i<numParticles; i++){
        ofRotateX(rotationX);
        ofRotateY(rotationY);
        ofRotateZ(rotationZ);
        
        ofCircle(pos[i] + vel[i], size);
    }
  }

