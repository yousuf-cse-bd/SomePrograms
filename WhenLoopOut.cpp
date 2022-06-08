#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int i, j;
    cout<<"Inside: ";
    for(i = 1; i<=10; i++)
    {
        cout<<i<<" ";
        j = i;
    }

    cout<<"\nOut Side of the Loop j =  "<<j<<"\ni = "<<i<<endl;
    return 0;
}
