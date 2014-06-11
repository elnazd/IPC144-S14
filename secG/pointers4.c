void numberOperations(int a, int b, int *y, int *x, int *w, int *z)
{
    *y = a + b;
    *x = a - b;
    *w = a * b;
    *z = a / b;
    return;
}


int main()
{
    int a = 6;
    int b = 7;
    int sub;
    int mul;
    int div;
    int sum;
    numberOperations(a, b, &sum, &sub, &mul, &div);

    printf("%d %d %d %d\n", sum, sub, mul, div);

    return 0;
}
