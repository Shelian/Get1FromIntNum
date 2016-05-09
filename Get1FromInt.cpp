#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//方法一  --->（最好的方法）
int Get1FromInt(unsigned int num)
{
	int count = 0;
	while (num > 0)
	{
		num = num&(num - 1);//每次相与以后就会少一个1 如：15 1111&1110 = 1110 末尾少一个1
		count++;
	}

	return count;
}

//方法二 ---->磨除法
int Get1FromInt(int num)
{
	int count = 0;
	while (num > 0)
	{
		if (num % 2 == 1)//如果磨的结果为1 说明最后一位为1
		{
			count++;
		}

		num = num / 2;
	}
	return count;
}

//方法三 --->移位法
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