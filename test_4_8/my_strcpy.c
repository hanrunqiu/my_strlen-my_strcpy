#include<stdio.h>
/////////////////////////////////дһ������   ִ��strcpy����//////////////////////////////////////////////////

////����1

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

/////����2���Ż�
void my_strcpy(char* dest, char* str)
{
	
	while (*dest++ = *str++)
	{
		;
		
	}
	
}
#include<assert.h>
//////����3�����Ż�
void my_strcpy(char* dest, char* str)
{
	assert(dest != NULL);//���ԣ���-ִ��;��-����
	assert(str != NULL);//����
	while (*dest++ = *str++)
	{
		;

	}

}

////////����4�������Ż�
void my_strcpy(char* dest, const char* str)
{
	assert(dest != NULL);//���ԣ���-ִ��;��-����
	assert(str != NULL);//����
	while (*dest++ = *str++)
	{
		;

	}

}

///////����5�������Ż�
char* my_strcpy(char* dest, const char* str)//����const��*str���ܱ��ı�
{
	char* ret = dest;//retΪdest�ĵ�ַ
	assert(dest != NULL);//���ԣ���-ִ��;��-����
	assert(str != NULL);//����
	while (*dest++ = *str++)//��strָ����ַ���������destָ���Ŀռ䣬����'\0'�ַ�
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