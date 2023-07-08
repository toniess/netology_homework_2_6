#include "triangle.h"

Triangle::Triangle(int cornerA, int cornerB, int cornerC,
	int sideA, int sideB, int sideC)
	: Figure(3)
{
	m_cornerA = cornerA;
	m_cornerB = cornerB;
	m_cornerC = cornerC;

	m_sideA = sideA;
	m_sideB = sideB;
	m_sideC = sideC;

	m_name = "����������� �����������";
};

int Triangle::getCornerA() { return m_cornerA; }
int Triangle::getCornerB() { return m_cornerB; }
int Triangle::getCornerC() { return m_cornerC; }

int Triangle::getSideA() { return m_sideA; }
int Triangle::getSideB() { return m_sideB; }
int Triangle::getSideC() { return m_sideC; }

void Triangle::printCorners()
{
	std::cout << "�������: a=" << getSideA() << " b=" << getSideB() << " c=" << getSideC() << "\n";
	std::cout << "����: A=" << getCornerA() << " B=" << getCornerB() << " C=" << getCornerC() << "\n";
}

bool Triangle::isRight()
{
	return m_cornerA + m_cornerB + m_cornerC == 180;
}