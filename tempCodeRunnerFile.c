    int num = 42;
    printf("Value of num before change: %d\n", num); 
    valueChange(&num); //$ Pass the address of num to the function to change its value
    printf("Value of num after change: %d\n", num);