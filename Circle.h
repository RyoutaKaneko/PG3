#pragma once
#include "IShape.h"

class Circle : public IShape {
public:
	void Size()override {};
	void Draw()override;

public:
	Circle();
	void Size(float r);

	float answer;
};