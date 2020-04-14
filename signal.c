#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void processSignal(int s){
    printf("Recibi segnal %d\n",s);
}

void survivalSignal(int s){
    printf("Es muy tarde, Skynet esta activo con %d\n", s);
}

int main(){
    signal(10, processSignal);
    signal(15 , survivalSignal);
    while(1){
        sleep(3);
        printf("Trabajando\n");
    }
    return 1;
}