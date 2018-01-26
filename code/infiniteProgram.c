#include "types.h"
#include "stat.h"
#include "user.h"

void 
a() {
	printf(0,"Llamada a la función a desde un thread.");
	exit();
}

void
b() {
	printf(0,"Llamada a la función b desde otro thread");
	exit();
}

int
main(int argc, char *argv[]) {

	/*
	PARA TESTEAR EL SCHEDULER CON PRIORIDADES, DESCOMENTAR ESTE BLOQUE DE CÓDIGO.

	sprior(0); //Se asigna prioridad 0 al proceso actual.

	int pid = fork(); //Primer fork.

	if (pid > 0) {
		sprior(500); //El primer sub-proceso por defecto tenía prioridad 15, ahora tendrá prioridad 500.
		fork(); //Segundo fork.

		if (pid > 0)
			fork(); //Tercer fork, tendrá prioridad 15.
	}
	
	LOOP INFINITO PARA QUE NO TERMINE.
	for(;;) {
		printf(0," ");
	}
	*/

	/*
	PARA TESTEAR EL SOPORTE DE THREADS DE KERNEL, DECOMENTAR ESTE BLOQUE DE CÓDIGO.	

	add_kthread(&a);
	add_kthread(&b);

	join_kthreads();
	
	*/	

	exit();
}
