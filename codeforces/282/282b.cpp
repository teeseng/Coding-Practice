#include <iostream>
#define abs(x) (((x > 0)) ? x : -1 * x));  

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ai, gi;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if(abs(ai+a-gi) <= 500)
        {
            cout << "A";
            ai += a;
        }
        else 
        {
            cout << "G";
            gi += b;
        }
    }


    return 0;
}
