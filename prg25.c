// (25)Program to find multiplication of two matrices.

#include <stdio.h>

void main() {

        int rows1,cols1;

    printf("Enter the rows for 1st matrix : ");
    scanf("%d",&rows1);
    printf("Enter the columns for 1st matrix : ");
    scanf("%d",&cols1);

    int matrix1[rows1][cols1];

        for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);  
        }
    }

     int rows2,cols2;

    printf("Enter the rows for 2nd matrix : ");
    scanf("%d",&rows2);
    printf("Enter the columns for 2nd matrix : ");
    scanf("%d",&cols2);

    int matrix2[rows2][cols2];

        for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);  
        }
    }

    int matrix3[rows1][cols1];

    if(rows1 == cols2) {

           for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

                for(int i=0;i<rows1;i++) {
            for(int j=0;j<cols1;j++) {
                printf("%d\t",matrix3[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("the multiplication cannot be made due to mathematical error");
    }
}