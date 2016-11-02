#include "view.h"
#include <FL/Fl.H>
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>
#include <vector>


using namespace std;


void View::draw()
{
  // Allow base class draw to operate // Allow base class draw to operate
  Fl_Box::draw();

  /*  // Draw the lines // Draw the lines
    for(Line l : lines)
    {
      fl_color(FL_RED);
      fl_line(l.x1(), l.y1(), l.x2(), l.y2());
    }*/
}
bool View::saved() {
  eturn !dirty;
}
