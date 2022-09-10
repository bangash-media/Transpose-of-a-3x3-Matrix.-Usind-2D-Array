#include <iostream>

using namespace std;

int main() 
{
	int mat[3][3]={{2,3,4},{9,4,6},{7,6,1}};
	int temp1,temp2,tem3;
	cout<<"\nMatrix A= "<<endl<<endl;
	for(int i=0;i<3;i++) //loop for matrix
	{
		for(int j=0;j<3;j++)
		cout<<mat[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;

	cout<<"Transpose of Matrix A= "<<endl<<endl;  
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cout<<mat[j][i]<<" "; //loop in reverse will make transpose  
		cout<<endl;
	 } 

	return 0;
}

//	//swaping location 01 with 10
//	temp1=mat[o][1];
//	mat[0][1]=mat[1][0];
//	mat[1][0]=temp1;
//	
//	//swaping location 02 with 20
//	temp2=mat[o][2];
//	mat[0][2]=mat[2][0];
//	mat[2][0]=temp1;
//	
//	//swaping location 12 with 21
//	temp3=mat[1][2];
//	mat[1][2]=mat[2][1];
//	mat[2][1]=temp1;
	
