//
// Created by jo on 2020/08/26.
//

#ifndef TUT2_STAFF_H
#define TUT2_STAFF_H
#include <string>
using namespace std;

enum contactOptions {WA, Telegram, Email};

class Staff {
public:

    Staff();
    Staff(string nom, string mail, string cell ,contactOptions method) : name(nom), email(mail), cellphone(cell), contactMethod(method) {};

    const string &getName() const {return name;}
    const string &getEmail() const {return email;}
    const string &getCellphone() const { return cellphone;}
    const contactOptions getContactMethod() const {return this->contactMethod;};

    void setName(const string &name) {this->name = name; }
    void setEmail(const string &email) {this->email = email;}
    void setCellphone(const string &cellphone) { this->cellphone = cellphone;  }
    void setContactMethod(contactOptions method) {this->contactMethod = method;};
private:
    string name;
    string email;
    string cellphone;
    contactOptions contactMethod;



};


#endif //TUT2_STAFF_H
