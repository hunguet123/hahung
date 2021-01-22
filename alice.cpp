#include <iostream>

using namespace std;

int main()
{
    int x ,y;
    cout << "Alice nhap so vao 2 the " << endl ;
    cout << "The thu nhat: "; cin >> x;
    cout << "The thu hai: "; cin >> y;
    cout << "Bob chon the thu may: ";
    int Bob;
    cin >> Bob;
    if (Bob == 1)
    {
        if ( x < 50) cout << "Bob chon the thu hai";
        else if (x >= 50) cout << "Bob chon the thu nhat";
    }
    else if(Bob == 2)
    {
        if ( y < 50) cout << "Bob chon the thu nhat";
        else if (y >= 50) cout << "Bob chon the thu hai";
    }
    return 0;
}
