   int n1 = n;
    int c = 0;
    while (n > 0) {
        c++;
        n /= 10;
    }
    int n3 = 0;
    while (n1 > 0) {
        n3 = n3 + (n1 % 10) * pow(10, c);
        n1 = n1 / 10;
        c--;
    }
    printf("Reverse is: %d\n", n3);