// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int sum(int x, int y)
{
	return x + y;
}
int minu(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x*y;
}
int del(int x, int y)
{

	return x / y;

}
int ost(int x, int y)
{
	return x%y;
}
int logumn(int x, int y)
{
	return x&y;
}
int logsum(int x, int y)
{
	return x | y;
}
int xr(int x, int y)
{
	return x^y;
}
int sdvigleft(int x, int y)
{
	return x << y;
}
int sdvigright(int x, int y)
{
	return x >> y;
}






int main()
{
	int res, x, y, p;
	p = 0;
	y = 0;
	char op;


	cin >> x;
	cin >> op;

	if (op == ' ')
	{
		cin >> op;
		if (op == '>' || op == '<')
		{
			cin >> op;
		}
	}
	else if (op == '>' || op == '<')
	{
		cin >> op;
	}

	if (op == '+')
	{
		if (y == 0 && p == 0)
		{
			cin >> y;
		}
		res = sum(x, y);
		cout << res << endl;
	}
	else if (op == '-')
	{
		if (y == 0 && p == 0)
		{
			cin >> y;
		}
		res = minu(x, y);
		cout << res << endl;
	}
	else if (op == '*')
	{
		if (y == 0 && p == 0)
		{
			cin >> y;
		}
		res = mul(x, y);
		cout << res << endl;
	}
	else if (op == '/')
	{
		if (y == 0 && p == 0)
		{
			cin >> y;
		}
		if (y != 0) {
			res = del(x, y);
			cout << res << endl;
		}
		else { cout << "inf"; }
	}
	else if (op == '&')
	{
		if (y == 0 && p == 0)
		{
			cin >> y;
		}
		res = logumn(x, y);
		cout << res << endl;
	}
	else if (op == '%')
	{
		if (y == 0 && p == 0)
		{
			cin >> y;
		}
		res = ost(x, y);
		cout << res << endl;
	}
	else if (op == '|')
	{
		if (y == 0 && p == 0)
		{
			cin >> y;
		}
		res = logsum(x, y);
		cout << res << endl;
	}
	else if (op == '^')
	{
		if (y == 0 && p == 0)
		{
			cin >> y;
		}
		res = xr(x, y);
		cout << res << endl;
	}
	else if (op == '<')
	{
		if (y == 0 && p == 0)
		{
			cin >> y;
		}
		res = sdvigleft(x, y);
		cout << res << endl;
	}
	else if (op == '>')
	{
		if (y == 0 && p == 0)
		{
			cin >> y;
		}
		res = sdvigright(x, y);
		cout << res << endl;
	}
	system("pause");
	return 0;
	
}
