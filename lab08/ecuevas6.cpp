

#include <iostream>
using namespace std;

int * r;
int * s;



void PrintCutRodSolution(int LengthN ){
    
    while (LengthN > 0){
        cout << s[LengthN] << " ";
        LengthN = LengthN - s[LengthN];
    }
    cout << "-1" << endl;
    
}

void ExtendedBottomUpCutRod(int* Prices, int LengthN){
    r = new int[LengthN  + 1];
    s = new int[LengthN + 1];
    r[0] = 0;
    s[0] = 0;
    
    
    for (int j = 1; j <= LengthN; j++){
        int q = -999;
        for(int i = 1; i <= j; i++){
            if( q < Prices[i] + r[j-i] ){
                q = Prices[i] + r[j-i];
                s[j] = i;
                //cout << "s[ j=  " << j << " ] = i is " << i << endl;
            }
        }
        r[j] = q;
        
    }
}


int main (int argc, char **argv) {
  
    int *Prices;
    int LengthN = -1;
  
// Get the size of the sequence

    cin >> LengthN;
    Prices = new int[LengthN + 1];
    Prices[0] = 0;

// Read the Prices
    
    for (int i = 1; i < LengthN + 1; i++)
        cin >> Prices[i];
  
 // Call ExtendedBottomUpCutRod( int * , int)
 
    ExtendedBottomUpCutRod(Prices , LengthN );
   
    
 // output   
    cout << r[LengthN] << endl;
    PrintCutRodSolution( LengthN );
    //printArr(s);
    
// Free allocated space
    
    delete[]Prices;
    delete[]r;
    delete[]s;
  
return 0;

}


 
 
 

