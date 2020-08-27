#ifndef FractalRoot_h
#define FractalRoot_h

#include "ofMain.h"
#include "Branch.h"

class FractalRoot {
public:
    FractalRoot();
    void setup(float startAngle, int radius, int _numsides, float _strutFactor);
    void drawShape();
    
    vector <ofVec2f> pointArr;
    Branch rootBranch;
    float centX, centY;
    float strutFactor;
};

 

#endif /* FractalRoot_h */

