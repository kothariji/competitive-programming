#include <iostream>
using namespace std;
 
int main()
{
    int no_shapes,no_faces=0;
    string shape;
    cin>>no_shapes;
    for(int i=0;i<no_shapes;i++)
    {
        cin>>shape;
        if(shape=="Tetrahedron")
        {
            no_faces+=4;
        }
        else if(shape=="Cube")
        {
            no_faces+=6;
        }
        else if(shape=="Octahedron")
        {
            no_faces+=8;
        }
        else if(shape=="Dodecahedron")
        {
            no_faces+=12;
        }
        else
        {
            no_faces+=20;
        }
 
    }
cout<<no_faces;
 
    return 0;
}