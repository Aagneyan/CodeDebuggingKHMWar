/*
1. Header file error.
2. no namespace defined.
3. Semicolon in 17th line
4. No function prototype
5. Sending an array and recieving a variable in getLIndex
6. Datatypes for getFIndex not defnied.
7. len() is not defined. Changed to strlen
8. Semicolon after while() in getFindex function.
9. Double equals in getLIndex if condition.
10. Return -1 for LIndex.
11. Findex spelling wrong in the function definiton
12. Printing FIndex and LIndex in wrong order
*/

#include <iostream>
#include <string.h> //1
using namespace std; //2
int getLIndex(char[],char); //4A
int getFIndex(char[],char); //4B
int main()
{
	char str[100];
	char ch;
	int Lindex,Findex;
	cin>>str;
	cin>>ch;         //3
	Lindex = getLIndex(str,ch);
	Findex= getFIndex(str,ch);
	if(Lindex!=-1)
		cout<<Lindex<<endl<<Findex; //12
	else
		cout<<"NOT FOUND"<<endl;
	return 0;
}
int getLIndex(char string[100],char c) //5
{
	int size = strlen(string),i=0; //7A
	while(i<size)
	{

		if(string[i]==c){ //9
		    return i;
		   break;
		}
		i++;
	}
  return -1; //10
}
int getFIndex(char string[100], char c) //6 and //11
{
	int size = strlen(string); //7B
	int i=size;
	while( i>=0) //8
{
		if(string[i]==c){
		    return i;
        //break;
		}
	i--;
}

}
/*
SAMPLE INPUT-1
Kerala
a
SAMPLE OUTPUT:1
3
5
SAMPLE INPUT-2
MALAYALaM
A

SAMPLE OUTPUT:2
1
5
*/
