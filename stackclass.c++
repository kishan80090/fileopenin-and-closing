#include <iostream>
struct listnode
{
    int data;
    listnode* next;
};
class LinkedList
 {
public:
    listnode* hd;  
    LinkedList()
	 {
        hd = NULL; 
    }
    void addfirst(int data) 
	{
        listnode* node = new listnode();
        node->data = data;
        node->next = hd;
        hd = node;
    }
    void printAll() 
	{
        listnode* temp = hd;
        int count = 0;
        std::cout << "\nList Start\n";
        while (temp != NULL)
		 { 
            std::cout << temp->data << " ";
            temp = temp->next;
            count++;
        }
        std::cout << "\nList End (" << count << " nodes)\n";
    }
    ~LinkedList() 
	{ 
        listnode* temp;
        while (hd != NULL)
		 {
            temp = hd;
            hd = hd->next;
            delete temp;
	   }
    }
};
    int main()
   {
    LinkedList list;
    list.addfirst(5);
    list.addfirst(4);
    list.addfirst(3);
    list.addfirst(2);
    list.addfirst(1);
    list.printAll();
    return 0;
}
