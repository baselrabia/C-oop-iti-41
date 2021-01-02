#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define null -32


struct Emp
{
    int id;
    char name[30];
    int age;
    int salary;
};

int main()
{
    char ch,name[30];
    char menu [3][10] = {"New","Display","Exit"};
    int dispaly,id,del;
    int number=0;
    int flag = 0;
    struct Emp arr[5] = {0};;
    do
    {
        system("cls");

        printf("Enter a char [\n n => new,\n d => Display,\n i => Search by id,\n s => Search by name,\n x => delete by id,\n e => Exit,\n ]  \n ");
        ch = getch();
        switch(ch)
        {
        case 'n':
             printf("New \n");
                if(number < 5){
                    printf("enter id of emp %d \n",number+1) ;
                    scanf("%d",&arr[number].id) ;
                    printf("enter name of emp %d \n",number+1) ;
                    scanf("%s",arr[number].name) ;
                    printf("enter age of emp %d \n",number+1) ;
                    scanf("%d",&arr[number].age) ;
                    printf("enter salary of emp %d \n",number+1) ;
                    scanf("%d",&arr[number].salary) ;
                    printf("you entered the values of emp %d\n",number+1) ;
                    number++;
                }else{
                    printf("you had entered the 5 emp");
                }
            break;

        case 'd':

            printf("Display \n");
                printf("enter the number of emp from 1 to 5 \n") ;
                for (int i=0; i<5; i++){
                        if((arr[i].id) != 0){
                            displayEmp(arr[i]);
                        }
                }
            break;

        case 'i':
             printf("Search by id \n");
                printf("enter the id of emp \n") ;
                scanf("%d",&id) ;
                searchid(arr,id);
             break;

        case 's':
            printf("Search by name \n");
                printf("enter the name of emp \n") ;
                scanf("%s",&name) ;
                searchname(arr,name);
             break;

        case 'x':
            printf("delete by id \n");
                printf("enter the id of emp \n") ;
                scanf("%d",&id) ;
                deleteid(arr,id);
             break;

        case 'e':
        case 'E':
        case 27:
            printf("Exit \n");
            flag=1;
            break;
        }
        getch();
     }
    while(flag==0);


    return 0;
}

void searchid(struct Emp arr[],int id)
{
    int flag=0;
    printf("Displaying :\n");
    for (int i=0; i<5; i++){
            if((arr[i].id) == id){
                displayEmp(arr[i]);
                flag=1;
                break;
            }
    }
    if(flag==0){
        printf("no employee with this id : %d \n",id);
    }
}

void searchname(struct Emp arr[],char name[])
{
    int flag=0;
    printf("Displaying name %s :\n",name);
    for (int i=0; i<5; i++){
            if(strcmp(arr[i].name, name) == 0 ){
                displayEmp(arr[i]);
                flag=1;
                break;
            }
    }
    if(flag==0){
        printf("no employee with this name : %s \n",name);
    }

}

void deleteid(struct Emp arr[],int id)
{
    int flag=0;
    printf("delete by id :\n");
    for (int i=0; i<5; i++){
            if((arr[i].id) == id){

                arr[i].id=0;
                arr[i].age=0;
                arr[i].salary=0;
                strcpy(arr[i].name,"0");

                flag=1;
                break;
            }
    }
    if(flag==0){
        printf("no employee with this id : %d \n",id);
    }
}


void displayEmp(struct Emp e)
{
    printf("%d : %s : %d : %d \n", e.id,e.name,e.age,e.salary);
}
