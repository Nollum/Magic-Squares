#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc > 4) {
        printf("Too many arguments.");
        return 1;
    }
    int i, a, b, c;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = atoi(argv[3]);

    if (!(0 < a < b < c - a) || (b == 2*a)) {
        printf("Invalid arguments");
        return 1;
    }
    int magic_square[3][3]; 
   
    magic_square[0][0] = c - b;
    magic_square[0][1] = c + (a + b);
    magic_square[0][2] = c - a;
    magic_square[1][0] = c - (a - b);
    magic_square[1][1] = c;
    magic_square[1][2] = c + (a - b);
    magic_square[2][0] = c + a;
    magic_square[2][1] = c - (a + b);
    magic_square[2][2] = c + b;
   
    printf("\n");
    for (i = 0; i < 3; ++i) {
        printf("%d %d %d\n", magic_square[i][0], magic_square[i][1], magic_square[i][2]);
    }



    return 0;
}
