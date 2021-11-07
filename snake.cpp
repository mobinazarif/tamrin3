#include<iostream>
#include<string>
#include <ctime>

using namespace std;
int main() {
	int size;
	cout << "enter n" << "\n";
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
      cout << "*"<<"\n";
    else
      cout << "#"<<"\n";
	}

	system("pause");
}
