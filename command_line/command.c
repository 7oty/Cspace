#include<stdio.h>

int main(int argc, char *argv[]) {

    printf("program name %s\n", argv[0]);
    if(argc == 2){
        printf("the arguemnt supplied %s\n", argv[1]);
    }else if(argc > 2){
        printf("too many arguments supplied.\n");
    }else{
        printf("one arguemnt expected.\n");
    }
}
