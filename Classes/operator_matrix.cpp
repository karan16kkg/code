#include<iostream>
using namespace std;
class matrix{
    int rows;
    int col;
    int mat[100][100];
    public:
    matrix(){};
    matrix(int r,int c,int m[100][100]){
        rows=r;
        col=c;
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                mat[i][j]=m[i][j];
            }
        }
    }

    matrix operator+(matrix m){
        int m1[100][100];
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                m1[i][j]=mat[i][j]+m.mat[i][j];
            }
        }
        return matrix(rows,col,m1);
    }
    void print(){
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    int row1,row2,col1,col2;
    cin>>row1>>col1;
    int mat1[100][100];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>mat1[i][j];
        }
    }
    matrix m1(row1,col1,mat1);

    cin>>row2>>col2;
    int mat2[100][100];
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cin>>mat2[i][j];
        }
    }
    matrix m2(row2,col2,mat2);

    matrix m3=m1+m2;
    m3.print();
    return 0;
}