#include <stdio.h>
typedef struct {
int day;
char wind[4];
} s_weather;
typedef union {
int day;
char wind[4];
} u_weather;
int main() {
s_weather s, *p_s, **pp_s;
u_weather u, *p_u, **pp_u;
printf("%d\n", sizeof(s));
printf("%d\n", sizeof(u));
printf("%d\n", sizeof(p_s));
printf("%d\n", sizeof(p_u));
printf("%d\n", sizeof(pp_s));
printf("%d\n", sizeof(pp_u));
}