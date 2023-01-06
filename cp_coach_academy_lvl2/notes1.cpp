class Stack {
    LinkedList ll;
public:
    void push(int v) {
        ll.push_front(v);
    }

    int top() {
        return ll.front();
    }

    void pop() {
        ll.pop_front();
    }

    bool empty() {
        return ll.empty();
    }

    int size() {
        return ll.size();
    }

};