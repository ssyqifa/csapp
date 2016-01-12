#include <stdio.h>
typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer start, int len) {
	int i;
	for (int i = 0; i < len; i++)
		printf(" %.2x", start[i]);
	printf("\n");
}

void show_int(int x)
{
	printf("---------show_int---------\n");
	show_bytes((byte_pointer)&x, sizeof(int));
}
void show_float(float x)
{
	printf("---------show_float---------\n");
	show_bytes((byte_pointer)&x, sizeof(float));
}
void show_pointer(void *x)
{
	printf("---------show_pointer---------\n");
	show_bytes((byte_pointer) &x, sizeof(void *));
}

int main()
{
	int i[3] = {1,2,3};
	show_int(i);
	int f = 5.0;
	show_float(f);
	show_pointer(i);
	return 0;
}