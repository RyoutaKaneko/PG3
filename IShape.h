#pragma once
#include <stdio.h>

class IShape {
	virtual void Size() = 0;
	virtual void Draw() = 0;
};