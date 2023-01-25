#pragma once
#include "IShape.h"

class Rectangle :public IShape {
public:
	void Size()override {};
	void Draw()override;

public:
	Rectangle();
	void Size(float vert, float beside);

	float answer;
};