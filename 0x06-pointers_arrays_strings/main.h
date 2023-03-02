#ifndef STR_CAT
#define STR_CAT
char *_strcat(char *dest, char *src);
#endif
#ifndef STR_NCAT
#define STR_NCAT
char *_strncat(char *dest, char *src, int n);
#endif
#ifndef STR_NCPY
#define STR_NCPY
char *_strncpy(char *dest, char *src, int n);
#endif
#ifndef STR_CMP
#define STR_CMP
int _strcmp(char *s1, char *s2);
#endif
#ifndef REV_ARR
#define REV_ARR
void reverse_array(int *a, int n);
#endif
#ifndef TO_UPPER
#define TO_UPPER
char *string_toupper(char *);
#endif
#ifndef CAP_STR
#define CAP_STR
char *cap_string(char *);
#endif
