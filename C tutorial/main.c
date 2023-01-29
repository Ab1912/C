#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Student{
char name[50];
char cls[20];
int id;

}

main(){
struct Student st1,st2;
strcpy(st1.name,"Abi");
strcpy(st1.cls,"A");
st1.id=1;
strcpy(st2.name,"Kumar");
strcpy(st2.cls,"B");
st2.id=2;

printf("Name : %s\n",st1.name);
printf("Class : %s\n",st1.cls);
printf("ID : %d\n",st1.id);

printf("Name : %s\n",st2.name);
printf("Class : %s\n",st2.cls);
printf("ID : %d\n",st2.id);
}