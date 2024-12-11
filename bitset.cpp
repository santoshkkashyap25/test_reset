#include <bits/stdc++.h>
using namespace std;

int main()
{

bitset<10> bs; // fixed size sequence of binary digits so can't be resized and no iterator is provided
bs[2]=1; // set the bit 2
bs[5]=1;
bs[8]=1;
cout<<bs<<"\n";
cout<<bs[5]<<"\n"; // individual bits can be manipulated
cout<<bs[6]<<"\n";

bitset<10> bs2("0100001110");// lsb to msb
// bitset functions
bs2.set(4); // set the 4th bit
bs2.flip(5); // flip the 5th bit
bs2.reset(6); // reset the 6th bit
cout<<bs2.any()<<"\n"; // check if any bit is set
cout<<bs2.none()<<"\n"; // check if no bit is set
cout<<bs2<<"\n";
cout<<bs2.count()<<"\n"; // count the number of set bits

// bitwise operations can be performed
cout<<(bs&bs2)<<"\n";
cout<<(bs|bs2)<<"\n";
cout<<(bs^bs2)<<"\n"; 

bitset<4> bs3(16); // bitset of 7 will stored in 4 bits & if larger value is stored in less bits then it is truncated from left 
cout<<bs3<<"\n";

}