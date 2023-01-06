// Queue implementation using linked list

class Queue { //
    LinkedList ll;

public:
    void push(int val) {
        ll.push_back(val);
    }

    int front() {
        return ll.front();
    }

    void pop() {
        ll.pop_front();
    }

    bool empty() {
        return ll.empty();
    }

    int back() {
        return ll.back();
    }

    int size() {
        return ll.size();
    }

};
