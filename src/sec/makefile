sec:sec.o ASN_sec.o
	g++ -o ../../bin/Atz19 *.o

sec.o:main.cpp
	g++ -c main.cpp -I ../../include/ -I ../../include/asnSec/
 
ASN_sec.o:../../include/asnSec/**.c
	gcc -c ../../include/asnSec/**.c  -I ../../include/asnSec/
 
cleanB:
	rm *.o Atz

cleanA:
	rm *.o