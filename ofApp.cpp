#include "ofApp.h"
#include <iostream>

using namespace std;

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetWindowTitle("Ball Drawing program");
	ofSetWindowShape(1024, 768);
	ofSetFrameRate(60);
	ofBackground(ofColor::white);
	ofSetColor(ofColor::black);
	ofSetLineWidth(1.0);
	ofNoFill();


	mySerial.listDevices();
	vector <ofSerialDeviceInfo> deviceList = mySerial.getDeviceList();

	mySerial.setup("COM3", 9600);
}

//--------------------------------------------------------------
void ofApp::update() {
	
}

//--------------------------------------------------------------


void ofApp::draw() {
	int myByte = mySerial.readByte();
	int CircleSize = 2 * (255 - myByte);
	cout << myByte << endl;
	ofSetColor(0, 255, 0);
	ofCircle(512, 384, CircleSize);
	mySerial.flush();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
	// bSendSerialMessage = true;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}

