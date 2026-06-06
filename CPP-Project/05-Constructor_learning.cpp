#include<iostream>
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
int main(){
    TreeNode* leftnode = new TreeNode('A',10);
    TreeNode* rightnode = new TreeNode('B',20);
    
    int sum= leftnode -> frequency + rightnode -> frequency;
    TreeNode* ParentNode = new TreeNode('$',sum);
   
    ParentNode -> left = leftnode;
    ParentNode -> right = rightnode;
    
    cout << ParentNode -> left -> data << endl;
    cout << ParentNode -> frequency;
    
    return 0;
    
}