#include <iostream>
using namespace std;
class myclass
{
    public:
    myclass()
    {
    cout<<"constructor"<<endl;
    }
    ~myclass()
    {
        cout<<"Distructor";
    }
};
int main()
{
myclass obj;
return 0;
}