#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows to get pascal triangle = ");
    scanf("%d",&n);
    int i,j,value,space;
    for(i = 1;i<=n;i++)
    {
        for(space = 1; space <= (n-i);space ++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            if(i == 1 || j == 1)
            {
                value = 1;
            }
            else
            {
                value = value *(i-j+1)/(j-1);
            }
            printf("%4d",value);
        }
        printf("\n");
    }
return 0;
}