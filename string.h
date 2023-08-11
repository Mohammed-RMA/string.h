#include <stdio.h>
#include <string.h>
/*****************************************************************************************************************/
void *Mo_memchr(const void *str, char character, int n);
int Mo_memcmp(const void *str1, const void *str2, int n);
void *Mo_memcpy(void *dest, const void * src, int n);
void *Mo_memmove(void *str1, const void *str2, int n);
void *Mo_memset(void *str, char value, int from,int to);
char *Mo_strcat(char *dest, const char *src);
char *Mo_strchr(const char *str, char character);
int Mo_strcmp(const char *str1, const char *str2);
int Mo_strcoll(const char *str1, const char *str2);
char *Mo_strcpy(char *dest, const char *src);
int Mo_strcspn(const char *str1, const char *str2);
int Mo_strlen(const char *str);
char *Mo_strncat(char *dest, const char *src, int src_len);
int Mo_strncmp(const char *str1, const char *str2, int n);
char *Mo_strncpy(char *dest, const char *src, int n);
char *Mo_strpbrk(const char *str1, const char *str2);
char *Mo_strrchr(const char *str, char character);
int Mo_strspn(const char *str1, const char *str2);
char *Mo_strstr(const char *str1, const char *str2);
int Mo_strxfrm(char *dest, const char *src, int n);
/*****************************************************************************************************************/