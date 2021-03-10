#include <iostream>
#include <list>
using namespace std;


class YouTubeChannel { // Classes are user defined data types
// Attributes of this class - by default private, to use the attributes use public.
private: // as private access modifier, the user cant change the values
    string Name;
    int SubscribersCount;
    list<string> PublishesVideoTitles;
protected:
    string OwnerName;
    int ContentQuality;
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
    void CheckAnalytics(){
        if(ContentQuality < 5) {
            cout << Name << " has a bad content." << endl; 
        }
        else {
            cout << Name << " has a great content." << endl;
        }
    };
    
};

// Create a derived class from the YT channel
class CookingChannel: public YouTubeChannel {
public: // The attribute has to be public, as in the original (base) class
    // CookingChannel constructor - create the same variables as in the original (base) class
    // Colon ":" OriginalClass(original variables) {} --> passing the input from the new classes constructor into the original one
    CookingChannel(string name, string ownername):YouTubeChannel(name, ownername) {
    }
    // This methode is only invocable by the cooking channel.
    void Practice() {
        cout << "Practicing cooking and learning new recipes..." << endl;
        ContentQuality++;
    }
};

// Second derived class from the YT channel
class SingingChannel: public YouTubeChannel {
public: // The attribute has to be public, as in the original (base) class
    // CookingChannel constructor - create the same variables as in the original (base) class
    // Colon ":" OriginalClass(original variables) {} --> passing the input from the new classes constructor into the original one
    SingingChannel(string name, string ownername):YouTubeChannel(name, ownername) {
    }
    // Same methode as in the first derived channel but with another output
    void Practice() {
        cout << "Practicing singing and learning new songs..." << endl;
    }
};



int main()
{   // Class Name (Parameters)
    CookingChannel cookingYTChannel("BDs Cookingbox", "BD");
    SingingChannel singingYTChannel("Jon's Musicbox", "Jon");
    // Name.Methode()
    cookingYTChannel.Practice();
    singingYTChannel.Practice();

    // Pointers from the base class points to derived class
    // Create pointer for both channel
    YouTubeChannel * yt1 = &cookingYTChannel;
    YouTubeChannel * yt2 = &singingYTChannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

    system("pause>0");
    return 0;
}