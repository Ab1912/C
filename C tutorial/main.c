#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Student{
char name[50];
char cls[20];
int id;

}

main(){
struct Student st1,st2,id;
strcpy(st1.name,"Abi");
strcpy(st1.cls,"A");
id.id=1;
strcpy(st2.name,"Kumar");
strcpy(st2.cls,"B");
id.id=2;

printf("Name : %s\n",st1.name);
printf("Class : %s\n",st1.cls);
printf("ID : %d\n",id.id);

printf("Name : %s\n",st2.name);
printf("Class : %s\n",st2.cls);
printf("ID : %d\n",id.id);


}