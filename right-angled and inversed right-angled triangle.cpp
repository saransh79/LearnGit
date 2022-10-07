#include <iostream>
using namespace std;
/*Pattern generated in this program
**********
*********
********
*******
******
*****
****
***
**
*
+
++
+++
++++
+++++
++++++
+++++++
++++++++
+++++++++
++++++++++*/

#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "this program is used to generate the right-angled triangle pattern \nand inversed right-angled triangle pattern using + and * \n";
    cout << "The minimum number of rows is 1\n";
    cout << "Enter the number of rows that you wish to print out: ";
    cin >> rows;
    while (rows < 1) // input validation
    {
        cout << "Invalid input\n";
        cout << "Please enter the number of rows that you wish to print out: ";
        cin >> rows;
    }
    cout << endl;

    // for the inversed right-angled triangle pattern
    for (int k = 0; k < rows; k++) // rows
    {
        for (int l = 0; l < rows - k; l++)
        {
            cout << "*"; // jump to the next row
        }
        cout << endl;
    }
    // for the right-angled triangle pattern
    for (int i = 0; i < rows; i++) // rows
    {
        for (int j = 0; j <= i; j++) // columns
        {
            cout << "+";
        }
        cout << endl; // jump to the next row.
    }

    return 0;
}