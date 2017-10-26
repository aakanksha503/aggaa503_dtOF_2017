#include "Vehicle.h"


void Vehicle::update() {
	
    vel += acc;
    vel.limit(maxSpeed);	// limit our speed
	
    pos += vel;

	acc *= 0;
    x++;
    y++;
   
    
}

void Vehicle::applyForce(ofVec3f force) {
	force.limit(maxForce);
    acc += force;
}

void Vehicle::draw() {
    
    ofPushMatrix();
    ofTranslate(pos);
    float rot = atan2( vel.y, vel.x );
    ofRotate(ofRadToDeg(rot));
    
    ofSetColor(ofRandom(205), ofRandom(100), ofRandom(250), ofRandom(255));
    for(int i = 0; i<ofRandom(100, 200); i++){
        ofDrawCircle(10+i, 20+i, ofRandom(0,2));}
    for(int i = 0; i<ofRandom(0,200); i++){
        ofDrawCircle(20+i, 10+i, ofRandom(0,1));}
    for(int i = 0; i<100; i++){
        ofDrawCircle(10+3i, 20+3i, ofRandom(0,2));}

    ofPopMatrix();
}


void Vehicle::seek(ofVec3f target) {
	
	ofVec3f desired = target - pos;
	
	float distance = desired.length();
	desired.normalize();
	
	float speed = ofMap(distance, 0, 200, 0,maxSpeed, true);
	desired *= speed;
	
	ofVec2f steer = desired - vel;
	
	steer.limit(maxForce);
	applyForce(steer);
}



