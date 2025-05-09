#include <stdio.h>
#include <windows.h>
#include <time.h>

typedef void (*PFunc)(int* x, int* y);

void DispResult(int* waitTime, int* diceResult) {
	printf("%d秒待って実行されます\n", *waitTime);

	if (*diceResult % 2 == 0)
		printf("サイコロの出目は %d（偶数）です\n", *diceResult);
	else
		printf("サイコロの出目は %d（奇数）です\n", *diceResult);
}

void setTimeout(PFunc p, int second, int diceResult) {
	Sleep(second * 1000);
	p(&second, &diceResult);
}

int main() {
	int answer;
	int dice;
	srand(static_cast<unsigned int>(time(NULL)));
	dice = rand() % 6 + 1;

	printf("サイコロの奇数・偶数を当てみよう\n偶数なら0、奇数なら1を入力してください\n");
	scanf_s("%d", &answer);	
	
	setTimeout(DispResult, 3, dice);

	if (answer == (dice % 2)) {

		printf("正解です！おめでとうございます！\n");

	} else {
		printf("不正解です。残念でした！\n");

	}
	return 0;
}