#include "testApp.h"


/*!
 Scenes
 */
#include "nSecPastMe.h"
nSecPastMe pastme;


#pragma mark - oF methods
//--------------------------------------------------------------
void testApp::setup()
{
	ofSetFrameRate(60);
	ofSetVerticalSync(true);
	ofBackground(ramColor::WHITE);
	
	
	/// ram setup
	// ------------------
	ramInit();
	oscReceiver.setup(10000);
	
	
	/// scenes setup
	// ------------------
	vector<ramBaseScene*> scenes;
	scenes.push_back( pastme.getPtr() );
	sceneManager.setup(scenes);

	// /*!
	//  GUI: Actor scale / move
	//  */
	// gui.addSlider("Actor Scale", 1.0, 0.1, 3);
	// gui.addSlider("Actor Position:x", 0, -600, 600);
	// gui.addSlider("Actor Position:y", 0, -600, 600);
	// 
}

//--------------------------------------------------------------
void testApp::update()
{
	/// Entities update
	// ------------------
	oscReceiver.update();
	
	
	/// Scenes update
	// ------------------
	sceneManager.update();
}

//--------------------------------------------------------------
void testApp::draw()
{
	/// Scenes draw
	// ------------------
	sceneManager.draw();
}



#pragma mark - ram methods
//--------------------------------------------------------------
void testApp::drawActor(ramActor &actor)
{
	
	ramBasicActor(actor);
	
//	if ( gui.getValueB("Draw Actor") )
//	{
//		float scale = gui.getValueF("Actor Scale");
//		float posX = gui.getValueF("Actor Position:x");
//		float posY = gui.getValueF("Actor Position:y");
//		
//		ofPushMatrix();
//		ofTranslate(posX, 0, posY);
//		glScalef(scale, scale, scale);
//		ramBasicActor(actor, shadowMat.getPtr());
//		ofPopMatrix();
//	}
//	
//	for (int i=0; i<scenes.size(); i++) scenes.at(i)->drawActor(actor);
}

//--------------------------------------------------------------
void testApp::drawRigid(ramRigidBody &rigid)
{
	
}




#pragma mark - oF Events
//--------------------------------------------------------------
void testApp::keyPressed(int key)
{
	
}

//--------------------------------------------------------------
void testApp::keyReleased(int key)
{
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y)
{
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button)
{
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button)
{
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button)
{
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h)
{
    
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg)
{
    
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo)
{
	
}

