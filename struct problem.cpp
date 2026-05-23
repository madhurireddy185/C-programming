#include<stdio.h>
struct class{
    int number;
    char name[20];
    float marks;

};
int main(){
    int x;
    struct class student1={111,"akshaya",72.50};
    struct class student2={222,"akshaya2",67.00};
    struct class student3;
student3=student2;
x=((student3.number==student2.number)&&(student3.marks==student2.marks))? 1:0;

if(x==1){
    printf("\n student2 and 3 are same\n\n");
    printf("%d %s %f\n",student3.number,student3.name,student3.marks);
}  else{
    printf("\n student2 and student3 are different\n\n\n");
}  //printf("%d %s %f\n",student3.name,student3.number,student3.marks);
return 0;
}
