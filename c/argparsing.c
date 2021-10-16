
#include <getopt.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

enum modes {NONE, INDEX, SEARCH};

int main(int argc, char** argv)
{

	char filename[100];
	char queryfile[100];
  
	enum modes mode;
	int index;
 	int o;
 	mode = NONE;
  	static struct option long_options[] =
    	{
      		{"input",	required_argument, 0, 'i'},
      		{"search",	required_argument, 0, 's'},
      		{"query",	required_argument, 0, 'q'},
      		{0, 0, 0, 0}
    	};


	// extraction of arguments
	while( (o = getopt_long( argc, argv, "i:s:q", long_options, &index)) != -1 )
	{
		switch (o) {
			case 'i':
        			printf("case i\n");
				strcpy(filename, optarg);
				break;
			case 's':
			        printf("case s\n");
				mode = SEARCH;
				strcpy(filename, optarg);
				break;
			case 'q':
			        printf("case q\n");
				strcpy(queryfile, optarg);
				break;
		}
	}


	// verification
	if (mode == NONE){
		fprintf(stderr, "Use either –index or –search\n");
		return 1;
	}

	if (mode == SEARCH && queryfile[0] == 0) {
		fprintf(stderr, "Cannot search without a query\n");
		return 1;
	}



	return 0;
}

