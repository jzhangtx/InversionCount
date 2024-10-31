InversionCount: InversionCount.o
	g++ -g -o InversionCount.exe InversionCount.o -pthread    

InversionCount.o: InversionCount/InversionCount.cpp
	g++ -g  -c -pthread InversionCount/InversionCount.cpp
