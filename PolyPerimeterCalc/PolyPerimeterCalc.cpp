// PolyPerimeterCalc.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

int main()
{
    std::cout << "Hello World!\n"; 

    Poly makeOne = Poly(8192);

    std::cout<<"Poly Angle Count: " << makeOne.GetAnglePointCount()<< std::endl;
    std::cout<<"Poly Corner Angle: "<<makeOne.GetCornerAngle()<< std::endl;
    std::cout<<"------------------------"<< std::endl;
    printf("Poly Perimeter Value: %.16f \n", makeOne.GetPolyPerimeter());
    return 0;
}
