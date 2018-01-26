#include "types.h"
#include "stat.h"
#include "user.h"
#include "psOutput.h"

int
main(int argc, char *argv[])
{	
	struct psOutput _t;
	ps(&_t);

	for(int i = 0; i < _t.processes; i++) {
    	printf(0, "%d",_t.pid[i]);
    	printf(1, "%s","\n");
	}

  	exit();
}
