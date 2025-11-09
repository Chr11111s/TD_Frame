#ifndef _GAME_MANAGER_H_
#define _GAME_MANAGER_H_

#include "manager.h"

class GameManager : public Manager<GameManager>
{
	friend class Manager<GameManager>; //Manager不是类，是模板。不存在名为Manager的类
public:


protected:
	GameManager();
	~GameManager();
};

#endif