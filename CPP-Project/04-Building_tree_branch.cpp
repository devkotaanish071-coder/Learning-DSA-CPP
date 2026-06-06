#include<iostream>
using namespace std;
struct TreeNode{
    char data;
    int frequency;
    TreeNode* left;
    TreeNode* right;
};
int main(){
    TreeNode* leftnode = new TreeNode;
    TreeNode* rightnode = new TreeNode;
    
    leftnode -> data = 'A';
    leftnode -> frequency = 10;
    rightnode -> data = 'B';
    rightnode -> frequency = 20;
    
    //ParentNode
    TreeNode* ParentNode = new TreeNode;
    ParentNode -> data ='$';
    ParentNode -> frequency = leftnode -> frequency + rightnode -> frequency;
    ParentNode -> left = leftnode;
    ParentNode -> right = rightnode;
    
    cout << ParentNode -> left -> data << endl;
    cout << ParentNode -> frequency;
    
    return 0;
    
} 
