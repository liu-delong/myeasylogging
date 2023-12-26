easylogging++.o:
	g++ easylogging++.cc -c -lpthread -DELPP_THREAD_SAFE
all:main.cpp easylogging++.o easylogging++.h
	g++ main.cpp easylogging++.o  -o prog -lpthread -DELPP_THREAD_SAFE
all2:main.cpp easylogging++.h easylogging++.cc
	g++ main.cpp easylogging++.cc -lpthread -DELPP_THREAD_SAFE -o test