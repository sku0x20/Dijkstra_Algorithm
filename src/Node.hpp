#ifndef NODE_HPP
#define NODE_HPP

#include <memory>
#include <string>
#include <map>

using namespace std;

class Node {
   private:
    int cost;
    string name;
    // map<weak_ptr<Node>, int> nodes;

   public:
    Node(string name);
    ~Node();
    void setCost(int value);
    int getCost();
    string getName();
    // void addNode(weak_ptr<Node> node, int cost);
    bool equals(const shared_ptr<Node> other);
};

#endif