 #include <iostream>
using namespace std;

 

int moves=0;
void tower_of_hanoi(int n, char source_tower, char destination_tower, char auxiliary_tower) {
    if (n == 1) {
        cout << "Move disk "<<n<<" from " << source_tower << " to " << destination_tower << endl;
        moves++;
        return;
    }
    tower_of_hanoi(n-1, source_tower, auxiliary_tower, destination_tower);
    cout << "Move disk " << n << " from " << source_tower << " to " << destination_tower << endl;
    tower_of_hanoi(n-1, auxiliary_tower, destination_tower, source_tower);
    moves++;
}

int main() {
    int n;
    cout << "Enter the number of disks to move from one rod to another using 3 rods only: ";
    cin >> n;
    tower_of_hanoi(n, 'A', 'B', 'C');
    cout<<" Total No. of moves = "<<moves;
    return 0;
}
 
