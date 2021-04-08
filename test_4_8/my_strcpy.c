#include<stdio.h>
/////////////////////////////////写一个函数   执行strcpy功能//////////////////////////////////////////////////

////方法1

void my_strcpy(char* dest, char* str)
{
	while (*str != '\0')
	{
		*dest = *str;
		dest++;
		str++;
	}
	*dest = *str;
}

/////方法2：优化
void my_strcpy(char* dest, char* str)
{
	
	while (*dest++ = *str++)
	{
		;
		
	}
	
}
#include<assert.h>
//////方法3：再优化
void my_strcpy(char* dest, char* str)
{
	assert(dest != NULL);//断言，真-执行;假-报错
	assert(str != NULL);//断言
	while (*dest++ = *str++)
	{
		;

	}

}

////////方法4：继续优化
void my_strcpy(char* dest, const char* str)
{
	assert(dest != NULL);//断言，真-执行;假-报错
	assert(str != NULL);//断言
	while (*dest++ = *str++)
	{
		;

	}

}

///////方法5：最终优化
char* my_strcpy(char* dest, const char* str)//加上const，*str不能被改变
{
	char* ret = dest;//ret为dest的地址
	assert(dest != NULL);//断言，真-执行;假-报错
	assert(str != NULL);//断言
	while (*dest++ = *str++)//把str指向的字符串拷贝到dest指定的空间，包括'\0'字符
	{
		;

	}
	return ret;

}
//int main()
//{
//	char arr1[] = "###########################";
//	char arr2[] = "bit";
//	
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//
//}
int main()
{
	char arr1[] = "###########################";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;

}