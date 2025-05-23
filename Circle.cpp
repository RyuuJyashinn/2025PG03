#include"Circle.h"
#include<stdio.h>
void Circle::Size(float width, float height) {
	result = static_cast<float> (3.14f * width *height / 2);
}

void Circle::Draw() {
	printf( "É“§Œ√Ê∑e§œ%.2f\n",result);
}