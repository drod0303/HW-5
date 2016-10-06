#ifndef __ROBOTPART_H
#define __ROBOTPART_H 2016



class Robot_Part
{
  public:
    virtual Robot_Part() = 0;
  private:
    String name;
    int partNumber;
    //componentType componentType
    double weight;
    double cost;
    String description;
    //RenderedImage image



};


class Head : Robot_Part
{

}

class Arm : Robot_Part
{

}

class Torso : Robot_Part
{

}

class Locomotor : Robot_Part
{

}

Class Batter : Robot_Part
{

}
 #endif
