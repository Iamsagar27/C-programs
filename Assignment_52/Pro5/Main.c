/*
5. Write a program which accept file name which contains information of student and display the studnt 
names having even number of marks. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

struct student
{
    int Rollno;
    char Name[40];
    int Marks;
};

void FileRead(char *FName)
{
    int fd = 0 , ret = 0 ;
    struct student sobj;
    

    fd = open(FName , O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file.\n");
        return ;
    }

    while((ret = read(fd,&sobj,sizeof(sobj))) != 0)
    {
        if(sobj.Marks % 2 == 0)
        {
            printf("%s\n",sobj.Name);
        }   
    }
    close(fd);
}
int main()
{
    char fname[20];
    
    printf("Enter file name\n");
    scanf("%s",&fname);

    FileRead(fname);

    return 0 ;
}




