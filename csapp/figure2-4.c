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

void test_show_bytes(int val)
{
	int ival = val;
	float fval = (float)ival;
	int *pval = &val;
	show_int(ival);
	show_float(ival);
	show_pointer(pval);
}
int main()
{
	//Í¼2-5
	//test_show_bytes(12345);

	//2.1.5 ±íÊ¾×Ö·û´®
	//show_bytes("12345", 6);

	/* Á·Ï°Ìâ2.5
	int val = 0x87654321;
	byte_pointer valp = (byte_pointer)&val;
	show_bytes(valp, 1);
	show_bytes(valp,2);
	show_bytes(valp, 3);
	show_bytes(valp, 4);
	*/

	//Á·Ï°Ìâ2.7
	/*
	const char *s = "abcdef";
	show_bytes((byte_pointer)s, strlen(s));
	*/

	return 0;
}