#include <iostream>
#include <vector>

using namespace std;
int main(int argc,char*argv[]) {
    vector<int> a(9, 0);
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << endl;
    system("pause");
    return 0;
}
//// 123456