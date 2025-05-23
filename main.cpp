#include <stdio.h>
#include<iostream>
#include"Circle.h"
#include"Rectangle.h"

int main() {
	Circle* circle = new Circle();
	Rectangle* rectangle = new Rectangle();
	float width1 = 0;
	float width2 = 0;
	float height1 = 0;
	float height2 = 0;

	printf("円の半径を入力してください\n");
	scanf_s("%f", &width1);  
	height1 = width1;

	printf("矩形の幅と高さを入力してください\n");

	scanf_s("%f %f", &width2, &height2);  


	circle->Size(width1, height1);
	rectangle->Size(width2, height2);

	circle->Draw();
	rectangle->Draw();

	delete circle;
	delete rectangle;
	return 0;
}