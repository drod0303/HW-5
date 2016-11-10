CXX = g++
CXXOPTS = -std=c++11

all: executable
rebild: clean all

debug: CXXFLAGS += -g
debug: executable

executable: window.o view.o
	$(CXX) $(CXXOPTS) -L/usr/local/lib -lfltk -lpthread -framework Cocoa -I/usr/local/include -I/usr/local/include/FL -I/usr/local/include/FL/images -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_THREAD_SAFE -D_REENTRANT -o 'window' 'window.cpp' -I/usr/local/include -I/usr/local/include/FL/images -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_THREAD_SAFE -D_REENTRANT -o 'shop' 'view.cpp'
window.o: window.cpp window.h view.h tools.h
	$(CXX) -c $(CXXOPTS) -I/usr/local/include -I/usr/local/include/FL -I/usr/local/include/FL/images -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_THREAD_SAFE -D_REENTRANT  window.cpp
	# $(CXX) -c $(CXXOPTS) $(fltk-config --cxxflags) window.cpp
view.o: view.cpp view.h
	$(CXX) -c $(CXXOPTS) -I/usr/local/include -I/usr/local/include/FL -I/usr/local/include/FL/images -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_THREAD_SAFE -D_REENTRANT  view.cpp
	#$(CXX) -c $(CXXOPTS) $(fltk-config --cxxflags) view.cpp
clean:
	-rm -f *.o paint
