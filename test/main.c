#include "header.h"
int main()
{
	while (read_cmd() != EOF)
	{
		prompt();
		read_cmd();
	}
	return(0);
}
