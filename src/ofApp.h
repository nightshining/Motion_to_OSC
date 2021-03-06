#pragma once

#include "ofMain.h"
#include "ofxOpenCv.h"
#include "ofxOsc.h"

class ofApp : public ofBaseApp{

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
        void updateMotion(unsigned char *pixels);
    
    
    ofVideoGrabber  vidGrabber;
          int camWidth, camHeight;
    
    ofxCvColorImage			cameraColorImage;
    ofxCvGrayscaleImage		cameraGrayImage;
    ofxCvGrayscaleImage		cameraGrayPrevImage;
    ofxCvGrayscaleImage		cameraGrayDiffImage;
    ofxCvFloatImage			cameraDiffFloatImage;
    ofxCvFloatImage			cameraMotionFloatImage;
    float cameraMotionFadeAmount;
    int trailBlur;
    
    vector <int> zone;
    
    int historySize;
    
    vector < vector <int> > zoneHistory;
    
    vector <int> smoothedZone;
    
    int numZones;
    
    int graphYScale;
    
    int motionThresh;
    
    vector < vector <float> > motionGraphs;
    
    bool trailsOn;
    
    ofxOscSender oscSend;
		
    //Mike Add
    bool tracksOn, tracksOff;
    int count, countInc;
    
    
};
