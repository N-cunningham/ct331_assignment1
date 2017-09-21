#include <stdio.h>

int main(int arg, char* argc[]){

	int a;
	int* b;
	long c = 135102313;
	double * d;
	char ** e;
	short g;
	long long h;


  printf("Hello assignment 1.\n");
  printf("Size of int: %lu bytes \n", sizeof(a));
  printf("Size of int*: %lu bytes \n", sizeof(b));
  printf("Size of long: %d bytes \n", sizeof(c));
  printf("Size of double: %d bytes \n", sizeof(d));
  printf("Size of char: %d bytes \n", sizeof(e));
  printf("Size of short: %d bytes \n", sizeof(g));
  printf("Size of long long: %d bytes \n", sizeof(h));


  return 0;

  //on the perticular machine i'm working on ints, longs, doubles amd chars are all 4 bytes but longs are 8 and shorts are 2.
}
