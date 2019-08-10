#include <stdio.h>
int main()
{
    int x,p,s;
    float r,w;
    scanf("%d%d",&x,&p);
    s=x;
    w=(float) x;
    while(w>=1)
    {
        r=(w/100)*p;
        w=w-r;
        s=s+(int) w;
    }
    printf("%d",s);
}