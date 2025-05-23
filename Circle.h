#pragma once
#include"IShape.h"
class Circle : public IShape {
public:
	void Size(float width, float height) override;
	void Draw() override;
private:
	float result;
};