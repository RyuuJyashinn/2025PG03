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
	printf("error");
}


int main() {
	int a = 12;
	int b = 15;
	printf("%d %d max:%d", a, b, typeCompare<int>(a, b));
	float c = 12.0f;
	float d = 15.0f;
	printf("%f %f max:%d", c, d, typeCompare<float>(c, d));
	double e = 12.00f;
	double f = 15.00f;
	printf("%d %d max:%d", e, f, typeCompare<double>(e, f));

	return 0;
}