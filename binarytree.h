// This is another header file which will contain the class definition(s)
// for the binary tree(s)

#include "classes.h"

class node {

    public:
        node();
        ~node();
        node *& getLeft();
        void setLeft(node * newLeft);
        node *& getRight();
        void setRight(node * newRight);
        recipe getRecipe();
        void setRecipe(recipe & newRecipe);


    private:
        node * left;
        node * right;
        recipe nodeRecipe; 
    
};