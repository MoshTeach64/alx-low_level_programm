#include <stdio.h>

int main(void)
/*{
	char upper;
	char lower;
	char c;
	
	for(upper = 'A'; upper <= 'Z'; 
	upper++)
		{
			putchar(upper);
		}
	for(lower = 'a'; lower <= 'z'; lower++)
		{
			putchar(lower);
		}
		putchar('\n');
		return(0);*/
{
	char c;
	for (c <= 90 || c >= 122; c++);
	{
	putchar(c);
	}
	putchar('\n');
	return(0);
}
