#include "Password.h"
#include <cctype>
#include <set>
#include <string>

using std::string;

/*
  The function receives a string counts how many times the same character 
  occurs at the beginning of the string, before any other characters (or the
  end of the string). The function is case-sensitive so 'Z' is different than
  'z' and any ASCII characters are allowed.
*/
int Password::count_leading_characters(string phrase){
  if (phrase.empty())
  {
    return 0;
  }

  int repetition = 1;
  string::size_type index = 0;
  while( index < phrase.length()-1 && phrase[index] == phrase[index+1] ){
    repetition++;
    index++;
  }
  return repetition;
}

unsigned int Password::unique_characters(string str)
{
  std::set<char> seen;
  for (char ch : str)
  {
    seen.insert(ch);
  }
  return seen.size();
}

bool Password::has_mixed_case(string str)
{
  bool has_lower = false;
  bool has_upper = false;
  for (char ch : str)
  {
    if (std::islower(static_cast<unsigned char>(ch)))
    {
      has_lower = true;
    }
    else if (std::isupper(static_cast<unsigned char>(ch)))
    {
      has_upper = true;
    }
  }
  return has_lower && has_upper;
}
