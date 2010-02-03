#include "format.h"

#define sizeof_array(arr)	(sizeof(arr)/sizeof((arr)[0]))

struct size_of_data unitfy_data_size(unsigned int sizeInBytes)
{
	struct size_of_data retVal;
	int i;

	/* Feel free to add more - just append items to the array :) */
	const char* units[] = {
		"B",
		"KB",
		"MB",
		"GB",
		"TB",
		"PB",
		"EB",
		"ZB",
		"YB"	/* We'll never get past a yottabyte of anything... right? */
	};

	retVal.quantity = sizeInBytes;
	retVal.unit = units[0];

	for(i = 1; (retVal.quantity >= 1024) && (i < sizeof_array(units)); ++i)
	{
		retVal.quantity /= 1024;
		retVal.unit = units[i];
	}

	return retVal;
}
