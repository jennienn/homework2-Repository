#include <stdio.h>

int main()
{
int i;
int *ptr;
int **dptr;

i = 1234;

printf("----- [김예진] [2022041035] -----\n");

printf("[checking values before ptr = &i] \n"); 
printf("value of i == %d\n", i); // 변수i의 값이 출력됨
printf("address of i == %p\n", &i); //변수 i의 주소값이 출력됨
printf("value of ptr == %p\n", ptr); //포인터 ptr의 값이 할당되어 있지 않아 쓰레기 값이 출력됨
printf("address of ptr == %p\n", &ptr); //포인터 ptr의 주소값이 출력됨

ptr = &i;     /* ptr is now holding the address of i */

printf("\n[checking values after ptr = &i] \n"); 
printf("value of i == %d\n", i); //변수 i의 값이 출력됨
printf("address of i == %p\n", &i); //변수 i의 주소값이 출력됨
printf("value of ptr == %p\n", ptr); //변수 i의 주소값이 출력됨
printf("address of ptr == %p\n", &ptr); //포인터 ptr의 주소값이 출력됨
printf("value of *ptr == %d\n", *ptr); //변수 i의 값이 출력됨

dptr = &ptr;   /* dptr is now holding the address of ptr */

printf("\n[checking values after dptr = &ptr] \n"); 
printf("value of i == %d\n", i); //변수 i의 값이 출력됨
printf("address of i == %p\n", &i); //변수 i의 주소값이 출력됨
printf("value of ptr == %p\n", ptr); //변수 i의 주소값이 출력됨
printf("address of ptr == %p\n", &ptr); //포인터 ptr의 주소값이 출력됨
printf("value of *ptr == %d\n", *ptr); //변수 i의 값이 출력됨
printf("value of dptr == %p\n", dptr); //포인터 ptr의 주소값이 출력됨
printf("address of dptr == %p\n", &dptr); //이중포인터 dptr의 주소값이 출력됨
printf("value of *dptr == %p\n", *dptr); //변수 i의 주소값이 출력됨
printf("value of **dptr == %d\n", **dptr); //변수 i의 값이 출력됨

*ptr = 7777;    /* changing the value of *ptr */

printf("\n[after *ptr = 7777] \n"); //포인터 ptr이 가르키고 있는 변수 i의 주소에 7777이 할당됨
printf("value of i == %d\n", i); //변수 i의 값 출력됨
printf("value of *ptr == %d\n", *ptr);//변수 i의 값 출력됨
printf("value of **dptr == %d\n", **dptr);//변수 i의 값 출력됨

**dptr = 8888;   /* changing the value of **dptr */

printf("\n[after **dptr = 8888] \n");//이중포인터 dptr이 최종적으로 가르키고 있는 변수 i의 주소에 8888이 할당됨
printf("value of i == %d\n", i); //변수 i의 값 출력됨
printf("value of *ptr == %d\n", *ptr); //변수 i의 값 출력됨
printf("value of **dptr == %d\n", **dptr); //변수 i의 값 출력됨

return 0;
}

