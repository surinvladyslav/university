// 7. Написати програму з функціями, яка:
// а) знаходить максимальний елемент непорожнього списку Р;
// б) визначає, чи входить елемент Е до списку Р;
// в) замінює у списку Р усі входження Е1 на Е2.
#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    ~DoublyLinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }

    void add(int value) {
        Node* newNode = new Node(value);
        if (tail != nullptr) {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        } else {
            head = tail = newNode;
        }
    }

    void print() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    int findMax() {
        if (head == nullptr) {
            throw std::runtime_error("Список порожній");
        }

        int max = head->data;
        Node* current = head->next;
        while (current != nullptr) {
            if (current->data > max) {
                max = current->data;
            }
            current = current->next;
        }
        return max;
    }

    bool contains(int value) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == value) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void replaceAll(int oldValue, int newValue) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == oldValue) {
                current->data = newValue;
            }
            current = current->next;
        }
    }
};

int main() {
    DoublyLinkedList list;

    for (int i = 0; i < 10; ++i) {
        list.add(i); // Додавання значень від 0 до 9
    }

    std::cout << "Список: ";
    list.print();

    int maxElement = list.findMax();
    std::cout << "Максимальний елемент: " << maxElement << std::endl;

    bool containsFive = list.contains(5);
    std::cout << "Чи містить список 5? " << (containsFive ? "Так" : "Ні") << std::endl;

    list.replaceAll(5, 10);

    std::cout << "Список після заміни 5 на 10: ";
    list.print();

    return 0;
}
