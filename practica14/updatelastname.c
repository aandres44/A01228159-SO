#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


typedef struct s {
    unsigned char id;
    unsigned char semester;
    char firstName[20];
    char lastName[20];
} Student;

int main(int argc, char * argv[]) {
    int src;

    int student =  (int) * argv[1] - 48;

    Student *myStudent1;
    myStudent1 = (Student *)malloc(sizeof(Student));

    src = open("class.bin", O_RDWR);

    for (int i = 0; i < student; i++) {
        //printf("%d \n", student);
        read(src, myStudent1, sizeof(Student));    
    }

    sprintf(myStudent1 -> lastName, "%s>%d", argv[2],2);

    write(src, myStudent1, sizeof(Student));

    //read(src, myStudent1, sizeof(Student));
    
    printf("My student is: %d, %d, %s, %s",
        myStudent1 -> id,
        myStudent1 -> semester,
        myStudent1 -> firstName,
        myStudent1 -> lastName);

    //sprintf(myStudent1 -> lastName, "%s%d", "Perez", 1);

    lseek(src, -1*sizeof(Student), SEEK_CUR);
    write(src, myStudent1, sizeof(Student));
    close(src);
    free(myStudent1);
    return 0;
}