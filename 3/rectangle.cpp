#include "rectangle.h"

Rectangle::Rectangle(int sideAC, int sideBD)
	: Parallelogram(90, 90, sideAC, sideBD) {
	m_name = "Прямоугольник";
};
bool Rectangle::isRight()
{
	return m_sideA == m_sideC
		&& m_sideB == m_sideD
		&& m_cornerA == 90
		&& m_cornerB == 90
		&& m_cornerC == 90
		&& Quadrilateral::isRight();
}