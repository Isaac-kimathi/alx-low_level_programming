#include <string.h>
#include <unistd.h>

int rand()
{
	static int fx = -1;

	fx++;
	if (fx == 0)
		return 9;
	if (fx == 1)
		return 7;
	if (fx == 2)
		return 12;
	if (fx == 3)
		return 23;
	if (fx == 4)
		return 8;
	if (fx == 5)
		return 54;
	return fx * fx % 30000;
}
