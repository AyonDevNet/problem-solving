#include <iostream>
#include <sstream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

struct Node {
    string val;

    Node* prev;

    Node* next;

    Node(string v) : val(v), prev(nullptr), next(nullptr) {}
};

int main() {
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    string line;

    getline(cin, line);

    stringstream ss(line);

    string token;

    Node* head = nullptr;
    
    Node* tail = nullptr;

    unordered_map<string, Node*> addressMap;

    while (ss >> token) {
        if (token == "end") {
            break;
        }

        Node* newNode = new Node(token);

        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        addressMap[token] = newNode;
    }

    Node* current = head;

    int q;
    cin >> q;
    cin.ignore();

    while (q--) {
       
        getline(cin, line);
        
        stringstream cmdStream(line);
       
        string cmd;
       
        cmdStream >> cmd;

        if (cmd == "visit") {
           
            string address;
            
            cmdStream >> address;

            auto it = addressMap.find(address);
           
            if (it != addressMap.end()) {
               
                current = it->second;
              
                cout << current->val << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (cmd == "next") {

            if (current->next != nullptr) {

                current = current->next;

                cout << current->val << endl;

            } 
            
            else {

                cout << "Not Available" << endl;
            }
        } else if (cmd == "prev") {

            if (current->prev != nullptr) {

                current = current->prev;

                cout << current->val << endl;

            } 
            
            else {


                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}