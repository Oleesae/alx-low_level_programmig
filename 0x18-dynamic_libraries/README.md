# 0x18. C - Dynamic libraries

## General Objectives
- What is dynamic library, how does it work, how to create one, and how to use it
- What is the environment variable $LD_LIBRARY_PATH and how to use it
- What are the differences between static and shared libraries
- Basic usage of nm, ldd, ldconfig

#### 0. [A library is not a luxury but one of the necessities of life](./libdynamic.so)
- How to Create a dynamic library
- A dynamic library containing the following functions
```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

### [1. Without libraries what have we? We have no past and no future](./1-create_dynamic_lib.sh)
- A shell script that creates a dynamic library from c files

### [2. Let's call C functions from Python](./100-operations.so)
- A shared library containing C functions that is called from python