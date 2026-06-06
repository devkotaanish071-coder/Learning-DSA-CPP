#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;
struct TreeNode{
    char data;
    int frequency;
    TreeNode* left;
    TreeNode* right;

    TreeNode(char character, int freq){
        data = character;
        frequency = freq;
        left = nullptr;
        right = nullptr;
    }
};

struct Compare{
    bool operator()(TreeNode* a, TreeNode* b){
        return a -> frequency > b -> frequency;
    }
};

int main(){

    unordered_map<char, int> frequencyTable;
    frequencyTable['A'] = 10;
    frequencyTable['B'] = 5;

    priority_queue<TreeNode* , vector<TreeNode*> , Compare > minheap;

    for(const auto&[character, count]: frequencyTable){
        minheap.push(new TreeNode (character, count));
    }

    cout << "Top Element:" << minheap.top() -> data << endl;
    cout << "Frequency:" << minheap.top() -> frequency << endl;

    return 0;

}