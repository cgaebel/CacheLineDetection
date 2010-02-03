#include "fast_math.h"

static int is_odd(unsigned int num)
{
	return num & 1;
}

static unsigned int square(unsigned int num)
{
	return num*num;
}

unsigned int int_pow(unsigned int base, unsigned int exponent)
{
	/* The order of the cases is swapped to help out branch prediction. */
	if(exponent >= 2)
	{
		if(is_odd(exponent))
			return square(int_pow(base, (exponent - 1) / 2)) * base;
		else
			return square(int_pow(base, exponent / 2));
	}
	else
	{
		if(exponent == 1)
			return base;

		else /* if(exponent == 0) <- the only case left. Let's save a comparison =) */
			return 1;
	}
}

/*
	I gotta admit - I didn't come up with this algorithm. I just know of its existence.
	It works because in the binary representation of a perfect power of two, there is
	only one 1.
*/
int is_power_of_two(unsigned int num)
{
	return x && ((num & (num - 1)) == 0);
}
