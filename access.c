#include<unistd.h>
#include<fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include<stdio.h>

int main(void)
{
int ret;

ret= access("./test.txt", R_OK|W_OK);

if(ret<0)
{
	perror("Error");
	return -1;
}
char *s="proceede";
write(0,s,sizeof(s));

return 0;
}

