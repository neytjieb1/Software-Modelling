#include "memosender.h"

using namespace std;

int main()
{
    MemoSender sender("August 10, 2011", "Please remember the meeting tomorrow at 10h30!", "Greetings, your Boss");

    string phoneNumbers[6] = {"0124602797", "0124567893", };

    string method[6] = {"WA", "Telegram", "MixIt", "WeChat", "Telegram", "MixIt"};

    sender.sendBatch(method, 6, phoneNumbers);

    return 1;
}