#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main ()
{
  fstream f4;
  f4.open ("data.txt");
  int count = 0;
 
  char word[20];
  if (!f4)
 
    {
      cout << "error" << "\n";
    }
  else
    {
      while (!f4.eof ())
	{
	  f4 >> word;	
	  if(strlen(word)>1)
	  {
  
            if(word[strlen(word)-1]=='s')
                count++;	      
	  }
	  else
	  {
	      continue;
	  }
	}
    }
  cout << "Total no of words that have end s= " << count << "\n";

   f4.close();
}

