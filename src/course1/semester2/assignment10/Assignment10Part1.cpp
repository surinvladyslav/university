// 7.Написати програму з функціями, яка:
// а) визначає, чи входить список Р1 до списку Р2;
// б) переносить у кінець непорожнього списку Р його перший елемент;
// в) додає до кінця списку Р1 всі елементи списку Р2.
#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class SinglyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    SinglyLinkedList() : head(nullptr), tail(nullptr) {}

    ~SinglyLinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }

    void add(int value) {
        Node* newNode = new Node(value);
        if (tail == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
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

    bool contains(SinglyLinkedList& other) {
        Node* p1 = head;
        while (p1) {
            Node* p2 = other.head;
            Node* temp = p1;

            while (temp && p2 && temp->data == p2->data) {
                temp = temp->next;
                p2 = p2->next;
            }

            if (p2 == nullptr) {
                return true;
            }

            p1 = p1->next;
        }
        return false;
    }

    void moveFirstToEnd() {
        if (head && head->next) {
            Node* first = head;
            head = head->next;
            tail->next = first;
            first->next = nullptr;
            tail = first;
        }
    }

    void append(SinglyLinkedList& other) {
        if (other.head == nullptr) {
            return;
        }

        if (head == nullptr) {
            head = other.head;
            tail = other.tail;
        } else {
            tail->next = other.head;
            tail = other.tail;
        }

        other.head = nullptr;
        other.tail = nullptr;
    }
};

unsigned int linear_congruent_generator() {
    static unsigned int seed = 1;
    seed = (1103515245 * seed + 12345) % (1 << 31);
    return seed;
}

int main() {
    SinglyLinkedList list1;
    SinglyLinkedList list2;

    for (int i = 0; i < 10; ++i) {
        list1.add(linear_congruent_generator() % 100); // Значення від 0 до 99
    }

    list2.add(50);
    list2.add(60);
    list2.add(70);

    std::cout << "Список 1: ";
    list1.print();
    std::cout << "Список 2: ";
    list2.print();

    bool isContained = list1.contains(list2);
    std::cout << "Список 2 входить до Списку 1? " << (isContained ? "Так" : "Ні") << std::endl;

    list1.moveFirstToEnd();
    std::cout << "Список 1 після перенесення першого елемента: ";
    list1.print();

    list1.append(list2);
    std::cout << "Список 1 після додавання Списку 2: ";
    list1.print();

    return 0;
}
