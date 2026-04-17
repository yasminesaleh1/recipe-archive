// This is the main file from which the program will be run.
/* I consulted GeeksforGeeks to learn the code for connecting and utilizing Sqlite with C++
https://www.geeksforgeeks.org/cpp/sql-using-c-c-and-sqlite/?ysclid=mmqjj3jnyt332503186.    */

#include <sqlite3.h>
#include "binarytree.h"



int main() {

    // Opening sqlite database
    sqlite3 *database;
    int exit = 0;
    exit = sqlite3_open("recipes.db", &database);

    if (exit) {  // if it didn't return 0  (0 on success)
          cerr << "Error opening recipe database." << sqlite3_errmsg(database) << endl;
          return -1;
    }  
    else 
        cout << "Recipe database successfully opened!" << endl; 

    





    sqlite3_close(database);
    return 0;
}