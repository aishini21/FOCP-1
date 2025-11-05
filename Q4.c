#include <stdio.h>
void swap_temp(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping (Temp Variable): a = %d, b = %d\n", a, b);
}
void swap_arithmetic(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping (Arithmetic): a = %d, b = %d\n", a, b);
}
void swap_xor(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping (Bitwise XOR): a = %d, b = %d\n", a, b);
}
void swap_pointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping (Pointers): a = %d, b = %d\n", *a, *b);
}
int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    swap_temp(x, y);
    swap_arithmetic(x, y);
    swap_xor(x, y);
    swap_pointers(&x, &y);
    return 0;
}
