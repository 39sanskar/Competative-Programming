// B. Chat Order
// time limit per test3 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Polycarp is a big lover of killing time in social networks. A page with a chatlist in his favourite network is made so that when a message is sent to some friend, his friend's chat rises to the very top of the page. The relative order of the other chats doesn't change. If there was no chat with this friend before, then a new chat is simply inserted to the top of the list.

// Assuming that the chat list is initially empty, given the sequence of Polycaprus' messages make a list of chats after all of his messages are processed. Assume that no friend wrote any message to Polycarpus.

// Input
// The first line contains integer n (1 ≤ n ≤ 200 000) — the number of Polycarpus' messages. Next n lines enlist the message recipients in the order in which the messages were sent. The name of each participant is a non-empty sequence of lowercase English letters of length at most 10.

// Output
// Print all the recipients to who Polycarp talked to in the order of chats with them, from top to bottom.

// Examples
// inputCopy
// 4
// alex
// ivan
// roman
// ivan
// outputCopy
// ivan
// roman
// alex
// inputCopy
// 8
// alina
// maria
// ekaterina
// darya
// darya
// ekaterina
// maria
// alina
// outputCopy
// alina
// maria
// ekaterina
// darya
// Note
// In the first test case Polycarpus first writes to friend by name "alex", and the list looks as follows:

// alex
// Then Polycarpus writes to friend by name "ivan" and the list looks as follows:

// ivan
// alex
// Polycarpus writes the third message to friend by name "roman" and the list looks as follows:

// roman
// ivan
// alex
// Polycarpus writes the fourth message to friend by name "ivan", to who he has already sent a message, so the list of chats changes as follows:

// ivan
// roman
// alex
#include <iostream>
#include <unordered_map>
#include <list>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    list<string> chatOrder; // to maintain order of chats
    unordered_map<string, list<string>::iterator> position; // to store position of chats

    for (int i = 0; i < n; ++i) {
        string friendName;
        cin >> friendName;

        // Check if friend already exists in chat order
        if (position.count(friendName)) {
            // Move existing chat to the front of the list
            chatOrder.erase(position[friendName]);
        }
        
        // Insert friend's chat at the front of the list
        chatOrder.push_front(friendName);
        // Update position in the map
        position[friendName] = chatOrder.begin();
    }

    // Output the final chat order from top to bottom
    for (const auto& friendName : chatOrder) {
        cout << friendName << endl;
    }

    return 0;
}
