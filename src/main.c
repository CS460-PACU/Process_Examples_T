/****************************************************************************
 File name:  	main.c
 Author:      cs 460
 Date:        9/1/2023
 Class:       cs 460
 Assignment:  in class process activity
 Purpose:     demonstrate the process lifecycle
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int gCounter = 0;
/****************************************************************************
  Function: 	 	main

  Description: hello world!

  Parameters:	argc - the number of command line arguments
               argv - the actual command line arguments

  Returned:	 	EXIT_SUCCESS
****************************************************************************/
int main()
{
	gCounter = gCounter + 1;

	printf("%d\n", gCounter);
	printf("run the loops!");
	// compute for about 30 seconds
	for (int count = 0 ; count < 300; ++count)
	{
		for (gCounter = 0; gCounter < 100000000; ++gCounter)
		{
			gCounter ++;
			gCounter --;
		}
	}

	printf("sleep!\n");
	sleep(30); // 30 seconds
	printf("wakeup\n");
	sleep(30);
}
