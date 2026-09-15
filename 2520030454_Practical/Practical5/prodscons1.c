#include<stdio.h>
#include<unistd.h>
#include<time.h>
int main()
{
int fd[2];
pipe(fd);
int pid,data;
int start,end;
double timetaken,efficiency;
pid=fork();
start=clock();
if(pid==0)
{
printf("it is the consumer\n");
close(fd[1]);
for(int i=0;i<5;i++){
read(fd[0],&data,sizeof(data));
printf("consumed %d\n",data);
}
close(fd[0]);
}
else{
printf("producer:\n");
close(fd[0]);
for(int i=1;i<=5;i++){
data=i*10;
write(fd[1],&data,sizeof(data));
printf("produced %d\n",data);
}
close(fd[0]);
}
else{
printf("producer:\n");
close(fd[0]);
for(int i=1;i<=5;i++){
data=i*10;
write(fd[1],&data,sizeof(data));
printf("produced %d\n",data);
}
close(fd[1]);
end=clock();
timetaken=(double)(end-start)/CLOCKS_PER_SEC;
efficiency=5/timetaken;
printf("time taken is %lf\n",timetaken);
printf("communication efficiency is %lf\n",efficiency);
}
}