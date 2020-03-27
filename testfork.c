#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 

int main() {
    if(fork() == 0){
        printf("Soy el hijo\n");
    } else {
        printf("Soy el padre\n");
    }
}