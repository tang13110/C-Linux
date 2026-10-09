#ifndef EVENT
#define EVENT

#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <Timing.h>
using namespace std;

namespace planning {
  class Event
  {
    private:
      int code;
      char* title;
      Timing* timing;

    public:
      
      //---Variables statiques---//
      static int currentCode;

      //---Constructeurs---//
      Event(); 
      Event(int a, const char* t);
      Event(const Event&a);
      
      //---Destructeurs---//
      ~Event();

      //---Set et Get---//
      void setCode(int a);
      void setTitle(const char* t);
      void setTiming(Timing);

      int getCode() const;
      const char* getTitle() const;
      Timing getTiming() const;

      //---Méthodes---//
      void display() const;
  };

}

#endif