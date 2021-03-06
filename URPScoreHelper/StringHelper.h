#pragma once

#ifndef __STRINGHELPER_H__

	#define __STRINGHELPER_H__

	char * left(char *dst, char *src, int n);
	char * mid(char *dst, char *src, int n, int m);
	char * right(char *dst, char *src, int n);
	void replace_string(char * source_str, const char * search, const char *replace_with);
	void findAndReplaceAll(std::string & data, std::string toSearch, std::string replaceStr);
	char * url_encode(char const *s, int len, int *new_length);
	int url_decode(char *str, int len);
	int split(char dst[][128], char* str, const char* spliter);
	std::string _URLFIND(const std::string & url, const char *name);
	std::string _GET(const std::string & get, const char *name);
	std::string _POST(const std::string & post, const char *name);
	std::string _COOKIE(const std::string & cookie, const char *name);
	char * base64_encode(const unsigned char * bindata, char * base64, int binlength);
	bool base64_decode(const char *strIn, unsigned char *pOut, size_t *uOutLen);
	std::string ReadTextFileToMem(const char *lpszLocalPath);
	std::string strformat(const char *format, ...);
	std::string & ltrim(std::string & src);
	std::string & rtrim(std::string & src);
	std::string & trim(std::string & src);

#endif
