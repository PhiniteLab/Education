#ifndef __MYSTRING_HPP__
#define __MYSTRING_HPP__

// strcpy -> copy str1 to str2
// strcat -> concatenates str2 onto str1
// strlen -> length of str
// strcmp -> compare both str1 and str2
// strchr -> searching specific characters

#define __myStrFunc

int __myStrFunc mystrlen(const char *str);
int __myStrFunc mystrlen2(const char *str);

bool __myStrFunc mystrcmp(const char *str1, const char *str2);

char *__myStrFunc mystrcat(char *dest, const char *source);
char *__myStrFunc mystrcat2(char *dest, const char *source);

char *__myStrFunc mystrchr(char *str, char ch);
char *__myStrFunc mystrchr2(char *str, char ch);

char *__myStrFunc mystrcpy(char *dest, const char *source);
char *__myStrFunc mystrcpy2(char *dest, const char *source, int size);

#endif