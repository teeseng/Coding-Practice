#include <iostream>
#include <map>
using namespace std;

long long factorial(int n)
{
    long long r = 1;
    for(int i = 1; i <= n; i++)
    {
        r *= i;
    }
    return r;
}

int main() 
{
    int n;
    cin >> n;
    map<int,int> vals;
    map<int,int>:: iterator it;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if((it = vals.find(a)) != vals.end())
            (it->second)++;
        else
            vals.insert(pair<int,int>(a,1)); 
    }
    long long p = factorial(n);
    for(it = vals.begin(); it != vals.end(); ++it)
    {
        
    }
    
    
    return 0;
}
