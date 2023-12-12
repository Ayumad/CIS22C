/* /// CIS22C-HM6 : This single file will contain all the code for Homework 6.
Ayush Madhukar

Homework 6 Graphs Finding the Vertices

You are writing a graphical algorithm which, given a initial Vertex name
and a pre-filled Graph object, will collect and return the complete and
unique (no duplicate entries) list of the names of all reachable Vertices
in that graph starting from the initial Vertex.
 */
#include <iostream>
using namespace std;

struct Edge
{                  // In both To and From Graph Hash Buckets
    string start;  // Starting Vertex Name: A (Key in FROM Bag)
    string end;    // Ending Vertex Name : B (Key in TO Bag)
    double weight; // Cost of edge: 14.0
}
