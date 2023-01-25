#include "Circle.h"

Circle::Circle() {
	answer = 0.0f;
}
//”¼Œa *  * 3.14
void Circle::Size(float r) {
	answer = r * r * 3.14;
}

void Circle::Draw() {
	printf("‰~ %f\n", answer);
}