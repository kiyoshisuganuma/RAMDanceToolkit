#include "testApp.h"


ramNodeFinder nf1;
ramNodeFinder nf2;


#pragma mark - oF methods
//--------------------------------------------------------------
void testApp::setup()
{
	ofSetFrameRate(60);
	ofSetVerticalSync(true);
	ofBackground(ramColor::WHITE);

	/// ram setup
	// ------------------
	ramInitialize(10000);

	
	/// nodeFinder setup
	nf1.setJointID(ramActor::JOINT_RIGHT_HAND);
	nf2.setJointID(ramActor::JOINT_LEFT_HAND);
}

//--------------------------------------------------------------
void testApp::update()
{
	
}

//--------------------------------------------------------------
void testApp::draw()
{
	// find rightHand node from all of the actors
	vector<ramNode>rightHands = nf1.findAll();
	
	// find leftHand node from all of the actors
	vector<ramNode>leftHands = nf2.findAll();
	
	
	
	ramBeginCamera();
	
	// draw all rightHands
	for(int i=0; i<rightHands.size(); i++)
	{
		ofSetColor(ramColor::YELLOW_NORMAL);
		ramNode &node = rightHands.at(i);
		ofSphere(node, 10);
	}
	
	
	// draw all leftHands
	for(int i=0; i<leftHands.size(); i++)
	{
		ofSetColor(ramColor::RED_LIGHT);
		ramNode &node = leftHands.at(i);
		ofSphere(node, 10);
	}
	
	ramEndCamera();
}



#pragma mark - ram methods
//--------------------------------------------------------------
void testApp::drawActor(const ramActor &actor)
{
	ofSetColor(ramColor::GRAY);
	ramDrawBasicActor(actor);
}

//--------------------------------------------------------------
void testApp::drawRigid(const ramRigidBody &rigid)
{

}


#pragma mark - ram Events
//--------------------------------------------------------------
void testApp::onActorSetup(const ramActor &actor)
{
	
}

//--------------------------------------------------------------
void testApp::onActorExit(const ramActor &actor)
{
	
}

//--------------------------------------------------------------
void testApp::onRigidSetup(const ramRigidBody &rigid)
{
	
}

//--------------------------------------------------------------
void testApp::onRigidExit(const ramRigidBody &rigid)
{
	
}


#pragma mark - of Events
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

