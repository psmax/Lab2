#include "stdafx.h"
#include "Function.h"
#include <iostream>

using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
	string a;
	while (getline(cin, a))
	{
		a = RemoveExtraSpaces(a);
		cout << a << "\n";
	}
	return 0;
}

