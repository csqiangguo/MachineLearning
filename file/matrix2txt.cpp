//save a matrix(two dimension array) to a txt file
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
template<class T>
void matrix2txt(T **arr,int row,int col,string fileName)
{
	ofstream out(fileName,ios::out);
	if(!out.is_open())
		cout<<"Open file failed!"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++)
			out<<arr[i][j]<<' ';
		out<<endl;
	}
	out.close();
}
/* testing program
int main()
{
	int **arr=new int*[2];
	arr[0]=new int[3];
	arr[1]=new int[3];
	arr[0][0]=1;arr[0][1]=11;arr[0][2]=111;
	arr[1][0]=2;arr[1][1]=22;arr[1][2]=222;
	save2txt(arr,2,3,"test.txt");
	cin.get();
	return 0;
}
*/
