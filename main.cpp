#include <stdio.h>
#include<iostream>
using namespace std;


class Enemy {
public:
	void Update();
	void approach();
	void attatck();
	void escape();

private:
	int index = 0;
	static void (Enemy::* pFunc[])();
};

void Enemy::approach() {
	printf("敵は接近中！");
};
void Enemy::attatck() {
	printf("敵は攻撃している！");
};
void Enemy::escape() {
	printf("敵は逃げている！");
};

void (Enemy::* Enemy::pFunc[])() = {
	&Enemy::approach,
	&Enemy::attatck,
	&Enemy::escape
};


void Enemy::Update() {
	(this->*pFunc[index])();

	cout << "次の状態に移行しますか？ (0: はい、他: いいえ): ";
	int input;
	cin >> input;

	if (input == 0) {
		index = (index + 1) % 3;
	}
};

int main() {
	Enemy enemy;

	while (1)enemy.Update();

	return 0;
}