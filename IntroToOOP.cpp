#include <iostream>
#include <list>
using namespace std;

// Example

class YouTubeChannel { // Classes are user defined data types
// Attributes of this class - by default private, to use the attributes use public.
public:
    string name;
    string ownerName;
    int subscribersCount;
    list<string> publishesVideoTitles;
};

int main()
{
// Create OBJECT of the new class:
    YouTubeChannel ytChannel; 
    ytChannel.name = "Duese";
    ytChannel.ownerName = "Bjoern";
    ytChannel.subscribersCount = 1800;
    ytChannel.publishesVideoTitles = {"ATM", "Generic Functions", "Loops"};

// Get infos from objects
    cout << "Name: " << ytChannel.name << endl;
    cout << "Owner name: " << ytChannel.ownerName << endl;
    cout << "Count: " << ytChannel.subscribersCount << endl;
    cout << "Stuff in list: " << endl;
    for(string videoTitle: ytChannel.publishesVideoTitles) {
        cout << videoTitle << endl;
    }


    return 0;  
}