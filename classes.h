// This is the header file which will house my class definitions and 
// preprocessor directives for this program

#include <iostream>
#include <string>
using namespace std;


class recipe {
  
    public:
        recipe();
        ~recipe();
        recipe(const recipe & source);   // copy constructor
        recipe & operator=(const recipe & source);   // assignment operator

        int addRecipe();
        int deleteRecipe();
        int editRecipe();


    private:  // may switch to protected
        string difficulty;   // how difficult is it to make
        bool haveTried;   // have I tried the recipe?  True = Yes   No = False
        string opinion;   // my opinion on the recipe 
        string category;  // breakfast, lunch, dessert, beverage, etc
        string link;  // link to the recipe


}; 
