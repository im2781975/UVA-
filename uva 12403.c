#include <stdio.h>
#include <string.h>

int main() {
	int t, x, sum = 0;
	char s[20];

	scanf("%d", &t);
	while (t--) {
        scanf("%s", s);

        if (strcmp(s, "donate") == 0) {
        scanf("%d", &x);
        sum = sum+x;
        }
        else {
        printf("%d\n", sum);
        }
	}

	return 0;
}
