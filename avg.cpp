#include<iostream>

using namespace std;

int main() {
    int a[100],i,j,k;
    float m,n=0;
    float average;
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        n=n+a[i];
    }
    average=n/m;
    //cout << "Enter 5 numbers: " << endl;
    //cin >> a >> b >> c >> d >> e;
    //average = float(a + b + c)/3.0;
    cout << "Average = " << average << endl;

    return 0;
}
