#include<stdio.h>

int main()
{
	int num = 520;
	const int cnum = 880;
	const int* pc = &cnum;//ָ������ָ��

	printf("cnum:%d,&cnum:%p\n", cnum, &cnum);//CNUM��ֵ�͵�ַ
	printf("*pc:%d,pc:%p\n", *pc, pc);//*pc��ֵ��pc�ĵ�ַ

	/*��pc����num�ĵ�ַ*/
	pc = &num;
	printf("num:%d,&num:%p\n", num, &num);
	printf("*pc:%d,pc:%p\n", *pc, pc);

    return 0;

}
