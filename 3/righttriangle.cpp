#include "righttriangle.h"

RightTriangle::RightTriangle(int cornerA, int cornerB,
	int sideA, int sideB, int sideC)
	: Triangle(cornerA, cornerB, 90,
		sideA, sideB, sideC) {
	m_name = "Прямоугольный треугольник";
};

bool RightTriangle::isRight()
{
	return m_cornerC == 90 && Triangle::isRight();
}