#pragma warning (disable:4996)
#include <stdio.h>

long long   gcd(long long  a, long long  b);
long long  lcm(long long  a, long long  b);

long long  main()
{
	long long  n, m, a, b;
	scanf("%lld %lld", &n, &m);
	if (n >= m) { a = n; b = m; }
	else { a = m; b = n; }
	printf("%lld", lcm(a, b));

	return 0;
}

long long  gcd(long long  a, long long b) {
	long long re;
	while (b != 0) {
		re = a % b;
		a = b;
		b = re;
	}
	return a;
}

long long  lcm(long long  a, long long  b) {
	return (a * b) / gcd(a, b);
}