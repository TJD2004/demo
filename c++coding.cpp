#include <iostream>
using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int row = 1;

//     while(row<=n) {

//         int col = 1;

//         while(col<=row) {
//             cout<<"*"<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }
// int main() {
//     int n;
//     cin>>n;

//     int row = 1;

//     while(row<=n) {

//         int col = 1;

//         while(col<=row) {
//             cout<<n-col+1;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// int main() {
//     int n;
//     cin>>n;

//     int row = 1;
//     int count = 1;

//     while(row<=n) {

//         int col = 1;

//         while(col<=row) {
//             cout<<count<<" ";
//             col++;
//             count++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// int main() {
//     int n;
//     cin>>n;

//     int row = 1;

//     while(row<=n) {

//         int col = 1;

//         while(col<=row) {
//             cout<<(row+col-1)<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// int main() {
//     int n;
//     cin>>n;

//     int row = 1;

//     while(row<=n) {

//         int col = 1;

//         while(col<=n) {
//             char ch = 'A'+row-1;
//             cout<<ch<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// int main() {
//     int n;
//     cin>>n;

//     int row = 1;

//     while(row<=n) {

//         int col = 1;

//         while(col<=n) {
            
//             char ch = 'A'+col-1;
//             cout<< ch<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// int main() {
//     int n;
//     cin>>n;

//     int row = 1;
//     char ch = 'A';

//     while(row<=n) {

//         int col = 1;

//         while(col<=n) {
            
//             cout<< ch<<" ";
//             ch++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// int main() {
//     int n;
//     cin>>n;

//     int row = 1;
  

//     while(row<=n) {

//         int col = 1;

//         while(col<=n) {

//             char ch = row + col - 2 + 'A' ;
            
//             cout<< ch<<" ";
//             ch++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// int main() {
//     int n;
//     cin>>n;

//     int row = 1;

//     int count = 1;

//     while(row<=n) {

//         int col = 1;

//         while(col<=row) {

//             char ch = count + 'A' - 1 ;
//             cout<< ch<<" ";
//             ch++;
//             count++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// int main() {
//     int n;
//     cin>>n;

//     int row = 1;
    

//     while(row<=n) {

//         int col = 1;

//         while(col<=row) {

//             char ch = 'A' + row + col -2;
//             cout<< ch<<" ";
//             ch++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// int main() {
//     int n;
//     cin>>n;

//     int row = 1;
    

//     while(row<=n) {

//         int col = 1;
//         char ch = 'A' + n - row;
//         while(col<=row) {

//             cout<< ch <<" ";
//             ch++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// int main() {
//     int n;
//     cin>>n;

//     int row = 1;
//     int space = n - row;

//     while(row<=n) {

//         int space = n - row;
//         while(space){

//             cout<<"  ";
//             space--;
//         }

    
//         int col = 1;

//         while(col<=row) {
            
//             cout<<"* ";
            
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// int main() {
//     int n;
//     cin>>n;

//     int row = n;
    

//     while(row>0) {

//         int col = 0;

//         while(col<row) {
            
//             cout<<"*"<<" ";
           
//             col++;
//         }
//         cout<<endl;
//         row--;
//     }

// }

// int main() {

//     int n;
//     cin>>n;

//     int row = 0;

//     while(row<n) {
       
//         int col = 0;

//         while(col<row) {

//            cout<<"  ";

//            col++;
//         }

//         int k = 0;

//         while( k<n-row){

//             cout<<"* ";

//             k++;
//         }



//         cout<<endl;
//         row++;

        
//     }
//     return 0;
   
// }

// int main() {

//     int n;
//     cin>>n;

//     int row = 1;

//     while(row<=n) {

//         int col = 0;

//         while(col<row-1) {
//             cout<<"  ";
//             col++;
//         }

//         int k = 0;

//         while(k<=n-row) {
//             cout<<row<<" ";
//             k++;

//         }

//         cout<<endl;
//         row++;
//     }
//     return 0;
// }


// int main() {
//     int n;
//     cin>>n;

//     int row = 1;

//     while(row<=n) {

//         int space = n - row;
//         while(space) {
//             cout<<"  ";
//             space--;
//         }

//         int col = 1;
//         while(col<=row) {
//             cout<<col<<" ";
//             col++;
//         }

//         int start = row - 1;
//         while(start) {
//             cout<<start<<" ";
//             start--;
//         }

        
//         cout<<endl;
//         row++;

        
//     }
//     return 0;
// }

int main() {
    
    int n;
    cin>>n;

    int row = 1;
    while(row<=n) {
        
        int col =1;
        while(col<=n-row+1){
            cout<<col<<" ";
            col++;
        }

        col = row;
        while(col>=1){
            cout<<"* ";
            col--;

        }

        col = 2;
        while(col<=row){
            cout<<"* ";
            col++;

        }

        col =1;
        while(col<=n-row+1){
            cout<<col<<" ";
            col++;
        }
        cout<<endl;
        row++;    
    }
    return 0;
}