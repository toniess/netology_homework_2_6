#include "rhomb.h"

Rhomb::Rhomb(int cornerAC, int cornerBD, int side)
	: Parallelogram(cornerAC, cornerBD, side, side) {
	m_name = "Ромб";
};
bool Rhomb::isRight()
{
	return m_sideA == m_sideB
		&& m_cornerA == 90
		&& m_cornerB == 90
		&& m_cornerC == 90
		&& Parallelogram::isRight();
}