#include <unistd.h>
#include "parse_agents.h"

void mx_printstr(const char *s){
    write(1, s, mx_strlen(s));
    
}
