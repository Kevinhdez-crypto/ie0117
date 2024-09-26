//aqui van las funciones

int bitwise_and( int a,int b){
    return a & b;
}

int bitwise_or(int a,int b){
    return a | b; 
}

int bitwise_xor(int a,int b) {
    return a ^ b;
}

int bitwise_not_a(int a){
    return ~a;
}

int bitwise_not_b(int b){
    return ~b;
}

void print_binary(int decimal){
    int numero_bits = sizeof(int) * 8;

    for (int i = numero_bits - 1; i >= 0; i--){
        int bit = (decimal >> i) & 1;
        printf("%d", bit);
        
    }
    printf("\n");
}