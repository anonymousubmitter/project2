#include "NBTree.h"

int main()
{
    NBTree* nbtree = new NBTree("tree-config.txt");

    for (int i =0; i < 10000; i++)
    {   
        long key = i;
        long value = i;
        char* val = new char[sizeof(long)];
        memcpy(val, &value, sizeof(long));

        nbtree->insertAtRoot(key, val);
        //std::cout << "inserted:" <<key << ", " << value << std::endl;
    }   


    for (int i =0; i < 10000; i++)
    {   
        long key = i;
        long found = nbtree->find(key);
        if (found != i)
        {
            std::cout << "failed" <<key << ", " << found << std::endl;
            return 0;
        }
    }   
    std::cout << "success"<< std::endl;
}

