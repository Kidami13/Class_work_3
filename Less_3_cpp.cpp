

#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "Write your age" << endl;
	cin >> age;
	if (age > 0 and age < 18) 
	{
		cout << "Go to School";
	}
	else if (age >= 18 and age <= 65)
	{
		cout << "GO WORKING";
	}
	else if (age < 65)
	{
		
	  cout << "Just relax";
	}
	else
	{
		cout << "ERROR";
	}
    
}


