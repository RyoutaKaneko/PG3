#include "Rectangle.h"

Rectangle::Rectangle() {
	answer = 0.0f;
}
//c * ‰¡
void Rectangle::Size(float vert, float beside) {
	answer = vert * beside;
}

void Rectangle::Draw() {
	printf("‹éŒ` %f\n", answer);
}