#include<stdio.h>

int main() {
	double pi = 3.1416;
	double R, V;
	int testcase, cases = 0, ans;
	scanf("%d", &testcase);
	while (testcase--) {
		scanf("%lf %lf", &R, &V);
		ans= (pi/ 2*R / V);
		printf("Case %d: %.8lf\n", ++cases, ans);
	}
	return 0;
}
