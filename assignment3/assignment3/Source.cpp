#include <iostream>
#include <string>
#include "Favorites.h"
#include "List.h"
using namespace std; 

const int items = 1000; 
int main()
{
	int i;
	char answer;
	List myList;


	cout << "Welcome to Makeup Tracker!" << endl;
	cout << "Enter all your favorite makeup products." << endl;
	cout << "To keep you organized, duplicate entries will result ";
	cout << "in an error. Just try again! :)" << endl;
/**	Makeup Tracker will input new items until the user decides they do not
want to enter anymore items. After the user quits, the list will print out. **/
	for (i = 0; i < items; i++)
	{
		myList.addItem();
		cout << "Add new item? Enter y/n" << endl;
		cin >> answer;
		if (answer == 'n')
			break;
	}
	myList.showList();

	system("pause"); 
	return 0;
}
