#include "ofMain.h"
#include "particle.hpp"
    
    class ofApp : public ofSimpleApp{
        
    public:
        
        void setup();
        void update();
        void draw();
        void mousePressed(int x, int y, int button);
        
        // let's make a vector of them
        vector <particle> particles;
        ofImage night; 
    };

		

