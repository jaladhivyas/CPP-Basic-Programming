#include<Basic/inheritance_basic.h>
// Composition:

// It is special form of aggregation. It is a strong type of aggregation.
// Parents and child objects have coincident life time. Child objects does not have its own
// lifecycle and if parents object get deleted, then all of the child objects also gets deleted.

// We use normal member variable
// Can use pointer values if composition class automatically handles allocation and deallocation
// Responsible for creation / destruction of subclasses

// Example: House and rooms.

// House can contain multiple rooms and room does not have independent life and room can not belong to
// two different house.

class House;

class Room
{
public:
    Room()
    {

    }
    static void createRoom(Room* (room), House* hse, char *name)
    {
        room = new Room(hse, name);
    }

    Room(House *hse, char *myName)
    {
        cout<<"This is room"<<endl;
        myHouse = hse;
        if(myHouse !=NULL)
        {
            name = new char(sizeof(strlen(myName)));
            name = myName;
        }
    }

    static void initList(Room *(& roomList)[3])
    {
        roomList[3]= new Room[3];
    }


private:
   House *myHouse;
   char  *name;
};

class House
{
public:
    House(char *myName)
    {
        cout<<"House name is"<<endl;
        nameP = new char(sizeof(strlen(myName)));
        nameP = myName;
        Room *myRoom;
        Room::createRoom(myRoom, this, "Kitchen");
        roomList[0]= myRoom;
        Room::createRoom(myRoom, this, "BedRoom");
        roomList[1]= myRoom;
        Room::createRoom(myRoom, this, "DrawingRoom");
        roomList[2]= myRoom;

    }
private:
  char *nameP;
  Room *roomList[3];
}


