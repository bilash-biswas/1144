#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i*i,k=i*i*i;j<=i*i+1,k<=i*i*i+1;j++,k++)
        {
         printf("%d %d %d\n",i,j,k);

        }
    }

    return 0;
}
