<<<<<<< HEAD
#!/usr/bin/bash
gcc -Wall -c -fPIC *.c 
gcc  -shared *.o  -o liball.so 
=======
#!/bin/bash
gcc -c -fPIC  *.c
gcc -shared -o liball.so *.o
>>>>>>> fe23b12359c58b28f35596bbb6408d8001aa9ee1
