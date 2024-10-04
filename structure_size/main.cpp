#include <iostream>
#include <stdlib.h>

class A {}; // Absolutely eampty class

class Example {
        char data[0];
};

int main() {
	printf("Actual size of the class A is %lu\n", sizeof(A));

        printf("Actual size of Example class is %lu\n", sizeof(Example)); // out: 0
        Example* example_list = (Example*) malloc(10* sizeof(Example)); // lets try to allocate 10 byte

	printf("The address malloc has returned is %p\n", example_list);

        for (size_t i =0; i < 5; i++) {
                printf("the address of [%ld] element is %p\n", i, &example_list[i]);
        }
        free(example_list);
}

