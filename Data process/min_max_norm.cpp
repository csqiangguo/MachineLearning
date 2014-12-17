//min max norm matrix
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
template<typename T>
T** zeros(int row,int col,T)
{
	T** arr=new T*[row];
	for(int i=0;i<row;i++)
		arr[i]=new T[col];
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			arr[i][j]=0;
	return arr;
}
template<class T>
T** min_max_norm(T min_value,T max_value,T **arr,int row,int col)
{
	//normalize each column of the input matrix x using min max normalization
   //min_value is the lower bound after normalization and max_value is the upper bound after normalization
	T **matrix=zeros(row,col,arr[0][0]);
	for(int j=0;j<col;j++){
		int max_col=arr[0][j],min_col=arr[0][j];
		for(int i=1;i<row;i++){
			if(max_col<arr[i][j])
				max_col=arr[i][j];
			if(min_col>arr[i][j])
				min_col=arr[i][j];
		}
		for(int i=0;i<row;i++){
			if(max_col==min_col)
				matrix[i][j]=(max_value+min_value)/2;
			else
				matrix[i][j]=((arr[i][j]-min_col)/(max_col-min_col))*(max_value-min_value)+min_value;
		}
	}
	return matrix;
}
/*TP
int main()
{
	double **arr=new double*[3];
	arr[0]=new double[3];
	arr[1]=new double[3];
	arr[2]=new double[3];
	arr[0][0]=1;arr[0][1]=2;arr[0][2]=3;
	arr[1][0]=4;arr[1][1]=5;arr[1][2]=6;
	arr[2][0]=2;arr[2][1]=1;arr[2][2]=5;
	//save2txt(arr,2,3,"test.txt");
	double **matrix=min_max_norm(0.0,1.0,arr,3,3);
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			cout<<matrix[i][j]<<' ';
		cout<<endl;
	}
	cin.get();
	return 0;
}
*/
