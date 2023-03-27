
#include <iostream>

using namespace std;

struct Crop {
    int crop_id;
    string crop_name;
    string crop_type;
    string region;
    string plantation_season;
};

int main() {
    Crop crops[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter Crop ID: ";
        cin >> crops[i].crop_id;
        cin.ignore();

        cout << "Enter Crop Name: ";
        getline(cin, crops[i].crop_name);

        cout << "Enter Crop Type: ";
        getline(cin, crops[i].crop_type);

        cout << "Enter Region: ";
        getline(cin, crops[i].region);

        cout << "Enter Plantation Season: ";
        getline(cin, crops[i].plantation_season);

        cout << endl;
    }

    cout << "Crops Entered:\n\n";
    for (int i = 0; i < 5; i++) {
        cout << "Crop ID: " << crops[i].crop_id << endl;
        cout << "Crop Name: " << crops[i].crop_name << endl;
        cout << "Crop Type: " << crops[i].crop_type << endl;
        cout << "Region: " << crops[i].region << endl;
        cout << "Plantation Season: " << crops[i].plantation_season << endl << endl;
    }

    return 0;
}
