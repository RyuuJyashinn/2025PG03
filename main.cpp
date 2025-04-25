#include<stdio.h>
#include <string.h>
int regularSalary(int time) {
	int result = time * 1072;
	return result;
}

int totalSalary(int time, int lastSalary, int total) {
	if (time == 1) {
		return total + lastSalary;
	} else {
		int currentSalary = 2 * lastSalary - 50;
		return totalSalary(time - 1, currentSalary, total + lastSalary);
	}
}


int main() {
	int tempTime = -1;
	printf("勤務時間を入力してください:");
	scanf_s("%d", &tempTime);
	int regularMoney = regularSalary(tempTime);
	int changingMoney= totalSalary(tempTime,100,0);
	char result[20];
	if (changingMoney >= regularMoney) {
		strcpy_s(result, "再帰的な賃金体系");
	} else {
		strcpy_s(result, "一般的な賃金体系");

	}
	printf("一般的な賃金体系は:%d円\n再帰的な賃金体系は:%d円\nより多い方は:%s", regularMoney, changingMoney,result);
	return 0;
}