#include"libft.h"
#include <unistd.h>
void ft_putstr_fd(char *s, int fd) 
{
int i;
i = 0;
if(s)
while(s[i])
{
	write(fd,&s[i],1);
	i++;
}
		
	
}
// int main()
// {
// 	int fd;
// 	fd = open("test12.txt", O_CREAT | O_RDWR);
// 	char str[] = "charafchdidjesus";
// 	ft_putstr_fd(str,fd);
// 	return 0;
	
// }