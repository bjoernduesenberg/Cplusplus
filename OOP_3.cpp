#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel { // Classes are user defined data types
// Attributes of this class - by default private, to use the attributes use public.
private: // as private access modifier, the user cant change the values
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishesVideoTitles;

public:
    // Create a constructor
    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }
    // Create a methode
    void GetInfo() { // Writes out informations about our YoutubeChannel
        cout << "Name: " << Name << endl;
        cout << "Owner name: " << OwnerName << endl;
        cout << "Count: " << SubscribersCount << endl;
        cout << "Stuff in list: " << endl;
        for(string videoTitle: PublishesVideoTitles) {
            cout << videoTitle << endl;
        }
    }
    // Only with methods it is possible to change the private value, in this case subscriberscount +1 or -1
    void Subscribe(){
        SubscribersCount++;
    }

    void Unsubscribe(){
        if(SubscribersCount > 0) {
            SubscribersCount--;
        }
    }

    void PublicVideo(string title){
        PublishesVideoTitles.push_back(title);
    }

    void GetName(){
        cout << Name;
    }

    void SetName(string name){
        Name = name;
    }
};

int main()
{
// Create OBJECT of the new class with the constructor: 

    YouTubeChannel ytChannel("Duese", "Bjoern"); 
    // Assign values to PuplishesVideoTitles list -- Now that the attributes are private, it is not possible to change them
    // ytChannel.PublishesVideoTitles.push_back("OOP");
    // ytChannel.PublishesVideoTitles.push_back("Python");
    // ytChannel.PublishesVideoTitles.push_back("ATM");

    // To Un-/Subscribe
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Unsubscribe();

    // To publish videos
    ytChannel.PublicVideo("ParticleTech 1");
    ytChannel.PublicVideo("Mech VT");

    // Use the methode
    ytChannel.GetInfo();

    ytChannel.GetName();
    ytChannel.SetName("Purzel");
    cout << "\n";
    ytChannel.GetName();

    system("pause>0");
    return 0;
}