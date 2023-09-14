#include<iostream>
/**
*@brief The Room class is used to represent a room's dimensions.
*/
class Room{
private:
float length;
float breadth;
float height;
public:
/**
*@brief Constructor for taking all input and assigning values.
*@param length The lenght of the room.
*@param breadth The breadth of the room.
*@param height The height of the room.
*/
Room(float length, float breadth, float height){
this->length=length;
this->breadth=breadth;
this->height=height;
}
/**
*@brief Calculate the volume.
*@return The volume of room.
*/
float volume(){
return length*width*height;
}
/**
*@brief Calculate the area.
*@return The area of room.
*/
float area(){
return 2*(length*breadth)+2*(length*height)+2*(breadth*height);
}
int main(){
Room room(10.8,12.7,4.2);
cout<<"Area of room is: "<<room.area()<<endl;
cout<<"Volume of room is: "<<room.volume()<<endl;
}
