// Header Files

// GameController.h

#Ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_h

#include <map>
#include “Button.h”
#include “Action.h”

Class GameController {
public:
	void handleInput (Button input);
	void activatePreSnapLock();
private:
	std: map<Button, Action> inputMap;
};

#endif

// DefensiveMastermindSystem.h

#ifndef DEFENSIVEMASTERMINDSYSTEM_H
#defone DENFENSIVEMASTERMINDSYSTEM_H

#inlcude <vector>
#include "PlayerLock.h"
#include "OffensivePlayer.h"
#include "DefensivePlayer.h"
#include "BehaviorMode.h"

Class DefensiveMastermind {
public:
	void initiatePreSnapLock(DefensivePlayer* player);
OffensivePlayer* selectTarget(Button button);
void setBehaviorMode(BehaviorMode mode);
private: PlayerLock* activeLock;
std: : vector <OffensivePlayer*> avaliableTargets;
};

#endif

// PlayerLock.h

#ifndef “OffensicePlayer.h”
#define “BehaviorMode.h”

Class PlayerLock  {
public: 
	void applyBehavior();
	void updatePostSnap();
private:
	OffensivePlayer* lockedPlayer;
	BehaviorMode behaviorMode;
};

#endif

// DefensivePlayer.h

#ifndef DEFENSIVEPLAYER_H
#define DEFENSIVEPLAYER_H

#inlcude <string>
#include “OffensivePlayer.h”
#inlcude “BehaviorMode.h”

class DefensivePlayer {
public:
    void lockOn(OffensivePlayer* offensivePlayer, BehaviorMode behavior);

private:
    std::string position;
    std::string playerID;
    std::string controlMode;
};

#endif

// OffensivePlayer.h

#ifndef OFFENSIVEPLAYER_H
#define OFFENSIVEPLAYER_H

#include <string>

class OffensivePlayer {
public:
    std::string getCurrentRoute();

private:
    std::string position;
    std::string routeType;
};

#endif

// Behavior.h

#ifndef BEHAVIORMODE_H
#define BEHAVIORMODE_H

enum class BehaviorMode {
    TightLock,
    LooseCover,
    RunAnticipation
};

#endif


// UIIndicator.h

#ifndef UIINDICATOR_H
#define UIINDICATOR_H

#include "OffensivePlayer.h"
#include "BehaviorMode.h"

class UIIndicator {
public:
    void displayLockTarget(OffensivePlayer* target);
    void displayBehaviorMode(BehaviorMode mode);
};

#endif
