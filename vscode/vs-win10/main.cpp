#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a[5] ={1,2,3,4,5};
    vector<int> num(a, a+5);
    num.push_back(6);

    for(int i = 0; i < num.size(); ++i)
        cout << num[i] << " ";
    cout << endl;

    cout << "hello" << endl;
    return 0;
}