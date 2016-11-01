#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main()
{

int t,i;
scanf("%d",&t);

for(i=0;i<t;i++)
{
    int d,sum=0;
scanf("%d",&d);

    while(d>0)
    {
        sum+=d%10;
        d=d/10;
    }

int ans=0;
sum=sum+1;
while(sum>0)
    {
        ans+=sum%10;
        sum=sum/10;
    }
    printf("%d\n",ans);




}
return 0;
}




