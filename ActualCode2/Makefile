CXX = g++
CXXOPTS = -std=c++11

all: executable
rebild: clean all

debug: CXXFLAGS += -g
debug: executable

executable: window.o view.o
	$(CXX) $(CXXOPTS) -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12 -I/usr/include/freetype2 -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12 -g -O2 -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_THREAD_SAFE -D_REENTRANT -std=c++11 -o 'paint' 'window.o' 'view.o' -Wl,-Bsymbolic-functions -lfltk -1x11
window.o: view.h
	$(CXX) -c $(CXXOPTS) $(fltk-config --cxxflags) window.cpp
view.o: view.cpp view.h
	$(CXX) -c $(CXXOPTS) $(fltk-config --cxxflags) view.cpp
clean:
	-rm -f *.o paint
