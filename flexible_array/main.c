#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct S {
	int version; // 4 bytes
	char name; // 1 byte
	unsigned long date; // 8 bytes

	// 3 bytes for padding
	int data[]; // flexible array (don't take into acciunt when get the size of struct)
}; // size of sturcture 4 + 1 + 8 + 3 = 16 bytes (16 mod 8 = 0)

int main() {
	printf("size of struct itself is %lu\n", sizeof(struct S));
	
	size_t extra_space = 4;
	struct S* s_item = (struct S*) malloc(1*sizeof(struct S) + extra_space);

	// now we can memset the data array and use it
	memset(s_item->data, 0, extra_space*sizeof(int));

	// for example we can iterate by it
	for (size_t i = 0; i < extra_space; i++) {
		printf("data[%lu] = %d\n", i, s_item->data[i]);
	}

	free(s_item);
}
