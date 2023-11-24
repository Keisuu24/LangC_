#include <stdio.h>

int main() {
    int x;
    for(int i = 1; i <= 25; i++) {
        x = i % 3;
        if (x == 0){
        printf("%d\n", i);
        }
    }

    int i = 26,y;
    while (i <= 50) {
        y = i % 3;
        if(y == 0)
        printf("%d\n", i);
        i++; 
    }
return 0; 
}