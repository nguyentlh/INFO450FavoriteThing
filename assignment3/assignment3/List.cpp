#include <iostream>
#include <string>
#include "List.h"
#include "Favorites.h"
using namespace std; 

List::List()
{
	numProd = 0; 
	
}
void List::addItem()
{
	int i;
	//get user input
	products[numProd].getFavoritesInput();
	//check for duplicate entries
	for (i = 0; i < numProd; i++)
	{
		if (products[numProd].getName() == products[i].getName())
		{
			cout << "You already have this item!" << endl;
			products[numProd].getFavoritesInput();
		}
	}
	numProd++;
}
//method to print out entire list of items
void List::showList()
{
	cout << "My Favorite Makeup Products" << endl; 
	int j;
	for (j = 0; j < numProd; j++)
	{
		cout << products[j];
	}

}

