/*
	移动k位，当k很大时
	vc++里面显示未定义，直接为0
*/
#include<stdio.h>
typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer start, int len) {
	int i;
	for (int i = 0; i < len; i++)
		printf(" %.2x", start[i]);
	printf("\n");
}
int main()
{
	/*int lval = 0xFEDCBA98 << 32;
	int aval = 0xFEDCBA98 >> 6;
	unsigned uval = 0xFEDCBA98 >> 4;
	printf("--------lval-----------\n%d\n", lval);
	show_bytes((byte_pointer)&lval, sizeof(int));

	printf("--------aval-----------\n%d\n", aval);
	show_bytes((byte_pointer)&aval, sizeof(int));

	printf("--------uval-----------\n%d\n", uval);
	show_bytes((byte_pointer)&uval, sizeof(unsigned));*/
	int a = 1, b = 32;
	printf("%d ", a << b );
	printf("%d", 1 << 32);
	return 0;
}