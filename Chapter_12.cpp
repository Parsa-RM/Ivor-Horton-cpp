#include "include/Box.h"
#include <iostream>

/* Chapter 8: Defining Your Own Data Type */
// help:

/*Section is denoted by:
- <section name>
*/

/*
Subsection is denoted by:
-- <subsection name>
*/

/*
Descriptions are commented using multi-line comments.
Code comments are denoted by \\
*/

int main() {
	/* - Classes and Object Oriented Programming */
	/* -- Encapsulation */
	/*
	This means that an object's info can only be accessible from the object
	itself or manipulated by methodes or functions of the object itself
	*/
	/* --- Data Hiding */
	/*
	This means that an object's data can only be accessible from the object
	itself or manipulated by methodes or functions of the object itself
	*/
	/* -- Inheritance */
	/*
	Inheritance is the ability to define one type in terms of another.
	Figure 12-4 shows this concept perfectly that how "LoanAccount" and
	"CheckingAccount" classes or objects have inherited features from their
	parent class or object "BankAccount"
	*/
	/* -- Polymorphism */
	/*
	Useful Youtube links: https://www.youtube.com/watch?v=tIWm3I_Zu7I
	So basically polymorphism beauty would become visible when it is combined
	with pointers. As a reminder previously we could only declare pointers to
	point to known types. For example,
	*/
	int *int_ptr; // this could only point to data types of int not double or
				  // char only int and therefore only functions which accept
				  // this type could be called with this pointer. However, when
				  // this becomes different when working with classes and the
				  // use of inheritance becomes clear and crucial.

	/*
	when a pointer to a class is created we can use that pointer to point to its
	child class objects without the need to change the pointer type. The
	upcoming text has been taken from the book:

	Suppose you have the LoanAccount and CheckingAccount types defined as
	before, based on the BankAccount type. Suppose further that you have defined
	objects of these types, debt and cash, respectively, as illustrated in
	Figure 12-5. Because both types are based on the BankAccount type, a
	variable of type pointer to BankAccount, such as pAcc in Figure 12-5, can
	store the address of either of these objects. Figure 12-5 can be useful page
	426 of the book
	*/
	/* - Terminology */
	/* Nothing useful just a summary */
	/* - Defining a Class */
	/*
	class ClassName {
		// code that defines the memebr of the class...
	};
	You use the public keyword followed by a colon to make all subsequent
	members accessible from outside the class. Members specified after the
	private keyword are not accessible from outside the class. public and
	private are access specifiers for the class members. There’s another access
	specifier, protected, that you’ll meet later.

	class ClassName {
	  public:
		// Code that specifies members that are accessible from outside the
		// class...
	  private:
		// Code that specifies members that are not accessible from outside the
		// class...
	}

	Note: Constructors and destructors (both introduced later in this chapter)
	always come first, before any of the other member functions.
	*/
	/* -- Creating Objects of a Class */
	/*The box class has been declared in the Box.h and Box.cpp*/
	/* You can create a variable of type Box like this: */
	Box myBox; // an object of the class Box

	/*if member variables are defined public then you can easily assign a new
	 * value to them outside the class definition. Like this:*/
	std::cout << "Before assigning a new value to myBox.MyPublicInt the value "
				 "of myBox.MyPublicInt is : "
			  << myBox.MyPublicInt << std::endl;
	myBox.MyPublicInt = 12;
	std::cout << "After assigning a new value to myBox.MyPublicInt the value "
				 "of myBox.MyPublicInt is : "
			  << myBox.MyPublicInt << std::endl;

	/* - Constructors */
	/* The Constructor is a special function which creates the object there
	 * reason it is called special is that its return value should be the type
	 * of the object and normally in the function defifnitions the function's
	 * return value is written in the functions definition But this is not true
	 * for the constructors as we will see there is no return type in their
	 * definition, syntactically!*/

	/* Constructors always has the same name as the class. Note that it is an
	 * error to specify a return type for a constructor. Note that Objects of a
	 * class type can only and only be created using a constructor. */
	/* -- Default Constructors */
	/* if you don’t define a constructor for a class, the compiler supplies a
	 * default default constructor. For example we created the object myBox
	 * without writing a constructor. So it was the compiler's job to create a
	 * default one for us.
	 * Note:If you do not define any constructor for a class—neither a default
	 * constructor nor any other constructor— then the compiler generates one
	 * for you: a default constructor. That’s why it’s called a default default
	 * constructor; it is a default constructor that is generated by default. A
	 * default default constructor has no parameters and its sole purpose is to
	 * allow an object to be created. It does nothing else, so all member
	 * variables will have their default values. */
	/* -- Defining a Class Constructor */
	// The first Constructor
	/*Note that once you define a constructor, the compiler won’t supply a
	 * default constructor anymore, at least not by default. That means this
	 * statement will no longer compile: */
	// Line 94 of this code will no longer work
	/* if you want the default constructor to still work you have to read the
	 * next subsection!*/
	/* -- Using the default Keyword */
	// The first default constructor
	// The second default constructor

	/* -- Defining Functions Outside the Class */
	/*
	This subsection only shows how to implement class definition in a header
	file and implement them in a seperate .cpp file, which we are familiar with.
	Note that if your function definition is like this in the header file:
	double volume();
	then you have to implement it like this(pay attention that the return type):

	double Box::volume(){
	------
		^
		|
		|
	}*/
	/* -- Default Arguments for Constructor Parameters */
	/*
	Look at the examples in th header file with their corresponding label here
	*/

	// Default Arguments for Constructor Parameters Version 1

	/*
	Note that your implementation should not contain any default value
	anymore if their defaults already exists it in the header file(definition of
	the function)
	*/

	/* -- Using a Member Initializer List */

	/*
	The first useful thing was that the initializer list gets called before the
	code block below it so, it is more effient. Another reason is that When you
	initialize a member variable using an assignment statement in the body of
	the constructor, the member variable is first default initialized (using a
	constructor call if the variable is an instance of a class), after which the
	assignment is carried out as a separate operation.
	Box(.....) : <<initializer List>>
	{
		...
		..
		.
	}

	an Example can be found the upcoming line
	*/

	// Default Arguments for Constructor Parameters Version 2

	/* -- Using the explicit Keyword */

	/*
	A problem with class constructors with a single parameter is that the
	compiler can use such a constructor as an implicit conversion from the type
	of the parameter to the class type. This can produce undesirable results in
	some circumstances.
	For example take a look at the constructor of the Cube in the header file
	*/
	Cube box1{7.0};
	Cube box2{3.0};
	if (box1.hasLargerVolumeThan(box2))
		std::cout << "box1 is larger than box2." << std::endl;
	else
		std::cout << "box2 is larger than or equal to box1." << std::endl;

	std::cout << "volume of box1 is: " << box1.volume() << std::endl;
	if (box1.hasLargerVolumeThan(50.0))
		std::cout << "Volume of box1 is greater than 50." << std::endl;
	else
		std::cout << "Volume of box1 is less than or equal to 50." << std::endl;
	/*
	when the compiler looks at line 206 it sys that:
		hasLargerVolumeThan() has been called
		hasLargerVolumeThan() needs a cube object as input
		but I see an orinary double number
		Ok then, I convert it to a cube object by myself with 50 set as its side
	variable shortly it will be seen like this:
		 box1.hasLargerVolumeThan(Cube{50.0})
	So the volume of the given Cube object becomes 50 * 50 * 50 which is bigger
	than 7 * 7 * 7 and the else block gets executed
	*/
	/*
	we can solve this issue by writing the explicit keyword before the Cube
	constructor like this:
	explicit Cube(double side) : m_side{side} {};
	--------
	   ^
	   |
	so the compiler can't implicitly call the constructor of Cube
	*/
	/*
	Tip: By default, you should therefore declare all single-argument
	constructors as explicit. (And, take care: this includes multi-parameter
	constructors that are invokable with just a single argument due to default
	argument values!)
	*/
	/* -- Delegating Constructors */
	/*
	A class can have several constructors that provide different ways of
	creating an object. The code for one constructor can call another of the
	same class in the initialization list. This can avoid repeating the same
	code in several constructors. Here’s a simple illustration of this using the
	Box class to create cube boxes:
	*/
	// Delegating Constructors

	/* -- The Copy Constructor */
	/*
	This constructor only is used for copying on objects data into a new object.
	Same as the default constructor we have a default copy constructor which
	will only copy all the values of the member variables of one object to the
	new constructed object. The point is that sometimes we don't want the
	default copy constructor (maybe the object contains pointers) in this case
	we have to implement our own copy constructor.
	*/
	/* --- Implementing the Copy Constructor */
	/*
	This simple implementation won't work:

	Box::Box(Box box) // Wrong!!
	: m_length{box.m_length}, m_width{box.m_width}, m_height{box.m_height}

	Because it causes a chain of recursive calls which will finally result in
	loss of memmory! take a look at the text of the book itself:

	Each member variable of the new object is initialized with the value of the
	object that is the argument. No code is needed in the body of the copy
	constructor in this instance. This looks okay, but consider what happens
	when the constructor is called. The argument is passed by value, but because
	the argument is a Box object, the compiler arranges to call the copy
	constructor for the Box class to make a copy of the argument. Of course, the
	argument to this call of the copy constructor is passed by value, so another
	call to the copy constructor is required, and so on. In short, you’ve
	created a situation where an unlimited number of recursive calls to the copy
	constructor will occur. Your compiler won’t allow this code to compile. To
	avoid the problem, the parameter for the copy constructor must be a
	reference. More specifically, it should be a reference-to-const parameter.
	For the Box class, this looks like this:

					↓
	Box::Box(const Box& box) : m_length{box.m_length}, m_width{box.m_width},
	m_height{box.m_height} {}

	Note that a reference-to-const parameter allows const and non-const objects
	to be copied.
	*/
}