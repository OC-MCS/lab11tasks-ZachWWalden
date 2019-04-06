#include "NumberList.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	NumberList listA, listB;
	 
	/*fstream fileIn;
	fileIn.open("list.txt");

	int temp;

	while (fileIn >> temp)
		list.insertNode(temp);

	list.displayList();	*/
	
	listA.appendNode(10);
	listA.appendNode(20);
	listB.appendNode(15);
	listB.appendNode(40);

	cout << "List A before assign: " << endl;
	listA.displayList();
	cout << "List B before assign: " << endl;
	listB.displayList();

	listA = listB;

	listB.appendNode(50);
	
	cout << "List A after assign: " << endl;
	listA.displayList();
	cout << "List B after assign: " << endl;
	listB.displayList();

	listB.insertNode(60);
	cout << "List B before delete: " << endl;
	listB.displayList();

	listB.deleteNode(60);
	cout << "List B after delete: " << endl;
	listB.displayList();
	return 0;
}