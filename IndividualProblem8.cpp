//Name : Menna Allah Mostafa Mohamed
//G11
//ID:20170298
#include<iostream>
using namespace std;
class shape
{
private:
    string color;
public:
    shape(string c)
    {
        color=c;
    }
    string get()
    {
        return color;
    }
    //virtual float area()=0;
    //virtual float surfacearea()=0;
    //virtual float volume=0;
    void display()
    {
        cout<<"the color is:"<<endl;
        cout<<color<<endl;
    }
};
class twodshape:public shape
{
public:
    twodshape(string c):shape(c)
    {

    }
    virtual float area()=0;
    void display()
    {
        shape::display();
    }
};
class threedshape:public shape
{
public:
    threedshape(string c):shape(c)
    {

    }
    virtual float surfacearea()=0;
   virtual float volume()=0;
    void display()
    {
        shape::display();
    }
};
class circule:public twodshape
{
private:
    float radius;
public:
    circule(string c,float r):twodshape(c)
    {
        radius=r;
    }
    void set1(float r)
    {
        if(r<0)
            radius=0;
        else
            radius=r;
    }
    float get()
    {
        return radius;
    }
    float area()
    {
        return 3.14*radius*radius;
    }
    void display()
    {

        twodshape::display();

    }

};
class square:public twodshape
{
private:
    float length;
public:
    square(string c,float l):twodshape(c)
    {
        length=l;
    }
    void set1(float l)
    {
        if(l<0)
            length=0;
        else
            length=l;
    }
    float get()
    {
        return length;
    }
    float area()
    {
        return length*length;
    }
     void display()
    {

        twodshape::display();

    }
};
class sphere:public threedshape
{
private:
    float radiuc;
public:
    sphere(string c,float r):threedshape(c)
    {
        radiuc=r;
    }
    void set1(float r)
    {
        if(r<0)
            radiuc=0;
        else
            radiuc=r;
    }
    float get()
    {
        return radiuc;
    }
    float surfacearea()
    {
        return 3.14*4*radiuc*radiuc;
    }
    float volume()
    {
        return 4.0/3*3.14*radiuc*radiuc*radiuc;
    }
    void display()
    {

        threedshape::display();

    }
};
class cylinder: public threedshape
{
private:
    float radius;
    float hight;
public:
    cylinder(string c,float r,float h):threedshape(c)
    {
        radius=r;
        hight=h;
    }
    void set1(float r)
    {
        if(r<0)
            radius=0;
        else
            radius=r;
    }
    void set2(float h)
    {
        if(h<0)
            hight=0;
        else
            hight=h;
    }
    float get1()
    {
        return radius;
    }
    float get2()
    {
        return hight;
    }
    float surfacearea()
    {
        return 2*3.14*radius*hight+2*3.14*radius*radius;
    }
    float volume()
    {
        return 3.14*radius*radius*hight;
    }
    void display()
    {

        threedshape::display();

    }


};
int main()
{
    twodshape *s;
    circule s1("pink",4.5);
    s=&s1;
    cout<<"the info of circle is"<<endl;
    s->display();
    cout<<"the area is:"<<s->area()<<endl;
    cout<<endl;
    square s2("red",4);
    s=&s2;
    cout<<"the info of square is"<<endl;
    s->display();
    cout<<"the area is:"<<s->area()<<endl;
    cout<<endl;
    //----------------------------------------------------------------------------------------
    threedshape *c;
//threedshape* m;
    sphere c1("white",3);
    c=&c1;
    cout<<"the info of sphere is"<<endl;
    c->display();
    cout<<"the area is:"<<c->surfacearea()<<endl;
    cout<<"the volume is:"<<c->volume()<<endl;
    cout<<endl;
    cylinder c2("red",2,4);
    c=&c2;
    cout<<"the info of cylinder is"<<endl;
    c->display();
    cout<<"the area is:"<<c->surfacearea()<<endl;
    cout<<"the volume is:"<<c->volume()<<endl;



}
