#include "SimpleAI.h"
#include "helpers.h"
#include "plugin/botplugin.h"
#include "wrappers\gamewrapper.h"

BAKKESMOD_PLUGIN(SimpleAI, "SimpleAI", "0.1", PLUGINTYPE_BOTAI)

GameWrapper* gw;
ConsoleWrapper* cons;


void SimpleAI::onLoad()
{
	gw = gameWrapper;
	cons = console;
}

void SimpleAI::onUnload()
{
}

void SimpleAI::on_tick(ControllerInput * input, CarWrapper *localCar, BallWrapper *ball)
{
	input->Steer = 1;
	input->Throttle = -.7;
	if (random(1, 1000) == 500) {
		input->Jump = 1;
	}
}
