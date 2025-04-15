#include<stdio.h>
#include<Windows.h>
int main() {
	SetConsoleOutputCP(65001);
	char str[] = "夜露死苦";
	printf("%s",str);
	return 0;
}