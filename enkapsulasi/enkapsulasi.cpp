#include <iostream>
using namespace std;

class remoteLampu
{
private:
    string saklarNo[10];

public:
    void setSaklarNo(int i, string value)
    {
        saklarNo[i] = value;
    }
    string getSaklarNo(int i)
    {
        return saklarNo[i];
    }
};

int main()
{
    remoteLampu lampurumah;

    lampurumah.setSaklarNo(0, "lampu teras rumah");
    lampurumah.setSaklarNo(1, "lampu ruang tamu");
    lampurumah.setSaklarNo(2, "lampu kamar tidur");
    lampurumah.setSaklarNo(3, "lampu tidur");

    cout << lampurumah.getSaklarNo(0) << endl;
    cout << lampurumah.getSaklarNo(1) << endl;
    cout << lampurumah.getSaklarNo(2) << endl;
    cout << lampurumah.getSaklarNo(3) << endl;

    return 0;
}