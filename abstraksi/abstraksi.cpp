#include <iostream>
using namespace std;

class abstraksiKlas
{
private:
    string x, y;

public:
    // method untuk mengisi nilai
    // private member class
    void setXY(string a, string b)
    {
        x = a;
        y = b;
    }
    // menampilkan nilai
    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main()
{
    abstraksiKlas ak;
    ak.setXY("yogyakarta", "Kampus");
    ak.display();

    return 0;
}