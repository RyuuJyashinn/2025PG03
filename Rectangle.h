#pragma once
#include"IShape.h"
class Rectangle : public IShape {
public:
	void Size(float width, float height) override;
	void Draw() override;
private:
	float result;
};