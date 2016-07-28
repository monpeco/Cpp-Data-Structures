#include <iostream>
using namespace std;

    struct V3 {
      double x, y, z;
      double dot(V3 b){
        double ans;
        ans=x*b.x+y*b.y+z*b.z;
        return ans;
      }

      V3 cross(V3 b){
      V3 v;
      v.x=y*b.z-z*b.y;
      v.y=z*b.x-x*b.z;
      v.z=x*b.y-y*b.x;
      return v;
      }

    };

    struct parallelepiped{
        V3 a,b,c;
        double Volume(){
            double ans;
            ans=a.dot(b.cross(c));
            if(ans<0) ans=-ans;
            return ans;
        }
    };
    
    int main(){
        V3 v1, v2, v3;
        v1.x=8;
        v1.y=7;
        v1.z=3;
        v2.x=14;
        v2.y=2;
        v2.z=9;
        v3.x=14;
        v3.y=3;
        v3.z=9;

        parallelepiped p;
        p.a=v1;
        p.b=v2;
        p.c=v3;

        double Volume;
        Volume=p.Volume();

        cout<<Volume;
    	return 0;
     }