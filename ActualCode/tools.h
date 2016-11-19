
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Multiline_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Input.H>

#include <iostream>
#include "window.h"
using namespace std;
void print_directions(double path);
void execute(double path);
void input_salesman(Fl_Widget* w, void* v);

class TextBox : public Fl_Input
{
  static int count;
public:

  TextBox(int x,int y,int w,int h,const char*l=0)
  :Fl_Input(x,y,w,h,l) {}
  //Fl_Input::when(FL_WHEN_ENTER_KEY)
    //cout<<"enter key pressed" << endl;
  int handle(int e)
  {
      int ret = Fl_Input::handle(e);
      //cout<<endl<<count++<<" ******** button "<<label()<<" receives ";


      switch(e)
        {
          case FL_WHEN_ENTER_KEY:
             if(ret == 1) cout<<"key pressed\n";
             else
             {
              cout<<"enter key pressed\n";
              callback(input_salesman);
              return -1;
             }
          break;

        }
  return(ret);
}


};
class MyButton : public Fl_Button
{
    static int count;
public:
    MyButton(int x,int y,int w,int h,const char*l=0)
    :Fl_Button(x,y,w,h,l) {}

    int handle(int e)
    {
        int ret = Fl_Button::handle(e);
        //cout<<endl<<count++<<" ******** button "<<label()<<" receives ";


        switch(e)
        {
            case FL_PUSH:
               cout<<"push"<<" event and returns:"<<ret<<endl;
            break;

            case FL_RELEASE:
               cout<<"release"<<" event and returns:"<<ret<<endl;
            break;
    }
    return(ret);
    }

};

int MyButton::count=0;
int TextBox::count=0;

void but_create(Fl_Widget* w, void* v){
   cout <<endl<< "Button create callback!"<<endl;
   w->hide();
   print_directions(1);
}

void but_quit(Fl_Widget* w, void* v){
   cout <<endl<< "Button quit callback!"<<endl;
   exit(0);
   w->hide();
}

void but_create_order(Fl_Widget* w, void* v){
   cout <<endl<< "Button order callback!"<<endl;
   execute(1.1);
}

void but_create_customer(Fl_Widget* w, void* v){
   cout <<endl<< "Button customer callback!"<<endl;
   execute(1.2);
}
void but_create_salesman(Fl_Widget* w, void* v){
   cout <<endl<< "Button salesman callback!"<<endl;
   execute(1.3);
}
void but_create_robot_model(Fl_Widget* w, void* v){
   cout <<endl<< "Button model callback!"<<endl;
   execute(1.4);
}
void but_create_roboto_component(Fl_Widget* w, void* v){
   cout <<endl<< "Button component callback!"<<endl;
   execute(1.5);
}
void but_quit_to_main_menu(Fl_Widget* w, void* v){
   cout <<endl<< "Button main menu callback!"<<endl;
   print_directions(5);
}

void input_salesman(Fl_Widget* w, void* v){
   cout <<endl<< "text input salesman"<<endl;
   w->hide();
   //print_directions(1);
}


/*int main()
{
    Fl_Window win(120,150);
    win.begin();

    MyButton but_a(10,10,100,25,"A");
    but_a.shortcut('a');
    but_a.callback(but_a_cb);

    MyButton but_b(10,50,100,25,"B");
    but_b.shortcut('b');
    but_b.callback(but_b_cb);

    MyButton but_c(10,90,100,25,"C");
    but_c.shortcut('c');
    but_c.callback(but_c_cb);

    win.end();
    win.show();
    return(Fl::run());
}*/
