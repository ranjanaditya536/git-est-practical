#include<iostream>
using namespace std;
struct Sparse{
    int row , col , value;
};
int main(){

    int rows , cols;
    cout<<"Enter the number of rows and columns:"<<endl;
    cin>>rows>>cols;

    int matrix[100][100];
    cout<<"Enter matrix elements"<<endl;

    int count = 0;

    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<cols ;j++){
            cin>>matrix[i][j];

            if(matrix[i][j]!=0){
                count++;
            }
        }
    }

    Sparse sparse[count +1];

sparse[0].row = rows;
sparse[0].col = cols;
sparse[0].value = count;

int k=1;

for(int i=0;i<rows;i++)
{
    for(int j=0;j<cols;j++)
    {
        if(matrix[i][j]!=0)
        {
            sparse[k].row=i;
            sparse[k].col=j;
            sparse[k].value=matrix[i][j];
            k++;
        }
    }
}
  cout << "\nSparse Matrix (Triplet Form):\n";
cout<<"Row   Col   Value\n";

for(int i=0;i<=count;i++)
{
    cout<<sparse[i].row<<" "
        <<sparse[i].col<<" "
        <<sparse[i].value<<endl;
}

return 0;
     }