#include "ParticleSystem.hpp"

ParticleSystem::ParticleSystem(ofVec3f _pos){
	pos.x = ofGetMouseX()*sin(ofGetElapsedTimef());
    pos.y = ofGetMouseY()*cos(ofGetElapsedTimef());
    pos = _pos;}

void ParticleSystem::update(ofVec3f force, float timeDiff){ // time
	
	for (int i=0; i<1; i++){
		Particle particle(pos);
		particles.push_back(particle);
	}
	
	// update particles
	
	for (int i=0; i<particles.size(); i++){
		particles[i].applyForce(force);
		particles[i].update(timeDiff);
    }
    while (particles.size() > 1000){
        particles.erase(particles.begin());
    }
    
    lifespan -= timeDiff;
    if (lifespan < 0) lifespan = 0;
}

void ParticleSystem::draw(){
	for (int i=0; i<particles.size(); i++){
		particles[i].draw();
	}
}
