//int 사용 불가(bec 1-10의12승), long 사용 문제

#include <stdio.h>
int main() {
    long a, b, c;
    
    scanf("%ld %ld %ld", &a, &b, &c);
    printf("%ld\n", a + b + c);
    
    return 0;
}
