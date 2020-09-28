//
// Created by jo on 2020/09/21.
//

#ifndef A3_NODE_H
#define A3_NODE_H

template <typename T>
class Node {
public:
    T element;
    Node *next;
    Node *previous;
};

#endif //A3_NODE_H
