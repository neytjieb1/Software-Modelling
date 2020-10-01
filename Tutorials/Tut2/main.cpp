#include "memosender.h"
#include "Staff.h"
#include <string>
using namespace std;

int main()
{
    MemoSender sender("August 10, 2011", "Please remember the meeting tomorrow at 10h30!", "Greetings, your Boss");

    string names[] = {"Jo", "Benny", "Peter", "Lucy", "Timothy", "Dee"};
    string emails[] = {"jo@bird.com", "ben@bird.com", "pet@bird.com", "lu@bird.com", "tim@bird.com", "dee@bird.com"};
    string phones[] = {"0123456789","1234567890","2345678901","3456789012","4567890123","5678901234"};
    contactOptions methods[] = {WA, Email, WA, Email, WA, Email};
    Staff* staffMembers[6];
    for (int i = 0; i < 6; ++i) {
        staffMembers[i] = new Staff(names[i],emails[i],phones[i], methods[i]);
    }

    sender.sendBatch(staffMembers, 6);

    return 0;
}