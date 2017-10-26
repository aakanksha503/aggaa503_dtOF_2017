#include "Brush1.hpp"

void Brush1::draw(ofVec3f pos)
{
	// draw this brush's pattern:
	
	ofDrawCircle(pos, ofRandom(0,2));
	ofDrawCircle(pos+10, ofRandom(1, 2));
	ofDrawCircle(pos+20, ofRandom(2,3));
	ofDrawCircle(pos+30, ofRandom(1,2));
}
