#include <time.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	time_t	start;
	time_t	end;
	char	a;
	int		b;

	time (&start);
	a = 0;
	b = 217;
	while (b >= 0)
	{
		write(1, &a, 1);
		a++;
		b--;
	}
	time (&end);
	double difference = difftime (end, start);
	printf ("\ntime: %.9lf seconds\n", difference);
	return (0);
}
