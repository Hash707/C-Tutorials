// Author : Hash707
// Date : 20 March 2023
// Purpose : Matrix Multiplication in C (Code with Harry)


#include<stdio.h>
#include<conio.h>

void printMat(int row, int col, int mat[][col]){  // Two pass a 2d Array we have to specify the number of columns in the funciton argument. otherwise it will on work 
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf(" %d |", mat[i][j]);
        }
        printf("\n");
    }
}

void  mulMat(int rowA,int colA,int rowB,int colB,int matA[][colA],int matB[][colB]){
    
    int matM[rowA][colB];
    int sum = 0;

    if(colA != rowB){
        printf("Matrix can't be multiplied. Cols of A != Rows of B\n");
    }
    else{
        for(int i = 0;i<rowA;i++){
            for(int j = 0;j<colB;j++){
                for(int k = 0;k<colA;k++){
                    sum += matA[i][k] * matB[k][j];
              }
              matM[i][j] = sum;
              sum = 0;
            }  
        }
    }

    printf("The multiplied matrix is : \n");
    printMat(rowA,colB, matM);
}

int main(){

    int rowA = 0, colA = 0, rowB = 0, colB = 0;


    printf("Enter the number of rows for Matrix A: ");
    scanf("%d", &rowA);
    printf("Enter the number of column for Matrix A: ");
    scanf("%d", &colA);

    int matA[rowA][colA];
    printf("Enter the elements of the Matrix A:\n");

    for(int i = 0;i<rowA;i++){
        for(int j = 0;j<colA;j++){
            printf("Enter the value of Element [%d][%d] of the Matrix: ", i,j);
            scanf("%d", &matA[i][j]);
        }
    }

    printMat(rowA,colA, matA);

    printf("Enter the number of rows for Matrix B: ");
    scanf("%d", &rowB);
    printf("Enter the number of column for Matrix B: ");
    scanf("%d", &colB);

    int matB[rowB][colB];
    printf("Enter the elements of the Matrix B:\n");

    for(int i = 0;i<rowB;i++){
        for(int j = 0;j<colB;j++){
            printf("Enter the value of Element [%d][%d] of the Matrix: ", i,j);
            scanf("%d", &matB[i][j]);
        }
    }

    printMat(rowB,colB,matB);

    mulMat(rowA,colA,rowB,colB, matA,matB);
    
    return 0;
}


