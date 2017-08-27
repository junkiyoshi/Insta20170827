#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);
	ofBackground(0);
	ofSetWindowTitle("Insta");

	ofSetColor(255);
	ofSetLineWidth(3);
	ofNoFill();

	this->noise_source = ofRandom(10);
}

//--------------------------------------------------------------
void ofApp::update(){

	if (ofNoise(this->noise_source) > 0.4) {
		Hexagon* hex = new Hexagon(ofVec3f(0, 0, 0), 10, ofGetFrameNum() % 255, ofGetFrameNum() % 60);
		this->hexes.push_back(hex);
	}

	for (Hexagon* hex : this->hexes) {
		hex->update();
	}

	this->noise_source += 0.05;
}

//--------------------------------------------------------------
void ofApp::draw(){

	this->cam.begin();
	
	for (Hexagon* hex : this->hexes) {
		hex->draw();
	}

	this->cam.end();
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
