#include <iostream> 
 
using namespace std; 
 
int main() 
{ 
long long int a[59]={100,1818,1520,28291322,1631,1730,1629,1627,1628,1829,1926,1827,1829,17326970,15316670,14316372,12326272,707113451526069,54251535868,568,7515667,8526267,9516267,95303056064,15360616465,3536464,7546464,3101254,5101250,6091248,1347,1245,1243,1342,1340,1339,1437,1435,1432,1531,1631,17316767,17326767,18326767,18316767,1930,20306666,21311010,2129,2228,22267070,2326,7171,10000,1000000,100000000,10000000000,1000000000000,100000000000000}; 
   for(int j=1;j<53;j++){ 
    for(int i=1;i<75;i++){ 
    if(((i<=a[j]%a[0])&&(i>=((a[j]%a[53])/a[0])))||((i<=((a[j]%a[54])/a[53]))&&(i>=((a[j]%a[55])/a[54])))||((i<=((a[j]%a[56])/a[55]))&&(i>=((a[j]%a[57])/a[56])))||((i<=((a[j]%a[58])/a[57]))&&(i>=a[j]/a[58]))) 
        cout<<"*"; 
    else 
        cout<<" "; 
    } 
    cout<<endl; 
   } 
 
 
 
    return 0; 
} 
