#include<stdio.h>

int main(void) {
    int upperBound = 10; // Change this to change size of zigzag
    int lowerBound = 1;
    int higherThanTen, currentSize, spaceAmount = 0;

    while(1 == 1){
        // Draws diagonal going 'up' to the specified upperBound
        while(higherThanTen == 0) {
            if (currentSize < upperBound) {
                for(int i=0; i<spaceAmount; i++){
                    printf(" ");
                }
                printf("3\n");
                currentSize++;
                spaceAmount++;
            } else {
                higherThanTen = 1;
            }
        }
        // Draws diagonal going back down to base 'height' 
        while(higherThanTen == 1) {
            if(currentSize >= lowerBound){
                for(int i = 0; i<spaceAmount; i++){
                    printf(" ");
                }
                printf("3\n");
                spaceAmount--;
                currentSize--; 
            } else {
                higherThanTen = 0;
            }
        }
    }
    return 0;
}