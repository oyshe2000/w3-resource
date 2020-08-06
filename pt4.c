#include <stdio.h>

void bubble_sort (int *x, int n) {
    int i, t, j = n, s = 1;
    while (s) {
        s = 0;
        for (i = 1; i < j; i++) {
            if (x[i] < x[i - 1]) {
                t = x[i];
                x[i] = x[i - 1];
                x[i - 1] = t;
                s = 1;
            }
        }
        j--;
    }
}

int main () {
    int x[] = {15, 56, 12, -21, 1, 659, 3, 83, 51, 3, 135, 0};
    int n = sizeof x / sizeof x[0];
    int i;
    for (i = 0; i < n; i++)
        printf("%d%s", x[i], i == n - 1 ? "\n" : " ");
    bubble_sort(x, n);
    for (i = 0; i < n; i++)
        printf("%d%s", x[i], i == n - 1 ? "\n" : " ");
    return 0;
}
