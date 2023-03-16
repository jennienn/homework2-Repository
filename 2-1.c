#include <stdio.h> 
int main()
{
      char charType;
      int integerType;
      float floatType;
      double doubleType;

printf("----- [김예진] [2022041035] -----\n");

printf("Size of char: %ld byte\n",sizeof(charType)); //문자형 변수 charType의 byte 크기가 출력됨
printf("Size of int: %ld bytes\n",sizeof(integerType)); //정수형 변수 integerType의 byte 크기가 출력됨
printf("Size of float: %ld bytes\n",sizeof(floatType)); //실수형 변수 floatType의 byte 크기가 출력됨
printf("Size of double: %ld bytes\n",sizeof(doubleType)); //실수형 변수 floaType의 byte 크기가 출력됨

printf("-----------------------------------------\n");

printf("Size of char: %ld byte\n",sizeof(char)); //문자형 자료형 char의 byte 크기가 출력됨
printf("Size of int: %ld bytes\n",sizeof(int)); //정수형 자료형 int의 byte 크기가 출력됨
printf("Size of float: %ld bytes\n",sizeof(float)); //실수형 자료형 float의 byte 크기가 출력됨
printf("Size of double: %ld bytes\n",sizeof(double)); //실수형 자료형 double의 byte 크기가 출력됨

printf("-----------------------------------------\n");

printf("Size of char*: %ld byte\n",sizeof(char*)); //문자형 포인터 char*의 byte 크기가 출력됨
printf("Size of int*: %ld bytes\n",sizeof(int*)); //정수형 포인터 int*의 byte 크기가 출력됨
printf("Size of float*: %ld bytes\n",sizeof(float*)); //실수형 포인터 float*의 byte 크기가 출력됨
printf("Size of double*: %ld bytes\n",sizeof(double*)); //실수형 포인터 double*의 byte 크기가 출력됨

return 0; 
}