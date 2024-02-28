#include "header.h"

char *get_env(char **env, char *needed) {
    /*char *test;*/

    while (*env) {
	    if (*env != NULL){
        array_word(needed, "=");
        env++;
	    }
	    else
	    {
		    printf("we did't find this argument\n");
	    }
    }
    return 0;
}
