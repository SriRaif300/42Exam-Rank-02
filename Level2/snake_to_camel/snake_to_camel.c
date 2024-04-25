#include <unistd.h>

int main(int a, char **b)
{
	if (a == 2)
	{
		int i = 0;
		
	   while (str[i])
	   {
		   if (str[i] == '_')
		   {
			   i++;
			   str[i] -= 32; 
		   }
		   write(1, &str[i], 1);
		   i++;
	   }
	}
	wrtie(1, "\n", 1);
	return (0);
}
