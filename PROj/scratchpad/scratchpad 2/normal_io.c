#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd;
	fd=open("black",O_CREAT|O_WRONLY,S_IRWXU);
	char u[50],p[50];
	scanf("%s",u);
	scanf("%s",p);
	write(fd,u,50);
	write(fd,p,50);
	close(fd);
	fd=open("black",O_RDONLY);
	char buf[50];
	while(read(fd,buf,50)>0)
	{
		printf("%s",buf);
		//write(1,buf,50);
	}
}
