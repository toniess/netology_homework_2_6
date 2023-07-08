#include "equilateraltriangle.h"

EquilateralTriangle::EquilateralTriangle(int side)
	: IsoscelesTriangle(60, 60, side, side) {
	m_name = "Равносторонний треугольник";
};
bool EquilateralTriangle::isRight()
{
	return m_sideA == m_sideB && m_sideB == m_sideC &&
		m_cornerA == 60 && m_cornerB == 60 && IsoscelesTriangle::isRight();
}
