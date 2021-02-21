#include <iostream>
#include <vector>
#include "bst.h"

using namespace std;

int main() {
    BST *r = new BST (10);
    r->insert(r,8);
    r->insert(r,28);
    r->insert(r,1);
    r->insert(r,67);
    r->insert(r,4);
    r->insert(r,9);

    vector<int> ret1;

    r->inorderT(r, ret1);
    
    r= r->deleteNode(r,10);

    vector<int> ret2;
    r->inorderT(r, ret2);
    
    for(auto e: ret1){
        cout<<e<<" ";
    }
    cout<<endl;
    for(auto e: ret2){
        cout<<e<<" ";
    }
    cout<<endl;
    return 0;
}
