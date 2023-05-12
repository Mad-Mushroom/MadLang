#include "args.h"

void parseArgs(int argc, char* argv[]){
    if(argc == 0) return;
    for(int i=1; i<=argc; i++){
        if(argv[i] == "-lexertest") test();
    }
}