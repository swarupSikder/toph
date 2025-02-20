//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void inputMatrix (int mat[2][2]) {
    for(int i=0; i<2 ;i++){
        for(int j=0; j<2 ;j++){
            cin>> mat[i][j];
        }
    }
}

int main(){
    int matA[2][2];
    int matB[2][2];
    inputMatrix(matA);
    inputMatrix(matB);

    int matC[2][2];
    matC[0][0] = (matA[0][0]*matB[0][0]) + (matA[0][1]*matB[1][0]); 
    matC[0][1] = (matA[0][0]*matB[0][1]) + (matA[0][1]*matB[1][1]); 
    matC[1][0] = (matA[1][0]*matB[0][0]) + (matA[1][1]*matB[1][0]); 
    matC[1][1] = (matA[1][0]*matB[0][1]) + (matA[1][1]*matB[1][1]); 


    //print
    for(int i=0; i<2 ;i++){
        for(int j=0; j<2 ;j++){
            cout<< matC[i][j] <<" ";
        }
        cout<<endl;
    }

    
    
    return 0;
}