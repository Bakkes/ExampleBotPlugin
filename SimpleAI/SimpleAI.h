#pragma once
#pragma comment( lib, "BakkesMod.lib" )
#include "plugin/botplugin.h"

class SimpleAI : public bakkesmod::plugin::BotPlugin
{
public:
	virtual void onLoad();
	virtual void onUnload();
	virtual void on_tick(ControllerInput * input, CarWrapper *localCar, BallWrapper *ball);
};

