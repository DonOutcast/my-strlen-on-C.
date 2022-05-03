#include <stdio.h>
#include <string.h>
int my_strlen(const char* s);
int s21_strlen(const char* s);
int my_strlen1(const char *s);
int my_strlen2(const char* s);
int my_strlen3(const char* s);
int my_strlen4(const char* s);
static int my_strlen5(const char *s);
int main() {
    char array[]= "shamil";
    int y = strlen(array);
    printf("Origin function: %d\n", y);
    int c = s21_strlen(array);
    printf("s21_strle :%d\n", c);
    int d = my_strlen(array);
    printf("my_strlen :%d\n", d);
    int l = my_strlen1(array);
    printf("my_strlen1 :%d\n", l);
    int r = my_strlen2(array);
    printf("my_strlen2 :%d\n", r);
    int g = my_strlen3(array);
    printf("my_strlen3 :%d\n", g);
    int j = my_strlen4(array);
    printf("my_strlen4 :%d\n", j);
    int e = my_strlen5(array);
    printf("my_strlen5 :%d\n", e);
    return 0;
} 

int my_strlen3(const char* s) {
    int result = 0;
    if (*s != 0) {
    do {
        result++;
        s++;
    } while(*s != '\0'); }
    return result;
}

int my_strlen4(const char* s) {
    int i = 0;
    for(; s[i] != '\0'; i++) {}
    return i;
}

int my_strlen2(const char* s) {
    int result = 0;
    for(;s[result];) {
        result++;
    }
    return result;
}

int s21_strlen(const char* s) {
    int len = 0;
    for (;s[len]; len++);
    return len;
}
int my_strlen(const char* s) {
   int  result = 0;
   while (s[result]) {
      result++;
   }
   return result;
}

int my_strlen1(const char *s) {
    int len = 0;
    while(*s != 0) {
        s++;
        len++;
    }
    return len;
}
static int my_strlen5(const char *s) {
    const char *tmp;
    for ( tmp = s ; *tmp != '\0' ; tmp++ )
        ;
    return (int)(tmp - s);
}
