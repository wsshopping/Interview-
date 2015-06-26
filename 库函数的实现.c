#include <stdio.h>
void *mymemcpy(void *dst, const void *src, int num)
{
	char *tmp = dst;
	const char *s = src;
	while(num --)
	{
		*tmp++ = *s++;	
	}	
	return tmp;
}
//×Ö·û´®¸³Öµº¯Êý
char *strcpy( char *strDestination, const char *strSource )
{
	//
	assert(strDestination != NULL && strSource != NULL);
	int i = 0;
	while (*strSource!= '\0')
	{
		strDestination[i++] = *strSource++;
	}
	strDestination[i] = '\0';
	return strDestination;
}

int atoi( const char *string )
{
	char *p = (char*)string;
	char c;
	int   i = 0;
	while(c = *p++)
	{
		if(c>='0' && c<='9')
		{
			i = i*10 + (c-'0');
		}
		else
			return -1;                     //ÎÞÐ§µÄ×Ö·û´®
	}
	return i;
}

int main()
{
	char a[] = "my name is dengxiaobing";
	char b[23];
	char *p = mymem(b, a, sizeof(b));
	printf("b = %s \n", b)	
}