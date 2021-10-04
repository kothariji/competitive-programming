//Implement an algorithm “Unique” to check if all elements of a given set of
//integers are distinct.
#include <iostream>
using namespace std;


int main()
{

    int arr[10] = {10, 20, 50, 90, 30, 60, 35, 40, 85, 90};
    int i, k, origVal = 0, newVal = 0;


    for (i = 0; i < 10; i++)
    {
        origVal = arr[i];

        for (k = i+1; k < 10; k++)
        {

            if (origVal == arr[k])
            {
                newVal = 1;
                break;
            }

        }

        if (newVal ){break;}

    }

    if (newVal == 1)
    {
        cout<<"The Array does not contain completely distinct values"<<endl;
    }
    else 
    {
        cout<< "The Array is distinct"<<endl;
    }

system("PAUSE");
return 0;

}
