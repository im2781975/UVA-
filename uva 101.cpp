#include <stdio.h>
int main ()
{
    long int  a,b,i,j,k;
    while(scanf("%ld %ld",&a,&b)==2)
    {
        int len=1,maxlen=0;
        if(a<b)
        {
            for(i=a; i<=b; i++)
            {
                for(j=i,len=1; j!=1; len++)
                {
                    if(j%2==0)

                    {

                        j=j/2;
                    }

                    else

                    {

                        j=3*j+1;
                    }
                }
                if(len>maxlen)
                {
                    maxlen=len;
                }
            }
        }
        else
        {
            for(i=b; i<=a; i++)
            {
                for(j=i,len=1; j!=1; len++)
                {
                    if(j%2==0)

                    {

                        j=j/2;
                    }

                    else

                    {

                        j=3*j+1;
                    }
                }
                if(len>maxlen)
                {
                    maxlen=len;
                }
            }
        }
        printf("%d %d %d\n",a,b,maxlen);

    }
    return 0;
}
