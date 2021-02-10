in = test.cpp
ut = main

CXXFLAGS = -std=c++17 -Wall


$(ut)	:	$(in)
	g++ $(CXXFLAGS) $(in) -o $(ut)

run		:	$(ut)	
	./$(ut)

rm:
	rm $(ut)
