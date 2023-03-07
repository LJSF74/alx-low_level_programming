#ifndef _MEMSET
#define _MEMSET
char *_memset(char *s, char b, unsigned int n);
#endif
#ifndef _MEMCPY
#define _MEMCPY
char *_memcpy(char *dest, char *src, unsigned int n);
#endif
#ifndef _STRCHR
#define _STRCHR
char *_strchr(char *s, char c);
#endif
#ifndef _STRSPN
#define _STRSPN
unsigned int _strspn(char *s, char *accept);
#endif
#ifndef _STRPBRK
#define _STRPBRK
char *_strpbrk(char *s, char *accept);
#endif
#ifndef _STRSTR
#define _STRSTR
char *_strstr(char *haystack, char *needle);
#endif
#ifndef PRINT_CHESSB
#define PRINT_CHESSB
void print_chessboard(char (*a)[8]);
#endif
#ifndef PRINT_DIAGSM
#define PRINT_DIAGSM
void print_diagsums(int *a, int size);
#endif
#ifndef _PUTCHAR
#define _PUTCHAR
int _putchar(char c);
#endif
