//분이 60을 넘기면 시 +1, 시가 24를 넘기면 무조건 0

#include <stdio.h>
int main() {
    int h, m1, m2;
    
    scanf("%d %d", &h, &m1);
    scanf("%d", &m2);
    m1 += m2;
    h += m1 / 60;
    m1 = m1 % 60;
    h = h % 24;
    printf("%d %d \n", h, m1);
    
    return 0;
}
