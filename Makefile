all: v3 human pVolume inden test ordering assigment safeMap list test001 timeDate test002 test003 whileLoop whileLoop2 whileLoop3 caseWithWhile test004 ptest001

%: %.cc
	g++ -std=c++11 $< -o $@

%: %.c
	gcc $< -o $@