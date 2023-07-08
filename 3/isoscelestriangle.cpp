#include "isoscelestriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int cornerA, int cornerBC,
	int sideA, int sideBC)
	: Triangle(cornerA, cornerBC, cornerBC,
		sideA, sideBC, sideBC) {
	m_name = "�������������� �����������";
};
bool IsoscelesTriangle::isRight()
{
	return m_cornerB == m_cornerC &&
		m_sideB == m_sideC && Triangle::isRight();
}