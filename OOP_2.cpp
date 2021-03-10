#include <iostream>
#include <list>
using namespace std;

// Example

class YouTubeChannel { // Classes are user defined data types
// Attributes of this class - by default private, to use the attributes use public.
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishesVideoTitles;

    // Create a constructor
    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }
    // Create a methode
    void GetInfo() {
        cout << "Name: " << Name << endl;
        cout << "Owner name: " << OwnerName << endl;
        cout << "Count: " << SubscribersCount << endl;
        cout << "Stuff in list: " << endl;
        for(string videoTitle: PublishesVideoTitles) {
            cout << videoTitle << endl;
        }
    }
};

int main()
{
// Create OBJECT of the new class with the constructor: 

    YouTubeChannel ytChannel("Duese", "Bjoern"); 
    // Assign values to PuplishesVideoTitles list
    ytChannel.PublishesVideoTitles.push_back("OOP");
    ytChannel.PublishesVideoTitles.push_back("Python");
    ytChannel.PublishesVideoTitles.push_back("ATM");

    // Second object
    YouTubeChannel ytChannel2("Schaefer", "Henrik"); 

    // Use the methode
    ytChannel.GetInfo();
    ytChannel2.GetInfo();

    system("pause>0");
    return 0;
}