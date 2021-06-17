#include <iostream>
#include <ArrayList.h>
#include <LinkedList.h>

int main()
{

    // Initializing ArrayList
    ArrayList arr;

    // Adding values to ArrayList
    for (int i = 0; i < 7; i++) {
        arr.add(i + 1);
    }
    std::cout << "Initial ArrayList:" << std::endl;
    arr.print();

    // Inserting at index
    std::cout << "Inserting 15 at index 2:" << std::endl;
    arr.add(2, 15);
    arr.print();

    // Removing at index
    std::cout << "Removing value at index 4:" << std::endl;
    arr.remove(4);
    arr.print();

    std::cout << std::endl;

    // Initializing LinkedList
    LinkedList list;

    // Adding values to LinkedList
    std::cout << "Initial LinkedList:" << std::endl;
    for (int i = 0; i < 10; i++) {
        list.insertEnd(i + 1);
    }
    list.print();

    // Inserting at beginning
    std::cout << "Inserting 32 then 36 at beginning:" << std::endl;
    list.insertBeg(32);
    list.insertBeg(36);
    list.print();

    // Inserting at index
    std::cout << "Inserting 23 at index 4:" << std::endl;
    list.insertAt(4, 23);
    list.print();

    // Deleting value at index
    std::cout << "Deleting value at index 2:" << std::endl;
    list.remove(2);
    list.print();

    return 0;
}
