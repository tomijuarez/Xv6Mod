#include "types.h"
#include "stat.h"
#include "user.h"
#include "psOutput.h"



int
main(int argc, char *argv[])
{	
	struct psOutput _t;
	ps(&_t);

	printf(0, "%s", "pid");
    printf(0, "%s","\t");
    printf(0, "%s", "name");
    printf(0, "%s","\t");
    printf(0, "%s", "memory");
    printf(0, "%s","\t");
    printf(0, "%s", "priority");
    printf(0, "%s","\n");

	for(int i = 0; i < _t.processes; i++) {
    	printf(0, "%d",_t.pid[i]);
    	printf(0, "%s","\t");
    	printf(0, "%s",_t.pname[i].name);
    	printf(0, "%s","\t");
    	printf(0, "%d", _t.psz[i]);
    	printf(0, "%s","\t");
    	printf(0, "%d", _t.priority[i]);
    	printf(0, "%s","\n");

	}

  	exit();
}
