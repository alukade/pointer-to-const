#include<stdio.h>

int main()
{
	int num = 520;
	const int cnum = 880;
	const int* pc = &cnum;//指向常量的指针

	printf("cnum:%d,&cnum:%p\n", cnum, &cnum);//CNUM的值和地址
	printf("*pc:%d,pc:%p\n", *pc, pc);//*pc的值和pc的地址

	/*用pc储存num的地址*/
	pc = &num;
	printf("num:%d,&num:%p\n", num, &num);
	printf("*pc:%d,pc:%p\n", *pc, pc);

    return 0;

}
