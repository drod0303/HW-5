#ifndef __STORE_H
#define __STORE_H 2016


#include "std_lib_facilities.h"
//#include "media.h"

//vector<Media> publication_list;
//Media media;

void print_directions()
{

  cout << endl;
  cout << "1  (C)reate" << endl;
  cout << "2  (R)eport" << endl;
  cout << "3  (S)ave" << endl;
  cout << "4  (Q)uit" << endl;
  cout << endl;
}

void test_input(int input)
{

  if ((input==1) || (input==2) || (input==3) || (input==4) || (input=='C')|| (input=='R') || (input=='S') || (input=='Q')){} //makes sure that the input is a valid key number

  else
  {
    cout <<"That is an invalid operation\n"<< endl;
    exit(0);
  }

}

/*void execute(int input)
{
  //gathers the data for the publications
  static int i=0;
  if(input==1)
  {



    cout << "Please enter each of the following." << endl;
    cout << "   Title:            ";
    cin >> media.title;
    cout << "   Author:           ";
    cin >> media.author;
    cout << "   Copyright Year:   ";
    cin >> media.copyright_year;
    cout << "   Genre:            ";
    cin >> media.genre;
    cout << "   Type of Media:    ";
    cin >> media.type;
    cout << "   Target age:       ";
    cin >> media.target_age;
    cout << "   Unique ISBN:      ";
    cin >> media.isbn;
    cout << "\n\n";
    media.checked_in = true;
    media.customer_name = "N/A";
    media.customer_telephone = "N/A";

    cout << "\n\n--------You have just added--------\n";

    //occupies an array of type Media with different media objects
    publication_list.push_back(media);
    media.print_contents(publication_list[i]);

    i++;
  }
  else if(input==2)
  {
    int i = 0;
    if(publication_list.size() == 0)
    {
      cout << "There are currently no publicaitons in this library."<< endl;
      return;
    }

    while(i<publication_list.size())
    {
      media.print_contents(publication_list[i]); //prints out an entire publication info
      i++;
    }

  }
  else if(input==3)
  {
    string publication= "empty";
    int index = -1;
    string name;
    string number;


    //input is only accepted by title or isbn because these are distinguishing factors of a publication
    cout << "\nWhich publication would you like to checkout? enter either title or isbn. (case sensitive)" << endl;
    cin >> publication;
    index = media.find(publication, publication_list);//finds the index with the correct object

    if(index >= 0)
    {
      cout << "\nHere is '" << publication_list[index].title << "', please leave your name and number\n";
      cout << "name: ";
      cin >> publication_list[index].customer_name;
      cout << "\nnumber: ";
      cin >> publication_list[index].customer_telephone;
      publication_list[index].checked_in = false;


    }
    else if(index == -1)
    {
      cout << "\nI'm sorry that is either the incorrect input or we do not have that title/isbn in our system\n";
    }
    else
    {
      cout <<"error finding publication\n";
      exit(0);
    }




  }
  else if(input==4)
  {
    string publication = "empty";
    int index = -1;
    cout<< "\nwhat is the title of your publication or isbn number? (case sensitive)\n";
    cin >> publication;
    index = media.find(publication, publication_list);//makes sure that that publication belongs to the library

    if(index >= 0)
    {
      cout << "\nThank you for returning '" << publication_list[index].title << "'\n";

      publication_list[index].customer_name = "N/A";
      publication_list[index].customer_telephone  = "N/A";
      publication_list[index].checked_in = true;


    }
    else if(index == -1)
    {
      cout << "\nI'm sorry that publication does not belong to this library\n";
    }
    else
    {
      cout <<"error finding publication\n";
      exit(0);
    }


  }
  else if(input==5)
  {

  }
  else
  {
    cout << "something went horribly wrong\n" << endl;
    exit(0);
  }
}

*/
 #endif
