#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdarg.h>

int compute(int x, int num, int a,...);

int main(int argc, char const *argv[])
{
	int x;
	x = atoi(argv[1]);
	int r1, r2, r3;
	r1 = compute(x,1,3);
	printf("%d\n", r1);
	r2 = compute(x,3,2,4,6);
	printf("%d\n", r2);
	r3 = compute(x,5,1,2,0,7,5);
	printf("%d\n", r3);
	return 0;
}

int compute(int x, int num, int a,...)
{
	int i = 0, k = 0, j = x, cnt = num, s = a;
	va_list args;
	va_start(args, a);

	for (i = 0; i < cnt; ++i)
	{
		k = k + s*pow(x,i);
		s = va_arg(args, int); // 將 list 現在所指指標往後移一個 int
	}
	va_end(args);
    return k;
}