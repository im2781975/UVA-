#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float sd,ld,k,x,y,z;
    scanf("%f",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%f%f%f",&x,&y,&z);

        k=sqrt(((y*y)+(x*x)));
        if(k<=z)
        {
         sd=z-k;
        }
        else if(k>z)
        {
            sd=k;
        }
        ld=z+k;
        printf("%.2f %.2f\n",sd,ld);

    }
    return 0;
}
