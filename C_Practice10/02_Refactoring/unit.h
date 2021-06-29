#ifndef FIGHTER_H
#define FIGHTER_H

#include "Common.h"

class Fighter
{
public:

	Fighter();
	~Fighter();

	char name[32];

	Status status;

	void InitRandomStatus();

private:
};

#endif // !FIGHTER_H

