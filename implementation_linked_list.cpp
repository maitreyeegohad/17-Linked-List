#include <iostream>
using namespace std;

class Link{
    public:
    int data; 
    Link* next;
    
    Link(int num){
        data = num;
        next = NULL;
    }
    void disp(){
        std::cout<<data<<" "<<next<<std::endl;
    }
};
int main() {
    Link* l1 = new Link(6);
    std::cout<<l1->data<<" "<<l1->next<<std::endl;
    l1->disp();
    return 0;
}

/*
Output:
6 0
6 0
*/
