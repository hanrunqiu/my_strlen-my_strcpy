#include<stdio.h>
#include<assert.h>


int my_strlen(const char* str)//����const  �ô������׳ 
{
	int count = 0;
	assert(str!= NULL);//��ָ֤�����Ч��
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