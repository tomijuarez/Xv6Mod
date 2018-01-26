# Xv6Mod
El sistema operativo Xv6 fue llevado a cabo de una manera muy simplificada dado que es de propósito educacional, desarrollado en el el Instituto de Tecnología de Massachusetts (MIT) para su curso de sistemas operativos. La implementación del sistema está basada en la versión 6 de Unix, motivo por el cual se lo llamó de tal forma.
En el presente trabajo se exploran diferentes funcionalidades del sistema operativo a modo de extenderlas o cambiar su comportamiento. Para ello es menester comprender las distintas partes del sistema, teniendo en cuenta que esto implica conocer ciertos aspectos de la teoría de lenguajes de programación y de arquitectura de computadores.

## Funciones añadidas

1. Llamada al sistema PID: Comando pid que imprima el status del sistema respecto a los procesos actuales junto con otra información relevante como la memoria utilizada. Para ello se implementó una llamada al sistema nueva.
2. Modificación del scheduler: agregar scheduler Round-Robin con prioridades por ciclos y aging para solventar problemas de starvation.
3. Kernel threads: el sistema Xv6 no posee kernel threads con lo cual resultó interesante darle este soporte.

Para mayor información, leer el informe adjunto en el repositorio (informe.pdf). Cualquier duda o consulta contactarse a tomasjuarez.exa@gmail.com