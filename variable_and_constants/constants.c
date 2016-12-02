#include <stdio.h>

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main(){
    int area;
    area = LENGTH * WIDTH;
    printf("value of area: %d\n", area);
    printf("%c\n", NEWLINE);

    /*const int LENGTH = 10;
     * const int WIDTH = 5;
     * const char NEWLINE = '\n';
     * int area;
     * area = LENGTH * WIDTH;
     * printf("value of area : %d\n", area);
     * printf("%c", NEWLINE);
     * */

    return 0;
}
