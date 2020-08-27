#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);
    ofSetFrameRate(100);
    ofEnableSmoothing();
    
    // set GUI
    gui.setup();
    gui.add(strutFactor.setup("strutFactor", -0.39118606, -1.0, 2.0));
    gui.add(circleResolution.setup("circle res", 5, 3, 9));
    gui.add(startAngle.setup("angle", 54, 0, 90));
    gui.add(radius.setup("radius", 380, 100, 500));
    
    bHide = false;
}

//--------------------------------------------------------------
void ofApp::update(){


}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255, 255, 255);
    pentagon.setup(startAngle, radius, circleResolution, strutFactor);
    pentagon.drawShape();
    
    if(!bHide){
        gui.draw();
    }
    
    myImage.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key)
    {
        case 'h':
        {
            bHide = !bHide;
        }
            break;
        case 's':
        {
            myImage.save(ofGetTimestampString("%Y%m%d%H%M%S")+"##.jpg");
        }
            break;
        default:
            break;
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
