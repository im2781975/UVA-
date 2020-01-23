#include<stdio.h>
#include<math.h>
int main ()
{
    double a;
    double b;
    double c;

    while ( scanf ("%lf %lf %lf", &a, &b, &c) != EOF ) {

        if ( b + c <= a || c + a <= b || a + b <= c ) {
            printf ("The radius of the round table is: 0.000\n");
            continue;
        }

        double radius = .5 * sqrt (((b + c - a)*(c + a - b)*(a + b - c)) / (a + b + c));

        printf ("The radius of the round table is: %.3lf\n", radius);
    }

    return 0;
}
