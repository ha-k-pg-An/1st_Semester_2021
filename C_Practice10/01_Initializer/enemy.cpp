#include "enemy.h"

//���󥹥ȥ饯��
Enemy::Enemy()
{
	printf("���󥹥ȥ饯��\n");

	Name[0] = '\0';

	Hp = 8;
	Mp = 1;
	Atk = 2;
	Def = 1;
}

//�ǥ��ȥ饯��
Enemy::~Enemy()
{
	printf("�ǥ��ȥ饯��\n");
}

void Enemy::InitSratus(const char* enemyName)
{
	sprintf_s(Name, 32, "%s", enemyName);

	Hp = 8;
//  Mp = 0;
	Atk = 2;
	Def = 1;
}

void Enemy::ShowStatus()
{
	printf("---Enemy Status---\n");

	printf("name = %s\n",Name);
	printf("Hp = %d\n",Hp);
	printf("Mp = %d\n",Mp);
	printf("Atk = %d\n", Atk);
	printf("Def = %d\n", Def);

}