#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* week[7] = { "SAT", "SUN", "MON", "TUE", "WED", "THU", "FRI" };

char* solution(int a, int b) {
    
    char* answer = NULL;

    int q = b, m = a, y = 2007;

    if (m <= 2) {
        m += 12;
        y--;
    }

    int h = (q + 13 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;

    answer = week[h];
    return answer;
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%s",solution(x, y));
    
}
