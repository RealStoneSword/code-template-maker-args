#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    /* Variable declarations*/
    FILE * fpointer;

    /* Determining language and writing file */
    if(strcasecmp(argv[1], "-h") == 0 || strcasecmp(argv[1], "-help") == 0 || strcasecmp(argv[1], "--help") == 0) {
        printf("Usage:\n\n-h, --help, -help - Displays the help\n-js - Generates a JavaScript Template\n-java - Generates a Java Template\n-html - Generates a HTML Template\n-c - Generates a C Template\n");
        return 0;
    }

    if (strcasecmp(argv[1], "-java") == 0) {
        fpointer = fopen("java-template.java", "w");
        fprintf(fpointer, "class java-template.java\n    {\n\n\n    public static void main(String args[])\n    {\n\n    }\n}\n");
    
    } else if (strcasecmp(argv[1], "-c") == 0) {
        fpointer = fopen("c-template.c", "w");
        fprintf(fpointer, "#include <stdio.h>\n#include <stdlib.h>\n\nint main() {\n\n\n\n    return 0;\n}\n");
    
        
    } else if (strcasecmp(argv[1], "-html") == 0) {
        fpointer = fopen("html-template.html", "w");
        fprintf(fpointer, "<!DOCTYPE HTML>\n<html>\n\n   <body>\n   \n   \n   </body>\n\n</html>\n");
    
    } else {
        printf("Invalid or unsupported language.\n");
        return 1;
    }

    /* Closing and exiting */
    fclose(fpointer);
    printf("Successful.\nThanks for using my tool!\n");
    return 0;
}

