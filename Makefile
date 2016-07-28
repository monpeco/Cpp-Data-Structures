all: v3 human pVolume inden test ordering

%: %.cc
	g++ -std=c++11 $< -o $@

%: %.c
	gcc $< -o $@