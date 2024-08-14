//only works if comments are first line, and the moment of input assumes a terminal.  I will have to get that figured out. Not now tho.
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {

int t=1000;
//desired input either file or copy and pasted.
//first trim though for trailing spaces and lines
//can only store as much as the size of thes tring but I will add better features soon.
//either with better strings or utilizing more strings when necessary
//comments will be hard to remove.  It should be added after. storing their original locations in an array just in case they want to retrieve their original locationa gian.
//but too be honest comments are obselete in an auto shortener anyway and their file is already safety stored.
//for this code to deeal with other fucntions in c++, i first gotta learn them and how to put them in one line.
//this might actaully be a hard project.

//1. Auto format
//2. clean up code ( remove unnecessary garbage code )
//3. Compress
string firstline;
getline(cin,firstline);

string sigma="";

while(t--){
string line;
getline(cin,line);
if(line[0]=='/'&&line[1]=='/'){
    continue;
}
sigma+=line;
}
cout<<firstline<<"\n";
cout<<sigma<<"\n";

}
