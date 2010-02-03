#ifndef CACHE_INC
#define CACHE_INC

/*
	The maximum is the absolute maximum size that can be returned.
	This function uses a heuristic to determine the cache line, or
	may just find a nice alignment that happens to be oddly fast.

	I recommend you set max to 1MB. Most people have cache
	lines smaller than 100kb. By most people, I mean me.
*/
unsigned int get_cache_line(unsigned int max);

#endif
