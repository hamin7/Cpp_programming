Exercise 2:

*Given the following class hierarchy:
1. Create C++ code without attributes and methods for all 6 classes.

~~~cpp
#include <iostream>
using namespace std;

class Object{
	
};
class Character : public Object{
	
};
class Digit : public Character{
	
};
class Letter : public Character{
	
};
class Vowel : public Letter{
	
};
class Consonant : public Letter{
	
};
~~~

2. Extend the class character by a public attribute ch, so that it can store a single character.
~~~cpp
class Character : public Object{
	public:
	char ch;
};
~~~

3. Overload the operator + for the class Character, so that it can add two objects of type Character.
~~~cpp
Character operator + (const Character &rCharacter)
	{
		Character Char_Ret;
		Char_Ret.ch = (ch + rCharacter.ch) % 128;     // ASCII
		return Char_Ret;
	}
~~~
