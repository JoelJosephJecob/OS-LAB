#include<stdio.h>
#include<stdlib.h>
int mutex=1,full=0,empty=5,x=0;
void producer()
{
--mutex;
++full;
--empty;
x++;
printf("\nProducer produces""item %d",x);
++mutex;
}
void consumer()
{
--mutex;
++full;
--empty;
printf("\nConsumer consumes""item %d",x);
x--;
++mutex;
}
int main()
{
int n,i;
printf("\n 1. press 1 for producer""\n 2.press 2 for consumer""\n 3. press 3 for exit");
for(i=1;i>0;i++)
{
printf("\n enter your choice:");
scanf("%d",&n);
switch(n)
{
case 1:if((mutex==1)&&(empty!=0))
{
producer();
}
else
{
printf("buffer is full");
}
break;
case 2:if((mutex==1)&&(full!=0))
{
consumer();
}
else
{
printf("buffer is empty");
}
break;
case 3:
exit(0);
break;
}
}
}

