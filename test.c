#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
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
//2.ʹ�ú���ʵ���������Ľ�����
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
//3.ʵ��һ�������ж�year�ǲ������ꡣ
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
//4.����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
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
//5.ʵ��һ���������ж�һ�����ǲ���������
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
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵΪvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
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
//	printf("�������������: ");
//	unsigned int value = 0;
//	scanf("%u", &value);
//	unsigned int num = reverse_bit(value);
//	printf("��ת��Ϊ: %u\n", num);
//	system("pause");
//	return 0;
//}

//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
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
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
//(1)�ú������
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
//(2)���ú������!
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
//4.��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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
	printf("����ǰΪ��%s\n", arr);
	printf("������Ϊ��%s\n", reverse_word(arr));
	system("pause");
	return 0;
}
