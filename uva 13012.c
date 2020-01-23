#include<stdio.h>
int main()
{
    int n, i, m, count;
    while( scanf("%d", &n)!=EOF)
    {
        count=0;
        for(i=0;  i<5; i++)
        {
        scanf("%d", &m);
            if (m==n)
            count++;
        }

      printf("%d\n", count);
    }
      return 0;
      }
