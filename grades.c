include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks");
    scanf("%d",&marks);
    if(marks<=50)
    {
        printf("f grade");
    }
    else if(marks>=50&&marks<60)
    {
        printf("c grade");
    }
    else if(marks>=60&&marks<70)
    {
        printf("b grades");
    }
    else if(marks>=70&&marks<80)
    {
        printf("b+ grades");
    }
    else if(marks>=80&&marks<90)
    {
        printf("a grades");
    }
    else if(marks>=90&&marks<=100)
    {
        printf("a+ grades");
    }
    return 0;
}
