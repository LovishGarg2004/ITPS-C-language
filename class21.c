# include<stdio.h>

int main() {
    int array[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter [%d][%d] index =",i,j);
            scanf("%d",&array[i][j]); 
        } 
    }

    printf("Transpose of matrix :\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",array[i][j]); 
        } 
        printf("\n");
    }
    printf("=>\n");

    for(int i=0;i<3;i++)
    {
        for(int j=i;j<3;j++)
        {
            int flag = array[i][j];
            array[i][j]=array[j][i];
            array[j][i]=flag; 
        } 
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",array[i][j]); 
        } 
        printf("\n");
    }
    
    return 0;

}    