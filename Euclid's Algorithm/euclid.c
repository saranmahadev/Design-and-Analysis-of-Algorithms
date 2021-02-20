#include<stdio.h>
#include<conio.h>

int main()
{    
    int m,n,r,temp;
    printf("To Find GCD");
    printf("\n Enter The Num");
    scanf("%d",&m);
    printf("\n Enter The Num");
    scanf("%d",&n);
    if(m<n)
    {
        temp = m;
        m = n;
        n =temp;
    }
    
    while(0==0)
    {    
        if(n==0)
           { printf("\n GCD is %d ",m);
            break;}
        else
        {
            r=m%n;
            m=n;
            n=r;
        }
    }
}