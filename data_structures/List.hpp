#pragma once
#include "Node.hpp"

class List {
private:
    Node* start;
public:
    List();
    Node* getStart();

    void insert(Cancion* value, int indice);
    void insertFirst(Cancion* value);
    void insertLast(Cancion* value);

    int get(int indice);
    Node* getFirst();
    Node* getLast();

    void remove(int indice);
    bool isEmpty();
    void clear();
    ~List();

    void printList();
};