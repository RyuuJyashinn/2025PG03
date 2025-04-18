#include<stdio.h>
#include<Windows.h>

template<typename Type>
Type typeCompare(Type a, Type b) {
	if (a >= b) {
		return a;
	} else if (a < b) {
		return b;
	}
}

template<>
char typeCompare<char>(char a, char b) {
	printf("数字以外は代入できません");
	return 'z';
}


int main() {
	int a = 12;
	int b = 15;
	printf("%d %d max is:%d\n", a, b, typeCompare<int>(a, b));
	float c = 12.0f;
	float d = 15.0f;
	printf("%f %f max is:%f\n", c, d, typeCompare<float>(c, d));
	double e = 12.00f;
	double f = 15.00f;
	printf("%f %f max is:%f\n", e, f, typeCompare<double>(e, f));
	char g = a;
	char h = b;
	char str = typeCompare<char>(g, h);
	if (str != 'z') {
		printf("%c\n", str);
	}
	return 0;
}