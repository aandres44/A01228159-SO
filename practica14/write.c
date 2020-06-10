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

int main() {

    int destination;

    destination =  creat("class.bin", 0666);

    Student *myStudent1;
    myStudent1 = (Student *)malloc(sizeof(Student));
    myStudent1 -> id = 20;
    myStudent1 -> semester = 2;
    sprintf(myStudent1 -> firstName, "%s", "Miguel");
    sprintf(myStudent1 -> lastName, "%s>%d", "Perez",2);

    write(destination, myStudent1, sizeof(Student));

    myStudent1 = (Student *)malloc(sizeof(Student));
    myStudent1 -> id = 21;
    myStudent1 -> semester = 3;
    sprintf(myStudent1 -> firstName, "%s", "Carlos");
    sprintf(myStudent1 -> lastName, "%s>%d", "Adrian",2);

    write(destination, myStudent1, sizeof(Student));

    myStudent1 = (Student *)malloc(sizeof(Student));
    myStudent1 -> id = 21;
    myStudent1 -> semester = 3;
    sprintf(myStudent1 -> firstName, "%s", "Andres");
    sprintf(myStudent1 -> lastName, "%s>%d", "JJ",2);

    write(destination, myStudent1, sizeof(Student));

    myStudent1 = (Student *)malloc(sizeof(Student));
    myStudent1 -> id = 21;
    myStudent1 -> semester = 3;
    sprintf(myStudent1 -> firstName, "%s", "Luis");
    sprintf(myStudent1 -> lastName, "%s>%d", "Ponce",2);

    write(destination, myStudent1, sizeof(Student));

    myStudent1 = (Student *)malloc(sizeof(Student));
    myStudent1 -> id = 21;
    myStudent1 -> semester = 3;
    sprintf(myStudent1 -> firstName, "%s", "Rodrigo");
    sprintf(myStudent1 -> lastName, "%s>%d", "Jimenez",2);

    write(destination, myStudent1, sizeof(Student));

    myStudent1 = (Student *)malloc(sizeof(Student));
    myStudent1 -> id = 21;
    myStudent1 -> semester = 3;
    sprintf(myStudent1 -> firstName, "%s", "Laura");
    sprintf(myStudent1 -> lastName, "%s>%d", "Garcia",2);

    write(destination, myStudent1, sizeof(Student));

    myStudent1 = (Student *)malloc(sizeof(Student));
    myStudent1 -> id = 21;
    myStudent1 -> semester = 3;
    sprintf(myStudent1 -> firstName, "%s", "Camila");
    sprintf(myStudent1 -> lastName, "%s>%d", "Sedillo",2);

    write(destination, myStudent1, sizeof(Student));

    myStudent1 = (Student *)malloc(sizeof(Student));
    myStudent1 -> id = 21;
    myStudent1 -> semester = 3;
    sprintf(myStudent1 -> firstName, "%s", "Carlos");
    sprintf(myStudent1 -> lastName, "%s>%d", "Moron",2);

    write(destination, myStudent1, sizeof(Student));

    myStudent1 = (Student *)malloc(sizeof(Student));
    myStudent1 -> id = 21;
    myStudent1 -> semester = 3;
    sprintf(myStudent1 -> firstName, "%s", "Fernando");
    sprintf(myStudent1 -> lastName, "%s>%d", "Guzman",2);

    write(destination, myStudent1, sizeof(Student));

    myStudent1 = (Student *)malloc(sizeof(Student));
    myStudent1 -> id = 21;
    myStudent1 -> semester = 3;
    sprintf(myStudent1 -> firstName, "%s", "Cholo");
    sprintf(myStudent1 -> lastName, "%s>%d", "Falcon",2);

    write(destination, myStudent1, sizeof(Student));

    close(destination);
    free(myStudent1);
    return 0;
}