#include <iostream>
#include <vector>
#include <list>
#include "auto.hpp"

using namespace std;

int main ()
{
	std::vector<car*> c;

	c.push_back(new BMW("black", 150));
	c.push_back(new VW("white", 70));
	c.push_back(new AUDI("blue", 120));

	for (auto e : c)
	{
		e->go();
	}

	cout << endl;

	return 0;
}
