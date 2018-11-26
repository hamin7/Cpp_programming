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

4. Override the operator + in the Digit class, so that it adds the numeric value of two digits
and delivers the digit that we get if we finally apply "modulo 10"
~~~cpp
class Digit : public Character{
	public:
	Digit operator + (const Digit &rDigit){
		Digit Dig_Ret;
		Dig_Ret.ch = (((ch - '0') + (rDigit.ch - '0')) % 10) + '0';
		return Dig_Ret;
	}
};
~~~

5. Extend the Object class by an object counter that counts the number of created objects for
all objects of the above class hierarchy. (Tip: Lecture 9 slide 5)
The counter should be embedded into the Object-class default constructor.
~~~cpp
class Object{
	public:
	static int Int_Count;
	Object(){
		++Int_Count;
		cout << "Current Object created : " << Int_Count << endl;
	}
};
int Object::Int_Count = 0;
~~~

6. Change the visibility of the attribute ch, so that it is visible in all subclasses,
but inaccessible from outside. Create a get-set method pair for the attribute ch.
~~~cpp
class Character : public Object{
	public:
	char ch;
	Character operator + (const Character &rCharacter)
	{
		Character Char_Ret;
		Char_Ret.ch = (ch + rCharacter.ch) % 128;     // ASCII
		return Char_Ret;
	}
	char GetCh(){
		return ch;
	}
	void SetCh(char a_Ch){
		ch = a_Ch;
	}
	protected:
	char ch;
};
~~~

7. Create a main-method, where you create 2 objects of each class in the above class hierarchy
and that prints finally the value of your object counter (this should be 10).
~~~cpp
int main(){
	Character ch[2];
	Digit dig[2];
	Letter let[2];
	Vowel vow[2];
	Consonant con[2];
}
~~~

8. Full code
~~~cpp
#include <iostream>
using namespace std;

class Object{
	public:
	static int Int_Count;
	Object(){
		++Int_Count;
		cout << "Current Object created : " << Int_Count << endl;
	}
};
int Object::Int_Count = 0;

class Character : public Object{
	public:
	Character operator + (const Character &rCharacter)
	{
		Character Char_Ret;
		Char_Ret.ch = (ch + rCharacter.ch) % 128;     // ASCII
		return Char_Ret;
	}
	char GetCh(){
		return ch;
	}
	void SetCh(char a_Ch){
		ch = a_Ch;
	}
	protected:
	char ch;
};
class Digit : public Character{
	public:
	Digit operator + (const Digit &rDigit){
		Digit Dig_Ret;
		Dig_Ret.ch = (((ch - '0') + (rDigit.ch - '0')) % 10) + '0';
		return Dig_Ret;
	}
};
class Letter : public Character{
	
};
class Vowel : public Letter{
	
};
class Consonant : public Letter{
	
};

int main(){
	Character ch[2];
	Digit dig[2];
	Letter let[2];
	Vowel vow[2];
	Consonant con[2];
}
~~~
