#include"Rectangle.h"
#include<stdio.h>
void Rectangle::Size(float width, float height) {
	result = static_cast<float> (width* height);
}

void Rectangle::Draw() {
	printf("¾ØÐÎ¤ÎÃæ·e¤Ï%.2f\n", result);
}