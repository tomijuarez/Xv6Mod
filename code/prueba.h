#include "param.h"

struct psOutput {
	char  t           [40];
	char* pname       [NPROC];
	int   pid         [NPROC];
	int   processes;
};
