#include<iostream>
using namespace std;
int main()
{
	int N;
	cout<<"Enter the sizes of array:" << endl;
	cin>> N;
	int matrix[N][N];
	for(int i=0 ; i<N ; i++)
	{
		for(int j=0 ; j<N ; j++)
		{
		cout << "[" << i+1 << "][" << j+1 << "]:";
	 
		cin >> matrix[i][j];
		}
	}		
	cout << endl << "Original Matrix:" << endl;
		for(int i=0 ; i<N ; i++)
		{
			for(int j=0; j<N ; j++)
			{
				cout << matrix[i][j] << " " << endl;
}
}
  
 cout << endl << "Transposed Matrix:" << endl;
        for(int i=0 ; i<N ; i++)
		{
			for(int j=0 ; j<N ; j++)
			{
				cout << matrix[j][i] << " " << endl;
	}
}
return 0;
}