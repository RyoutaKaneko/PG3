#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

int main()
{
    Circle* circle = new Circle;
    Rectangle* rectangle = new Rectangle;

    //半径5
    circle->Size(3);
    //縦5 横4
    rectangle->Size(5, 4);
    //結果を表示
    circle->Draw();
    rectangle->Draw();


    return 0;
}