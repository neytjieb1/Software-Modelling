#include <iostream>
#include "SocialSiteUser.h"
#include "ConcreteSocialSiteMediator.h"
#include <fstream>

int main() {
    ConcreteSocialSiteMediator *med = new ConcreteSocialSiteMediator();
    bool loggedIn = false;
    SocialSiteUser *loggedUser;
    string username;
    int input;

    ifstream inFile;
    inFile.open("/home/jo/CLionProjects/Software-Modelling/Assignments/Task4_A3/inputs.txt");
    if (!inFile) {
        cerr << "Unable to open file datafile.txt";
        exit(1);   // call system to stop
    }

    string x;
    while (inFile >> x) {
        do {
            cout << "\nWelcome to SocialSite!\n\n";
            if (loggedIn == false) {
                cout << "What would you like to do?\n";
                cout << "1. Sign Up\n"
                     << "2. Login\n"
                     << "8. Exit\n";
                inFile >> input;
                cout << input << endl;
                if (input == 1) {
                    cout << "Enter your desired username:\n";
                    inFile >> username;
                    cout << username << endl;
                    med->addUser(username);
                } else if (input == 2) {
                    cout << "Enter your username:\n";
                    inFile >> username;
                    cout << username << endl;
                    loggedUser = dynamic_cast<SocialSiteUser * >(med->getUser(username));
                    if (loggedUser != nullptr) {
                        loggedIn = true;
                    }
                }
            } else {
                cout << "You are logged on as: " << loggedUser->getName() << endl;
                cout << "Your status is: " << loggedUser->viewStatus() << endl;
                cout << "What would you like to do?\n";
                cout << "1. Post a message\n"
                     << "2. Change your status\n"
                     << "3. View your inbox\n"
                     << "4. Log out\n";
                inFile >> input;
                cout << input << endl;

                if (input == 1) {
                    string message;
                    cout << "Enter a post:\n";
                    inFile >> message;
                    cout << message << endl;
                    loggedUser->postMessage(message);

                } else if (input == 2) {
                    string response;
                    cout << "Would you like to load a previously saved status?(y/n)\n";
                    inFile >> response;
                    cout << response << endl;
                    if (response == "y") {
                        inFile >> input;
                        loggedUser->loadStatus(input);
                    } else if (response == "n") {
                        string newStatus;
                        cout << "Enter a status:\n";
                        inFile >> newStatus;
                        cout << newStatus << endl;
                        loggedUser->changeStatus(newStatus);
                        cout << "Would you like to save this status?(y/n)\n";
                        inFile >> response;
                        cout << response << endl;
                        if (response == "y") {
                            loggedUser->saveStatus();
                        }
                    }
                } else if (input == 3) {
                    loggedUser->viewInbox();
                } else if (input == 4) {
                    loggedUser = NULL;
                    loggedIn = false;
                }
            }
        } while (input != 8);
    }
    inFile.close();
    delete med;
    return 0;
}
