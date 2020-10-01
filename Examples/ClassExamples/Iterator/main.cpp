#include <iostream>
using namespace std;
#include "TemplateMethod.h"

int main() {

    TemplateMethodArrayList* arr1 = new AscendingArrayList;
    TemplateMethodArrayList* arr2 = new DescendingArrayList;
    arr1->insertElement(1);
    if (arr2->isEmpty())
        cout << "Empty" << endl;
    else
        cout << "Non Empty" << endl;


    return 0;
}
