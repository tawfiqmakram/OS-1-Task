#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

// Handle system function prototype.
void handleSystem(int);


// Start files and folders lister.
void listFilesAndFolders()
{
}
// End files and folders lister.
// Start premissions changer.
void changeFilesPermissions()
{
}
// End premissions changer.

// Start files manager
void initFileManagement()
{
}
// End files manager
// Start symblic link files

void symbolicLinkFiles()
{
}

// End symblic link files
// Start Files handler function
void handleSystem(int num)
{
    // handle system function
    if (num == 1)
    {
        listFilesAndFolders();
    }
    else if (num == 2)
    {
        changeFilesPermissions();
    }
    else if (num == 3)
    {
        initFileManagement();
    }
    else if (num == 4)
    {
        symbolicLinkFiles();
    }
    else if (num == 5)
    {
        cout << "Thanks for using our program <3" << endl;
        exit(0);
    }
    else
    {
        cout << "\nPlease enter valid choice!\n" << endl;
    }
}
// End Files handler function

void systemInit()
{
    // starting the main program.
    // Promting user to enter choices.
    cout << "Welcome in your file manager, Enter your choice please : \n" << endl;
    cout << "1. List files/directories.\n2. Change permissions of files.\n3. Make/delete files/directories\n4. Create symbolic link files.\n5. To Exit" << endl;
    
    // task number choice.
    int taskNum = 0;
    cin >> taskNum;

    // Pass the number to the function "handlesystem"
    handleSystem(taskNum);
}

// Main function to start executing the program.
int main()
{
    // System initiallizing function.
    systemInit();

    return 0;
}