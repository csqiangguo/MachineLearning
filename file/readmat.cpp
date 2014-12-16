//如何使用C++读取mat文件中的矩阵
//博客链接：http://blog.csdn.net/left_la/article/details/8206645

#include<mat.h>
#include<iostream>
using namespace std;
template<typename T>
class Matrix{
public:
	Matrix(int M,int N){
		row=M;
		col=N;
		mat=new T*[M];
		for(int i=0;i<M;i++){
			mat[i]=new T[N];
		}
	}
	T** get(){
		return mat;
	}
	~Matrix(){
		for(int i=0;i<M;i++)
			delete []mat[i];
		delete mat;
	}
public:
	T **mat;
	int row;
	int col;
};
int main()
{
	MATFile *pmatFile=NULL;
	mxArray *pMxArray=NULL;

	double *initA;
	
	pmatFile=matOpen("A.mat","r");
	pMxArray=matGetVariable(pmatFile,"initA");
	initA=(double*) mxGetData(pMxArray);
	//cout<<initA[0]<<' '<<initA[1]<<' '<<initA[2]<<endl;
	int M=mxGetM(pMxArray);
	int N=mxGetN(pMxArray);
	Matrix<double> A(M,N); 
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			A.mat[i][j]=initA[M*j+i];//注意M*j+i
		}
	}
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
			cout<<A.mat[i][j]<<' ';
	    cout<<endl;
	}
	matClose(pmatFile);
	mxFree(initA);
	cin.get();
	return 0;
}
