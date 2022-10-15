#include <stdio.h>
/**
 * main - prints alphabet in lowercase except q and e, followed by a new line
 * return: IT 0
 */
int main(void)
{
	char pc;

	for (pc = 'a'; pc <= 'z'; pc++)
	{
		if (pc != 'e' && pc != 'q')
			putchar(pc);
	}
	putchar('\n');
	return (0);
}
