#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#pragma warning (disable:4996)

using namespace std;

int main()
{
	int q = 0;
	string str1, str2;
	cin >> str1 >> str2;

	for (int i = 0; i < str1.size(); i++)
	{
		if (tolower(str1[i]) != tolower(str2[i]))
			q += 1;
	}

	cout << q;
	return(0);
}