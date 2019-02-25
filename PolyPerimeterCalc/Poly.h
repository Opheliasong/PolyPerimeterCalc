#pragma once


//한변의 길이는 0.5cm로 고정
class Poly
{
public:
    Poly(int count);
    ~Poly();
    void SetAnglePointCount(int count);
    int GetAnglePointCount();
    double GetCornerAngle();

    //TODO: need refactory
    double GetPolyPerimeter();

protected:
    double cornerAngle = 0;
    int pointCount = 0;

private:
    double GetCalcAngle(int count);
};

