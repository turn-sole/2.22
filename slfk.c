#include<stdio.h>
#include <time.h>

long long Fac(size_t N)
{
	if (0 == N)
		return 1;

	for (size_t i = 0; i < N; ++i)
	{
		//...
	}

	return Fac(N - 1) * N;
}

int main()
{
	size_t begin = clock();
	size_t n = 0;
	for (size_t i = 0; i < 100000000; ++i)
	{
		++n;
	}
	size_t end = clock();
	printf("%d\n", end - begin);

	return 0;
}