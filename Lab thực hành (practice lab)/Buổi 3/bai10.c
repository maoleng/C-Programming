#include<stdio.h>

void daonguoc(){
    char c;
    scanf("%c", &c);

    if (c != '\n'){
        daonguoc();
        printf("%c", c);
    }

}

int main(){
    
    daonguoc();
}