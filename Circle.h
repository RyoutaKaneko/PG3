#pragma once
#include "IShape.h"

class Circle : public IShape {
public:
	void Size() {};
	void Draw();

public:
	Circle();
	void Size(float r);

	float answer;
};