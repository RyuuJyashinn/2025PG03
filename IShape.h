#pragma once
class IShape {
public:
	virtual void Size(float width,float height) = 0;
	virtual void Draw() = 0;
};