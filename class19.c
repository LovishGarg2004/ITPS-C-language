# include <stdio.h>

int main() {
    int row,column,count=0;
    
    printf("Enter number of rows in array = ");
    scanf("%d",&row);
    printf("Enter number of columns in array = ");
    scanf("%d",&column);

    int array[row][column];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("Enter [%d][%d] index = ",i,j);
            scanf("%d",&array[i][j]);

            if(array[i][j]%2==0)
            {
                count++;
            }
        }
    }

    printf("Total number of even number in array = %d",count);
    
return 0;
}