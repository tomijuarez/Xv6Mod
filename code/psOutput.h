#include "param.h"

typedef struct {
	char name[16];
} strs;

struct psOutput {
	strs  	pname	[NPROC];
	int   	pid    	[NPROC];
	uint	psz		[NPROC];
	int		priority[NPROC];
	int   	processes;
};