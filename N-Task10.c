#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define RUN_TEST_CASES(VAR) int VAR##_total; scanf("%d", & VAR##_total); \
	for(int VAR=1; VAR<=VAR##_total; ++VAR)

int min(int a, int b) { return a < b ? a : b; }
int max(int a, int b) { return a > b ? a : b; }

int main()
{
#ifdef _DEBUG
	char FNAME[250];
	strcpy(FNAME, __FILE__);
	strcpy(strchr(FNAME, '.'), ".txt");
	freopen(FNAME, "rt", stdin);
#endif

	RUN_TEST_CASES(test_case)
	{
		int m, n;
		scanf("%d %d", &m, &n);

		int lookup[10001];
		memset(lookup, 0, sizeof lookup);

		for (int j = 1; j <= n; ++j) {
			int x;
			scanf("%d", &x);

			if (m > x)
			{
				const int other_pos = lookup[m - x];
				if (other_pos > 0)
					printf("%d %d\n", min(j, other_pos), max(j, other_pos));
			}

			lookup[x] = j;
		}
	}
} 
