#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
if(fork()==0)
{
printf("HC:hello from child\n");
printf("it is child ,running ..\n");
}
else
{
printf("HC:hello from parent\n");
printf("it is parent ,running ..\n");
wait(NULL);
printf("back to parent\n");

printf("CT: child has terminated\n");
}
printf("bye\n");
return 0;
}
