// 模拟实现memmove.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_memmove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)
	{
		//前->后
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		//后->前
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}
void test()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	memcpy(arr + 2, arr, 16);
}
int main()
{
	test();
	return 0;
}