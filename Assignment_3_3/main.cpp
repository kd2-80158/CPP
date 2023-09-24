#include "./cylinder.h"
#include "./menu.h"
int main()
{
    Cylinder c;
    Emenu ch;
    Cylinder c1(12,12);
    while((ch=menu())!=EXIT)
    {
      switch(ch)
      {
        case USE_GETTER:
        cout<<"Radius: "<<c.getRadius()<<endl;
        cout<<"Height: "<<c.getHeight()<<endl;
        cout<<"Volume: "<<c.getVolume()<<endl;
        c.printVolume();
        break;
        case USE_SETTER:
        c.setRadius(10);
        c.setHeight(10);
        c.printVolume();
        break;
        case PARAMETERIZED_CTOR:
        c1.printVolume();
        break;
        default:
        cout<<"Please enter the correct choice"<<endl;
        break;

      }
    }
    cout<<"Thanks for using our app!!!!!!!!!"<<endl;

    return 0;
}