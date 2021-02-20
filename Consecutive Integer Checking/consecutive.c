#include<stdio.h>
#include<conio.h>

int main()
{
    int m,n,t;

    printf("To Find GCD:\n");
    printf("Enter a Number");
    scanf("%d",&m);
    printf("Enter a Number");
    scanf("%d",&n);
    
    if(m<n)
        t = m;
    else
        t = n;

    while(0==0)
    {
        if (m%t == 0 && n%t == 0)
        {
            printf("GCD is %d",t);
            break;           
        }
        else
        {
            t=t-1;
        }
    }
    getch();
    return 0;
}