#include <bits/stdc++.h>
using namespace std;

/*
Elon Musk discovered the existence of life on Mars in one of his SpaceX expedition. There are three kinds of life form on Mars:

ATHOS - 2 ms after an ATHOS appears, it grows and becomes a PORTHOS (i.e. it disappears and a PORTHOS appears)
PORTHOS - 8 ms after a PORTHOS appears, it grows and becomes an ARAMIS
ARAMIS - 16 ms after an ARAMIS appears it grows up, splits into two ATHOS and disappears
Can you help Elon Musk finding the population of each type on Mars immediately before the time N ms if only 1 ATHOS appeared at time 0 ms?

Input Format
The first and only line of each test case contains a single integer N.

Constraints
1 <= N <= 1600

Output Format
Print a single line containing three space-separated integers - the number of ATHOS, PORTHOS and ARAMIS

Sample Input
3
Sample Output
0 1 0
Explanation
Immediately before the time 2ms, there is only one ATHOS. At 2ms, this ATHOS grows up, so immediately before 3ms, there is only one PORTHOS on Mars.
*/

int main()
{
    int seconds;cin>>seconds;
    long long athos=pow(2,seconds/26),porthos=0,aramis=0;
    seconds %= 26;
    //if(seconds){
    if(seconds>=10){
        aramis=athos;
        athos=0;
    }
    else if(seconds>=2){
        porthos=athos;
        athos=0;
    }
    //}

    cout<<athos<<" "<<porthos<<" "<<aramis<<endl;
    return 0;
}
