// using userdefined function
#include<stdio.h>
void display(int (*)[3]); // pointer function declaration

int main()
{
    int i, j, mat[3][3];
    printf("\n Enter the element of matrix: ");
    printf("\n********************************");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n matrix[%d][%d] = ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    display(mat);
    return 0;
}

void display(int (*mat)[3])
{
    int i,j;
    printf("\n the elements of matrix are: ");
    printf("\n *******************************");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("\t matrix[%d][%d] = %d ",i,j, *(*(mat+i)+ j));
        }
    }
}
