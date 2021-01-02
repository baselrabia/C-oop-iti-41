#include <stdio.h>
#include <stdlib.h>

struct Emp
{
    int id;
    char name[30];
    int age;
    int salary;
};


int main()
{
    struct Emp arr[5];

    for (int i=0; i<5; i++){
        printf("enter id of emp %d \n",i+1) ;
        scanf("%d",&arr[i].id) ;
        printf("enter name of emp %d \n",i+1) ;
        scanf("%s",arr[i].name) ;
        printf("enter age of emp %d \n",i+1) ;
        scanf("%d",&arr[i].age) ;
        printf("enter salary of emp %d \n",i+1) ;
        scanf("%d",&arr[i].salary) ;
        printf("\n") ;
    }

    for (int i=0; i<5; i++){
        displayEmp(arr[i]);
    }


    /*struct Emp e2;
     printf("enter the value of emp 2 withe the same arrangment =>  id, name, age, salay \n");
    scanf("%d",&e2.id);
    scanf("%s",&e2.name);
    scanf("%d",&e2.age);
    scanf("%d",&e2.salary);

    displayEmp(e1);
    displayEmp(e2);*/

    return 0;
}

void displayEmp(struct Emp e)
{
    printf("%d : %s : %d : %d \n", e.id,e.name,e.age,e.salary);
}
