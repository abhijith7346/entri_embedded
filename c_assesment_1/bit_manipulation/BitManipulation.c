#include <stdio.h>


unsigned char setBit(unsigned char input, int pos) {
    return input | (1 << pos);
}


unsigned char clearBit(unsigned char input, int pos) {
    return input & ~(1 << pos);
}


unsigned char toggleBit(unsigned char input, int pos) {
    return input ^ (1 << pos);
}

int main() {
    unsigned char value = 170;
    
    printf("Input: %d\n", value);
    
    int value1 = setBit(value, 2);      
    printf("After set bit 2: %d\n", value1);
    
    int value2 = clearBit(value, 5);    
    printf("After clear bit 5: %d\n", value2);
    
    int value3 = toggleBit(value, 0);  
    printf("After toggle bit 0: %d\n", value3);
    
    return 0;
}
