#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//����һ  --->����õķ�����
int Get1FromInt(unsigned int num)
{
	int count = 0;
	while (num > 0)
	{
		num = num&(num - 1);//ÿ�������Ժ�ͻ���һ��1 �磺15 1111&1110 = 1110 ĩβ��һ��1
		count++;
	}

	return count;
}

//������ ---->ĥ����
int Get1FromInt(int num)
{
	int count = 0;
	while (num > 0)
	{
		if (num % 2 == 1)//���ĥ�Ľ��Ϊ1 ˵�����һλΪ1
		{
			count++;
		}

		num = num / 2;
	}
	return count;
}

//������ --->��λ��
int Get1FromInt(int num)
{
	int count = 0;
	while (num > 0)
	{
		if (num & 1 == 1)
		{
			++count;
		}
		num = num >> 1;
	}
	return count;
}