
#include<iostream>
using namespace std;
class Rect{
    public:
  float w,h;
  void SetWidth(float width)
    {
        w=width;
    }
    void SetHieght(float hieght){
        h=hieght;
    }
    float GetWidth(){
        return w;
       
    }
    float GetHieght(){
        return h;
    }
   
};
int main(){
    float tx,ty;
    float bx,by;
    Rect x;
    cout<<"Enter the bottom right corner length: ";
    cin>>bx>>by;
    cout<<"Enter the top left corner length: ";
    cin>>tx>>ty;
    x.SetWidth(bx+by);
    x.SetHieght(tx+ty);
    float wid=x.GetWidth();
    float hei=x.GetHieght();
    cout<<"The Width is: "<<wid<<endl;
    cout<<"The hieght is :"<<hei;
    return 0;
     
}