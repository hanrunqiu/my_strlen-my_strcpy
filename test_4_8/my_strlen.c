#include<stdio.h>
#include<assert.h>


int my_strlen(const char* str)//加上const  让代码更健壮 
{
	int count = 0;
	assert(str!= NULL);//保证指针的有效性
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}