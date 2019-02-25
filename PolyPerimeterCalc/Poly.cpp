#include "pch.h"
#include "Poly.h"
#include <math.h>

# define M_PI   3.14159265358979323846

Poly::Poly(int count)
{
    SetAnglePointCount(count);
}


Poly::~Poly()
{
}

//다각형의 형태를 설정한다.
void Poly::SetAnglePointCount(int count)
{
    pointCount = count;
    cornerAngle = GetCalcAngle(count);
}

//현재 생성된 다각형의 각의 갯수를 얻는다.
int Poly::GetAnglePointCount()
{
    return pointCount;
}

//다각형의 중점을 기준으로하는 꼭짓점의 각도를 얻는다.
double Poly::GetCornerAngle()
{
    return cornerAngle;
}

//현재 다각형의 둘게 값을 가져온다.
//완전 함수는 아니고, 현재 다각형에 정의된 값을 참고한다.
double Poly::GetPolyPerimeter()
{
    double halfAngle = cornerAngle / 2;
    double triAngle = 90;
    double cornerA = ((triAngle - halfAngle) * M_PI)/180;
    double distAH = cos(cornerA) * pointCount;
    return distAH;
}

//
//전체 360도의 원을 기준으로 꼭짓점의 갯수를 가지고 계산한다.
double Poly::GetCalcAngle(int count)
{
    double totRadius = 360.0f;
    cornerAngle = totRadius / count;
    return cornerAngle;
}

