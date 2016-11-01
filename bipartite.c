#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main()
{

int t,i;
scanf("%d",&t);

for(i=0;i<t;i++)
{
int n,m,d,D,sum=0;
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&d);
scanf("%d",&D);



if(n*d>m||n*D<m)
{
    printf("-1\n");
    continue;
}




int left[n];
int right[n];
int degree=n/m;
int remainder=n%m;
for(i=0;i<n;i++)
{
    left[i]=0;
    right[i]=0;
}

int startleft=0,startright=0;
int edges=0;
while(edges<(m*degree))
{


for(i=0;i<degree;i++)
{
    printf("%d %d\n",startleft+1,startright+i+1);
    left[startleft]++;
    right[startright+i]++;
    edges++;
    if(startright=n-1)
        startright=0;
}
startleft++;
if(right[startright]>=degree)
    startright++;
}




startleft=0,startright=0;
edges=0;
while(edges<=remainder)
{

if(left[startleft]<D)
{
    printf("left%d\n",left)
    if(right[startright]<D)
    {
        printf("right%d\n",right)
        printf("%d %d\n",startleft+1,startright+1);
        left[startleft]++;
        right[startright]++;
        startright++;
        edges++;
    }
    else
        startright++;
}
else
    startleft++;

}




}
return 0;
}




