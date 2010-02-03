#ifndef FORMAT_INC
#define FORMAT_INC

/*
	Used to represent the size of data in a sane format.

	Ex: If quantity = 100 and unit = "KB", this is
	equivenlent to 102400 bytes.
*/
struct size_of_data
{
	unsigned int quantity;
	const char* unit;
};

/* Adds units to data and adjusts the quantity accordingly. */
struct size_of_data unitfy_data_size(unsigned int sizeInBytes);

#endif
