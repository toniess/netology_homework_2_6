#include "square.h"

Square::Square(int side)
	: Rectangle(side, side) {
	m_name = "�������";
};
bool Square::isRight() 
{
	return m_sideA == m_sideB
		&& Rectangle::isRight();
}