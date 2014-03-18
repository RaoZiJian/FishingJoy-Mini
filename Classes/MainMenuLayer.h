//
//  MainMenuLayer.h
//  FishJoyMini
//
//  Created by Ken on 14-3-6.
//
//
#include "MainMenuScene.h"
#include "FishActor.h"
#include "FishingScene.h"

#ifndef FishJoyMini_MainMenuLayer_h
#define FishJoyMini_MainMenuLayer_h
USING_NS_CC;

class MainMenuLayer : public cocos2d::Layer
{
public:
	
	/** Init the layer */
	bool init();
	CREATE_FUNC(MainMenuLayer);
	
protected:
	
	/** Init the fishes */
	void fishActorsInital();
	
	/** The vector of the fishes */
	Vector<FishActor*> fishActors;
	
	/** Create Bubble */
	ParticleSystemQuad* createPaopao(Point position);
	
	/** Callback func when touch the startgame button */
	void startGameEvent(Ref* sender);
	
	/** Callback func when touch the select scne button */
	void sceneChoose(Ref* sender);
	
	/** Update */
	virtual void update(float delta);
	
	/** Update the movement of fishes*/
	void updateFishMovement();
};


#endif
