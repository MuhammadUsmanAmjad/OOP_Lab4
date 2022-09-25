#include<iostream>
#include"drive.cpp"
using namespace std;
int main()
{
	list obj1;
	obj1.getsize(10);
	obj1.input();
	//task 3 (c)
	int p = 0;
	cout << "enter element to search\n";
	cin >> p;
	cout << "minimum number of search is:\n";
	obj1.search(p);
	
}