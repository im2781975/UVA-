#include <stdio.h>
int main() {
	int testcase;
	scanf("%d", &testcase);
	while (testcase--) {
		long long N, M;
		scanf("%lld %lld", &N, &M);
		long long S , ret;
		S= N+M;
		ret = (S*(S+1)/2) + N + 1;
		printf("%lld\n", ret);
	}
	return 0;
}
