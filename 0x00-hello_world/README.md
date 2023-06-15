A script that runs a C file through the preprocessor and save the result into another file:
#!/bin/bash
cpp <file-name> > <uotput-file-name>

A script that compiles a given file stored in an environment variable without linking:
#!/bin/bash
gcc -c $VAR_NAME
