#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
    int upperBound = 10; // Change this to change size of zigzag
    int lowerBound = 1;
    int higherThanTen, currentSize, spaceAmount = 0;

    int numOfColors = 6;

    char colors[6][8] = {
        "\e[0;31m",
        "\e[0;32m",
        "\e[0;33m",
        "\e[0;34m",
        "\e[0;35m",
        "\e[0;36m"
    };

    while(1 == 1){
        
        srand(time(0));

        // Draws diagonal going 'up' to the specified upperBound
        while(higherThanTen == 0) {
            if (currentSize < upperBound) {
                for(int i=0; i<spaceAmount; i++){
                    printf(" ");
                }
                int randColor = rand() % numOfColors;
                printf("%s3\n", colors[randColor]);
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
