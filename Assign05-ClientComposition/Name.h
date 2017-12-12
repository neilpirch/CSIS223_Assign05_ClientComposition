#pragma once
#include <string>

using namespace std;

class Name
{
public:
	Name();
	Name(string lName, string fName, string mid);

	void	setName(string lName, string fName, string mid);
	void	displayName()	const;

private:
	string last;
	string first;
	string middle;
};

