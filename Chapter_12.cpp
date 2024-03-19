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
	*/
}