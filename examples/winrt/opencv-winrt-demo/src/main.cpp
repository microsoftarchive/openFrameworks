#include "ofMain.h"
#include "ofApp.h"

//========================================================================
#if defined(TARGET_WINRT)
void ofmain(){
#else
int main(){
#endif

	ofSetupOpenGL(1024,768, OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp( new ofApp());

}
