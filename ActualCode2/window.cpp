// All programs include FL/Fl.H
#include <FL/Fl.H> 
// Include each “widget” you use
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
int main()
{


// Instance a new window object // Instance a new window object
Fl_Window *win = new Fl_Window(340,180);

// Add a new box object to the window // Add a new box object to the window
Fl_Box *box = new Fl_Box(20,40,300,100,"\n\n                  MAIN MENU\n             ------------------\n  ****NO SPACES ALLOWED WHEN INPUTING DATA****\n      Ex: John Dowe.....should be John_Dowe");




// Set additional fields on the box to specify its appearance // Set additional fields on the box to specify its appearance
box->box(FL_UP_BOX);
box->labelfont(FL_BOLD+FL_ITALIC);
box->labelsize(36);
box->labeltype(FL_SHADOW_LABEL);

// Done defining the new Window // Done defining the new Window
win->end();

// Make the window visible, passing along any user options // Make the window visible, passing along any user options
win->show();

// Enter the “command loop” waiting for events // Enter the “comman
return(Fl::run());
}
