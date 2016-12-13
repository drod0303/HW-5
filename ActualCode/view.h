#ifndef __VIEW_H
#define __VIEW_H 201610
#include <FL/Fl.H>
#include <FL/Fl_Box.H>
#include <vector>

using namespace std;

class View : public Fl_Box
{

  bool dirty = false;  // set true to demo Exit dialog

  public:
// Call base constructor
View(int X, int Y, int W, int H) : Fl_Box(X, Y, W, H) { }
// Draw the lines any time FLTK needs to refresh the widget // Draw the lines any time FLTK needs to refresh the widget
void draw() override;
// Determine if any lines haven't been saved // Determine
};


#endif
