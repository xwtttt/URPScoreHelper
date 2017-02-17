#include "stdafx.h"
#include "StringHelper.h"

// 取文本左边
char * left(char *dst, char *src, int n)
{
	char	*p = src;
	char	*q = dst;
	int	len = strlen(src);
	if (n > len)
		n = len;
	while (n--)
		*(q++) = *(p++);
	*(q++) = '\0';                                  /*有必要吗？很有必要*/
	return(dst);
}


// 取文本中间
char * mid(char *dst, char *src, int n, int m)        /*n为长度，m为位置*/
{
	char	*p = src;
	char	*q = dst;
	int	len = strlen(src);
	if (n > len)
		n = len - m;                            /*从第m个到最后*/
	if (m < 0)
		m = 0;                                  /*从第一个开始*/
	if (m > len)
		return(NULL);
	p += m;
	while (n--)
		*(q++) = *(p++);
	*(q++) = '\0';                                  /*有必要吗？很有必要*/
	return(dst);
}


// 取文本右边
char * right(char *dst, char *src, int n)
{
	char	*p = src;
	char	*q = dst;
	int	len = strlen(src);
	if (n > len)
		n = len;
	p += (len - n); /*从右边第n个字符开始，到0结束，很巧啊*/
	while (*(q++) = *(p++))
		;
	return(dst);
}