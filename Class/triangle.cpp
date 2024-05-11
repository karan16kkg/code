#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int l = 0 , h = n,le ;
    int possible;
    while(l<=h)
    {
        int mid=(l+h)/2;
        int a = mid*(mid+1)/2;
        if (a <= n)
        {
            le=n-a;
            possible = mid;
            l=mid+1;
        }
        else
        {
            h= mid-1;
        }
    }
    cout << possible <<endl;
    cout << le ;
    return 0;

}