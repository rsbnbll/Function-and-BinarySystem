#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//int Mul(int a, int b,int n){
//	int count = 0;
//	for (a = 1; a < n; a++){
//		for (b = 1; b <= a; b++){
//			printf("%d*%d=%2d ", b, a, a*b );
//			count++;
//		}
//		printf("\n");
//	}
//	return count;
//}
//int main(){
//	printf("%d\n", Mul(0, 0, 12));
//	system("pause");
//	return 0;
//}
//2.使用函数实现两个数的交换。
//int Swap(int a, int b){
//	int temp = 0;
//		temp = a;
//		a = b;
//		b = temp;
//		printf("%d ",a,b);
//	return temp;
//}
//int main(){
//	printf("%d\n", Swap(6, 3));
//	system("pause");
//	return 0;
//}
//3.实现一个函数判断year是不是润年。
//int Isyear(int year){
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
//		return 1;
//	}
//	return 0;
//}
//int main(){
//	printf("%d\n", Isyear(2016));
//	system("pause");
//	return 0;
//}
//4.创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//void Init(int arr[9]){
//	int i = 0;
//	for (i = 0; i < 9; ++i){
//		arr[i] = i;
//	}
//}
//void Empty(int arr[9],int len){
//	memset(arr, 0, len*sizeof(arr[9]));
//}
//void Reverse(int arr[9], int len){
//	int left = 0;
//	int right = len - 1;
//	while (left <= right){
//		int temp;
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//void Show(int arr[], int len){
//	int i = 0;
//	for (i = 0; i <= len; ++i){
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main(){
//	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Show(arr, len-1);
//	Reverse(arr, len);
//	Show(arr, len-1);
//	Init(arr);
//	Show(arr, len-1);
//	Empty(arr, len);
//	Show(arr, len-1);
//	system("pause");
//	return 0;
//}
//5.实现一个函数，判断一个数是不是素数。
//int Isprime(int i){
//	int j=0;
//	for (j = 2; j <i; ++j){
//			if (i%j == 0){
//				return 0;
//			}
//		}
//	return 1;
//}
//int main(){
//	printf("%d\n", Isprime(18));
//	system("pause");
//	return 0;
//}
//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值为value的二进制位模式从左到右翻转后的值。
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
//unsigned int reverse_bit(unsigned int value){
//		unsigned int new_value = 0;
//		int i = 0;
//		for (i = 31; i >= 0; i--)
//		{
//			if (((value >> i) & 1) == 1) 
//			{
//				new_value = new_value | (1 << (31 - i));
//			}
//		}
//		return new_value;
//	}
//int main(){
//	printf("请输入你的数字: ");
//	unsigned int value = 0;
//	scanf("%u", &value);
//	unsigned int num = reverse_bit(value);
//	printf("翻转后为: %u\n", num);
//	system("pause");
//	return 0;
//}

//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//int Average(int a,int b){
//	int temp = 0;
//	int aver;
//	if (a < b){
//		temp = a;
//		a = b;
//		b = temp;
//		aver = a - (a - b) / 2;
//	}
//	return aver;
//}
//int main(){
//	int a = 1000;
//	int b = 3000;
//	int rel = Average(a,b);
//	printf("%d\n", rel);
//	system("pause");
//	return 0;
//}
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//(1)用函数解决
//int Findnumber(int arr[7]){
//	int ret = arr[0];
//	int i = 0;
//	for (i = 1; i < 7; ++i){
//		ret ^= arr[i];
//	}
//	return ret;
//}
//int main(){
//	int arr[] = { 1, 2, 3, 6, 3, 2, 1 };
//	int rel = Findnumber(arr);
//	printf("%d\n",rel);
//	system("pause");
//	return 0;
//}
//(2)不用函数解决!
//int main(){
//	int arr[] = { 1, 2, 3, 4, 3, 2, 1 };
//	int rel = arr[0];
//	int i = 0;
//	for (i = 1; i < 7; ++i){
//		rel ^= arr[i];
//	}
//	printf("%d\n", rel);
//	system("pause");
//	return 0;
//}
//4.有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//			student a am i
//			i ma a tneduts
//			i am a student
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<assert.h>
void change_order(char *left, char *right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
char *reverse_word(char *p)
{
	int len = strlen(p);
	char *start = p;
	char *end = NULL;
	char *ret = p;
	change_order(p, p + len - 1);
	while (*p)
	{
		start = p;
		while ((*p != '\0') && (*p != ' '))
		{
			p++;
		}
		end = p - 1;
		change_order(start, end);
		if (*p == ' ')
		{
			p++;
		}
	}
	return ret;

}
int main()
{
	char arr[] = "student a am I";
	printf("交换前为：%s\n", arr);
	printf("交换后为：%s\n", reverse_word(arr));
	system("pause");
	return 0;
}
