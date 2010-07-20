#include <stdio.h>
#include <windows.h>

#include "cache.h"
#include "format.h"

/* Inspired by: http://igoro.com/archive/gallery-of-processor-cache-effects/ */
int main(int argc, wchar_t** argv)
{
	/* One megabyte. Surely our cache is smaller than that! */
	unsigned int cacheLine = get_cache_line(1*1024*1024);
	struct size_of_data formattedResult = unitfy_data_size(cacheLine);

	printf("Cache line -> [%u%s]\n", formattedResult.quantity, formattedResult.unit);

	/* My cache line is 64kb.. what's yours? */
	if(cacheLine == 65536)
		printf_s("\nHeeeey, that's my cache line too! <3\n");

	printf("\n");

	system("PAUSE");
	return 0;
}
