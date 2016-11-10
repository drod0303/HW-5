// All programs include FL/Fl.H
#include <FL/Fl.H>
// Include each “widget” you use
#include <FL/Fl_Window.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/fl_ask.H>
#include <FL/Fl_Box.H>
#include "view.h"
#include "window.h"

Fl_Window *win;
Fl_Menu_Bar *menubar;
View *view;


void CloseCB(Fl_Widget* w, void* p)
{

    win->hide();

}

Fl_Menu_Item menuitems[] =
{
  {"&File",0,0,0,FL_SUBMENU},
    {"&Quit",FL_ALT + 'q', (Fl_Callback *)CloseCB },
    { 0 },
  { 0 }
};



int main()
{
//  const int x = 640;
//  const int y = 480;
double input = -1;

// Instance a new window object
Fl_Window *win = new Fl_Window(x,y,"Robbie Robot Shop Program");

// Create a view (a canvas on which to draw)
view = new View{0, 0, x, y};

// Sign up for callback
win->callback(CloseCB, view);

// Enable resizing
win->resizable(*view);

// Install menu bar

menubar = new Fl_Menu_Bar(0, 0, x, 30);
menubar->menu(menuitems);

print_directions(0);
//print_directions(1);




// Done defining the new Window // Done defining the new Window
win->end();

// Make the window visible, passing along any user options // Make the window visible, passing along any user options
win->show();

// Enter the “command loop” waiting for events // Enter the “comman
return(Fl::run());
}
