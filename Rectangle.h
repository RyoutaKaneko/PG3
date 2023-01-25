#pragma once
#include "IShape.h"

class Rectangle :public IShape {
public:
	void Size() {};
	void Draw();

public:
	Rectangle();
	void Size(float vert, float beside);

	float answer;
};