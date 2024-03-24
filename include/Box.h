#ifndef BOX_H
#define BOX_H
#include <iostream>
class Box {
  public:
	// constructors

	Box(double width, double height, double length) { // The First Constructor
		std::cout << "Box constructor called." << std::endl;
		m_length = length;
		m_width = width;
		m_hieght = height;
	}

	/*  Box() {} // The first default constructor */
	Box() = default; // The second default constructor

	Box(double width = 1.0, double height = 1.0,
		double length =
			1.0); // Default Arguments for Constructor Parameters Version 1
	int MyPublicInt{};
	double volume();

  private:
	double m_width;
	double m_hieght;
	double m_length;
};
#endif