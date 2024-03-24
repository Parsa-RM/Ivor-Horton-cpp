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

	// Default Arguments for Constructor Parameters Version 1

	/* Box(double width = 1.0, double height = 1.0,
		double length =
			1.0);
	*/

	// Default Arguments for Constructor Parameters Version 2
	/*
	Box(double width, double heigth, double length)
		: m_width{1.0}, m_hieght{1.0}, m_length{1.0} {}
	*/
	explicit Box(double side) : Box(side, side, side) {
		std::cout << "This is a the old Cube using delegating constructors"
				  << std::endl;
	}
	// copy constructor
	/*
	You should normally never write this copy constructor of Box yourself. The
	compiler already generates one just like it by default, so all that could
	come from defining one yourself are bugs (forgetting to copy one of the
	member variables) or maintenance issues (forgetting to update the copy
	constructor if member variables are added). Like we said, this was just to
	show you how you can define one. We’ll return to the when you should in
	later chapters. (Spoiler alert: you should do so as little as possible; just
	let the compiler do all
	*/
	Box(const Box &boxToBeCopied)
		: Box{boxToBeCopied.m_width, boxToBeCopied.m_hieght,
			  boxToBeCopied.m_length} {};
	int MyPublicInt{};
	double volume();

  private:
	double m_width;
	double m_hieght;
	double m_length;
};

class Cube {
  public:
	Cube(double side) : m_side{side} {}; // Constructor
	double volume() {
		return m_side * m_side * m_side;
	}; // Calculate volume of a cube
	bool hasLargerVolumeThan(Cube cube) {
		return volume() > cube.volume();
	}; // Compare volume of a cube with another
  private:
	double m_side;
};
#endif
