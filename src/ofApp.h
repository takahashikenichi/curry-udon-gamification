#pragma once

#include "ofMain.h"
#include "HitAnimation.h"

class ofApp : public ofBaseApp{
    
    static const int MAX_ANIMATION = 90;
    
	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
        HitAnimation hits[MAX_ANIMATION];
        int animationIndex;
        void hit(int score, float x, float y);
};
