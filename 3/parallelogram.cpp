#include "parallelogram.h"

Parallelogram::Parallelogram(int cornerAC, int cornerBD, int sideAC, int sideBD)
	: Quadrilateral(cornerAC, cornerBD, cornerAC, cornerBD, sideAC, sideBD, sideAC, sideBD)
{
	m_name = "Параллелограм";
};
bool Parallelogram::isRight()
{
	return m_sideA == m_sideC
		&& m_sideB == m_sideD
		&& m_cornerA == m_cornerC
		&& m_cornerB == m_cornerD
		&& Quadrilateral::isRight();
}