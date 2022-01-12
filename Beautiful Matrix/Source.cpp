#include <iostream>

using namespace std;

int main() 
{
	int matrix[5][5];
	int i, j, x, y, fini, finj;
	for (i = 0; i < 5; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			cin >> matrix[i][j];
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (matrix[i][j] == 1)
			{
				x = i;
				y = j;
				break;
			}
		}
	}
	if (x == 2 && y == 2)
	{
		cout << "0";
	}

	else if ((x < 2 && y < 2) || (x == 2 && y < 2) || (x < 2 && y == 2) || (x == y && x < 2))
	{
		fini = 2 - x;
		finj = 2 - y;
		cout << fini + finj;

	}
	else if ((x < 2 && y > 2) || (x == 2 && y > 2))
	{
		fini = 2 - x;
		finj = y - 2;
		cout << fini + finj;
	}

	else if ((x > 2 && y < 2) || (x > 2 && y == 2))
	{
		fini = x - 2;
		finj = 2 - y;
		cout << fini + finj;
	}
	else if ((x == y && x > 2) || (x>2 && y>2))
	{
		fini = x - 2;
		finj = y - 2;
		cout << fini + finj;
	}
	else
		cout << "0";

	return 0;
}