#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char ch ='z';
	while(ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return 0;
}
