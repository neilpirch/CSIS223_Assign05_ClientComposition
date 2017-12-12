#include "stdafx.h"
#include "Name.h"
#include <iostream>

Name::Name()
{
	last = "name";
	first = "no";
	middle = "";
}


Name::Name(string lName, string fName, string mid)
{
	last = lName;
	first = fName;
	middle = mid;
}

void	Name::setName(string lName, string fName, string mid)
{
	last = lName;
	first = fName;
	middle = mid;
}

void	Name::displayName()	const
{
	cout << first << " ";
	if (middle.length() > 0)
	{
		cout << middle << " ";
	}
	cout << last << endl;
}
