#include "lib.h"

static int return_number(int x) { return 42; };

int (*fptr)(int x) = &return_number;  //or void (*fptr)(void) = foo;
