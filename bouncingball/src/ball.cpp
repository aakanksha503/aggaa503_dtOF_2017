#include "ball.h"

Ball::Ball(){
    ofBackground(200,98,0);
    radius = 50;
    color = ofColor (100, 90, 80);
    x= ofRandom(0, ofGetWidth() - radius);
    y= ofRandom(0, ofGetHeight() - radius);
    
    accX = 3;
    accY = 3;
    
    dirX = 2;
    dirY = 2;

}

void Ball::update(){
    
    
    if(x <= radius|| x >= ofGetWidth() - radius){
        dirX = -dirX;
        accX = -accX;
    }
    
    if(y <= radius || y>= ofGetHeight() - radius){
        dirY = -dirY;
        accY = -accY;
    }

    x+=dirX;
    dirX+=accX;
    y+=dirY;
    dirY+=accY;
    
    cout << "the positon is: " << x << ", "<< y<< endl;
    cout << "the speed is: " << dirX << ", "<< dirY<< endl;
    cout << "the acceleration is:" << accX << "," << accY << endl;
    
    
}

void Ball::draw(){
    ofSetColor(color);
    ofDrawCircle(x,y,radius);
    
}
