#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int lcm(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }

    // тㄢ计い耕计癬翴
    int max = (a > b) ? a : b;

    // ぃ耞┕т砆 a ㎝ b 俱埃计
    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max++;
    }
}

int main() {
    int num1, num2;

    printf("叫块ㄢタ俱计 (フだ筳): ");
    scanf("%d %d", &num1, &num2);

    printf("%d ㎝ %d 程そ计 (LCM) : %d\n", num1, num2, lcm(num1, num2));

    return 0;
}