#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <string.h>

int main(int argc, char** argv)
{

	char textfile[100];
	char queryfile[100];
	char algorithm[10];
	
	int index;
 	int o;
  
	
  	static struct option long_options[] =
    	{
      		{"input",	required_argument, 0, 'i'},
      		{"output",	required_argument, 0, 'o'},
      		{"algorithm",	required_argument, 0, 'a'},
      		{0, 0, 0, 0}
    	};


	//argument extraction
	while( (o = getopt_long( argc, argv, "i:o:a:", long_options, &index)) != -1 )
	{
		printf("<%C>\n", o);
		switch (o) {
			
			case 'i':
        			printf("intput file is: %s\n", optarg);
				break;
			case 'o':
				printf("output file is: %s\n",optarg);
				break;
			case 'a':
				printf("algorithm is: %s\n",optarg);
				break;
		}
	}

	return 0;
}
