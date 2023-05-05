#include <iostream>
#include <unordered_map>

using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL;

        unordered_map<Node*, Node*> m;

        // Create a copy of each node and store it in the hash map
        for (Node* node = head; node; node = node->next) {
            m[node] = new Node(node->val);
        }

        // Set the next and random pointers for the new nodes
        for (Node* node = head; node; node = node->next) {
            m[node]->next = m[node->next];
            m[node]->random = m[node->random];
        }

        return m[head];
    }
};

int main() {
    // Create a sample linked list with random pointers
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->random = head->next->next;
    head->next->random = head;
    head->next->next->random = head->next;
    head->next->next->next->random = head->next->next;

    // Clone the linked list
    Solution sol;
    Node* clonedHead = sol.copyRandomList(head);

    // Print the original and cloned lists
    cout << "Original list: ";
    for (Node* node = head; node; node = node->next) {
        cout << "[" << node->val << ", " << node->random->val << "] -> ";
    }
    cout << "NULL" << endl;

    cout << "Cloned list: ";
    for (Node* node = clonedHead; node; node = node->next) {
        cout << "[" << node->val << ", " << node->random->val << "] -> ";
    }
    cout << "NULL" << endl;

    return 0;
}
