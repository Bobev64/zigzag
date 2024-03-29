#include<stdio.h>
#include<stdlib.h>
#include<time.h>

extern int upperBound = 0;


int main(int argc, char* argv[]) {
    if (argv[1] == NULL) {
        upperBound = 10; // Defaults to 10 if no arg given
    } else {
        upperBound = atoi(argv[1]); // Takes arg for size of zigzag
    }
    
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

    int randColor = 0;

    while(1 == 1){
        
        srand(time(0)); // Seeds rand with time passed each time loop is completed for new color

        // Draws diagonal going 'up' to the specified upperBound
        while(higherThanTen == 0) {
            if (currentSize < upperBound) {
                for(int i=0; i<spaceAmount; i++){
                    printf(" ");
                }
                randColor = rand() % numOfColors; // Allows us to set a range for output of rand
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
                randColor = rand() % numOfColors;
                printf("%s3\n", colors[randColor]);
                spaceAmount--;
                currentSize--; 
            } else {
                higherThanTen = 0;
            }
        }
        printf("\033[0m"); // Returns terminal color to normal
    }
    return 0;
}
