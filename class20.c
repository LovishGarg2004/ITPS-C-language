# include <stdio.h>

int main() 

{
    int row, column, count=0;
    
    printf("Enter number of rows in array = ");
    scanf("%d", &row);
    
    printf("Enter number of columns in array = ");
    scanf("%d", &column);

    int array[row][column], sum=0;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("Enter [%d][%d] index = ", i, j);
            scanf("%d", &array[i][j]);

            if(array[i][j]%2!=0)
            {
                sum=sum+array[i][j];
            }
        }
    } 

    printf("Sum of odd numbers in the array = %d",sum);

    return 0;       
}