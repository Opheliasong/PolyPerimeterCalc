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

//�ٰ����� ���¸� �����Ѵ�.
void Poly::SetAnglePointCount(int count)
{
    pointCount = count;
    cornerAngle = GetCalcAngle(count);
}

//���� ������ �ٰ����� ���� ������ ��´�.
int Poly::GetAnglePointCount()
{
    return pointCount;
}

//�ٰ����� ������ ���������ϴ� �������� ������ ��´�.
double Poly::GetCornerAngle()
{
    return cornerAngle;
}

//���� �ٰ����� �Ѱ� ���� �����´�.
//���� �Լ��� �ƴϰ�, ���� �ٰ����� ���ǵ� ���� �����Ѵ�.
double Poly::GetPolyPerimeter()
{
    double halfAngle = cornerAngle / 2;
    double triAngle = 90;
    double cornerA = ((triAngle - halfAngle) * M_PI)/180;
    double distAH = cos(cornerA) * pointCount;
    return distAH;
}

//
//��ü 360���� ���� �������� �������� ������ ������ ����Ѵ�.
double Poly::GetCalcAngle(int count)
{
    double totRadius = 360.0f;
    cornerAngle = totRadius / count;
    return cornerAngle;
}

