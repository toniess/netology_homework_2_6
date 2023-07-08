#include "figure.h"

Figure::Figure() : m_corner(0) {};
Figure::Figure(int corners) : m_corner(corners) {}


int Figure::getCornerCount()
{
	return m_corner;
}


bool Figure::isRight()
{
	return true;
}

void Figure::printCorners()
{
	return;
}

void Figure::print_info()
{
	std::cout << m_name << ":\n";
	std::cout << (isRight() ? "Правильная" : "Неправильная") << "\n";
	std::cout << "Количество сторон: " << m_corner << "\n";
	if (m_corner > 0)
	{
		printCorners();
	}
	std::cout << "\n";
}

