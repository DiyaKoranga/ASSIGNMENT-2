//program to print the rectangular pattern of *
#include<iostream>
using namespace std;

int main()
{
	int r , c;
	cout<<"ENTER THE NUMBER OF ROWS: ";
	cin>>r;
	cout<<"ENTER THE NUMBER OF COLUMNS: ";
	cin>>c;
	for (int i=0; i<r; i++)
	{
		cout << "\n";
		for (int j=0; j<c; j++)
		{

			if (i == 0 || i == r-1 || j== 0 || j == c-1)
			cout << "*";
			else
			cout << " ";
		}
	}return 0;
}
