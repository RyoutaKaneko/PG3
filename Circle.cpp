#include "Circle.h"

Circle::Circle() {
	answer = 0.0f;
}
//���a *  * 3.14
void Circle::Size(float r) {
	answer = r * r * 3.14;
}

void Circle::Draw() {
	printf("�~ %f\n", answer);
}