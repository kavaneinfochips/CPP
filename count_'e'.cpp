#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main ()
{
  fstream f3;
  f3.open ("data.txt");
  int count = 0;
 
  char word[20];
  if (!f3)
 
    {
      cout << "error" << endl;
    }
  else
    {
      while (!f3.eof ())
	{
	  f3 >> word;	
	  if(strlen(word)>1)
	  {
  
            if(word[0]=='e')
                count++;
	      
	  }
	  else
	  {
	      continue;
	  }
	}
    }
  cout << "Total no of words that start with e'= " << count << endl;

   f3.close();
}

