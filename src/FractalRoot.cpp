
#include "FractalRoot.h"

FractalRoot::FractalRoot(){
    
}

void FractalRoot::setup(float startAngle, int radius, int _numSides, float _strutFactor){
    pointArr.clear();
    
    float centX = ofGetWidth()/2;
    float centY = ofGetHeight()/2;
    int numSides = _numSides;
    float angleStep = 360.0f/numSides;
    strutFactor = _strutFactor;
     for(int i = 0; i < 360; i+=angleStep){
        float x = centX + (radius * cos(ofDegToRad(startAngle + i)));
        float y = centY + (radius * sin(ofDegToRad(startAngle + i)));
        ofVec2f pp (x, y);
        pointArr.push_back(pp);
    }
    rootBranch.setup(0, 0, pointArr, strutFactor);
}

void FractalRoot::drawShape(){
    rootBranch.drawMe();
}
