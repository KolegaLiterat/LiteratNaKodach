#include <iostream>

using namespace std;

int main()
{
	int *czerwony, *zolty;

	czerwony = new int;
	zolty = new int;
	
	*czerwony = 100;
	*zolty = 200;
	
	cout << "Po wpisaniu:\n"
		"Na czerwonym = " << *czerwony << " Na zoltym = " << *zolty << "\n";
	
	czerwony = zolty;

	cout << "Po przelozeniu:\n"
		"Na czerwonym = " << *czerwony << " Na zoltym = " << *zolty << "\n";
	
	*czerwony = 5;
	*zolty = 1;
	
	cout << "Na czerwonym " << *czerwony << " Na zotlym " << *zolty << "\n";
	
	delete zolty;
	//delete czerwony;
}
