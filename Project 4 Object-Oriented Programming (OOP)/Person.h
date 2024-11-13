#pragma once

#include <string>

class Person {
private:
	// Class Variables
	std::string strName = "Default";
	int intAge = 0;

public:
	// Class Constructor
	Person( const std::string& strName, int intAge );

	// Class Functions	
	// Getter Functions
	std::string getName() const;
	int getAge() const;

	// Setter Function
	void setAge( int intAge );

	// Virtual Function - Derived Classes Override
	virtual void introduce() const;

	// Virtual Deconstructor
	virtual ~Person() = default;
};