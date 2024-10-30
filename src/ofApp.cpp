#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    x = 200;
    y = 300;
    w = 50;
    h = 50;
    state = false;
}

//--------------------------------------------------------------
void ofApp::update(){
    int mousePosX;
    mousePosX = ofGetMouseX();
    cout << mousePosX << endl;
    
    if(ofGetMouseX() > x && ofGetMouseX() < x + w && ofGetMouseY() > y && ofGetMouseY() < y + h) {
        state = true;
    } else {
        state = false;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 255), ofMap(ofGetMouseY(), 0, ofGetHeight(), 0, 255), ofMap(sin(ofGetElapsedTimeMillis() * 0.001), 0, 1, 0, 255));
    
    drawCross(ofGetMouseX(), ofGetMouseY(), 600);
    ofDrawCircle(20, ofMap(sin(ofGetElapsedTimeMillis() * 0.005), -1, 1, 0, ofGetHeight()), 5);
    ofDrawCircle(20, ofRandom(ofGetHeight()), 5);
    ofDrawCircle(20, ofMap(ofNoise(ofGetElapsedTimef()), 0, 1, 0, ofGetHeight()), 5);
    
    if(state) {
        ofSetColor(0, 255, 0);
    } else {
        ofSetColor(255, 255, 255);
    }
    
    ofDrawRectangle(x, y, w, h);
}

//--------------------------------------------------------------
void ofApp::exit(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

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

void ofApp::drawCross(int x, int y, int size) {
    // Draw rectangle from the centre
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    ofDrawRectangle(x, y, size, size/10);
    ofDrawRectangle(x, y, size/10, size);
}
