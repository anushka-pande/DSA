#include<stdio.h>
#include<string.h>
struct Student 
{
    int rollno;
    char name[100];
    float percentage;
};
void function(struct Student details);
int main()
{
    struct Student details;
    details.rollno=1;
    strcpy(details.name,"Anushka");
    details.percentage=92;
    function(details);
    return 0;
}
void function(struct Student details)
{
    printf("Roll no.:%d\n",details.rollno);    
    printf("Name:%s\n",details.name);
    printf("Percentage:%f\n",details.percentage);
}