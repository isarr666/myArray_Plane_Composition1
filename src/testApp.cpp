#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    ofBackground(255, 255, 255);
    ofSetCircleResolution(100);
    ofEnableSmoothing();
    ofSeedRandom(0);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofSeedRandom(0);
    ofEnableAlphaBlending();
        
    
    for(int i=0; i<53; i++){
        for(int j=0; j<39; j++){
            pos.x=i*40+ofRandom(0,20);
            pos.y=j*40+ofRandom(0,20);
            mouse.x=mouseX;
            mouse.y=mouseY;
            
            int distance= (pos - mouse).length()/20+ofRandom(0,10);
            ofClamp(distance, 0, 80);

            ofSetLineWidth(0.3+distance/30);
            ofSetColor(10+distance*2, 40+distance*2, 60+distance*3, 100-distance*2+ofNoise(ofGetElapsedTimef())*100);

            
            ofPoint difference= mouse-pos;
            float angle = atan2(difference.y, difference.x)+ofRandom(pi/18);
            ofLine(pos.x,pos.y, pos.x + distance * cos(angle+pi/10), pos.y + distance * sin(angle+pi/10));
            ofCircle(pos.x + distance * cos(angle+pi/10), pos.y + distance * sin(angle+pi/10), distance/10+ofRandom(distance/5)*ofNoise(ofGetElapsedTimef())*2);
            ofPopMatrix();
        }
    }

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
