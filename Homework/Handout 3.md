# Exercise 1: Class and object definition
### a) Define a class Student with the following attributes:
Name : char[100]

Number : integer

Courses: Course[10]
~~~cpp
class Student{
	private:
	char Name[100];
	int Number;
	Course Courses[10];
~~~

### b) Make each of the above attributes private and define for each attribute a pair of public get-set-methods 
~~~cpp
class Student{
	private:
	char* Name;
	int Number;
	Course* Courses ;

	public:
	int Course_count;
	
	void SetName(char* pName){
		Name = pName;
	}
	const char* GetName(){
		return Name;
	}
	void SetNumber(int input){
		Number = input;
	}
	void SetCourse(Course input){
		Courses[Course_count] = input;
		Course_count++;
	}
	Course GetCourses(int Int_Index){
		return Courses[Int_Index];
	}
};
~~~

### c) Create a constructor-method for your Student-class for initializing objects of the Student-Class.
~~~cpp
class Student{
	private:
	char* Name;
	int Number;
	Course* Courses ;

	public:
	int Course_count;
	Student(){
		Name = (char *)malloc(64);
		Number = 0;
		Courses = (Course *)malloc(sizeof(Course) * 16);
		Course_count = 0;
	}
	void SetName(char* pName){
		Name = pName;
	}
	const char* GetName(){
		return Name;
	}
	void SetNumber(int input){
		Number = input;
	}
	void SetCourse(Course input){
		Courses[Course_count] = input;
		Course_count++;
	}
	Course GetCourses(int Int_Index){
		return Courses[Int_Index];
	}
};
~~~

### d) Create a class Course with following attributes:

Id: integer

Instructor: char[100]

RoomNr: integer
~~~cpp
class Course{
	public:
	int Id;
	char* Instructor;
	int RoomNr;
};
~~~

### e) Using the above two classes create a simple application that allows the assignment of students to courses (using the Courses attribute of the class Student). Your application should internally store a sequence of Student objects either by using an array of by using a linked list.

~~~cpp
int main(){
	Course Arr_Course[3];
	for ( int i = 0; i < 3; ++i){
		Arr_Course[i].Id = i + 1;
		Arr_Course[i].RoomNr = 101 + i;
	}
	Arr_Course[0].Instructor = "Instructor_1";
	Arr_Course[1].Instructor = "Instructor_2";
	Arr_Course[2].Instructor = "Instructor_3";

	Student Arr_Student[3];
	for (int i = 0; i < 3; i++){
		Arr_Student[i].SetNumber(i + 1);
	}
	Arr_Student[0].SetName("Student_1");
	Arr_Student[1].SetName("Student_2");
	Arr_Student[2].SetName("Student_3");

	Arr_Student[0].SetCourse(Arr_Course[1]);
	Arr_Student[0].SetCourse(Arr_Course[2]);

	Arr_Student[1].SetCourse(Arr_Course[0]);
	Arr_Student[1].SetCourse(Arr_Course[1]);
	Arr_Student[1].SetCourse(Arr_Course[2]);

	Arr_Student[2].SetCourse(Arr_Course[2]);
}
~~~

### f) Extend your application by a query function that prints for a given course-Id the name and number of all students who attend this course.
~~~cpp
void PrintCourseInfo(int Course_ID, Student Arr_Student[], int StudentSize){

	cout << "Course_ID : " << Course_ID << endl;

	for ( int i = 0; i < StudentSize; ++i){
		for ( int j = 0; j < Arr_Student[i].Course_count; ++j){
			if (Course_ID == (Arr_Student[i].GetCourses(j)).Id){
				cout << Arr_Student[i].GetName() << endl;
			}
		}
	}
}
~~~

### Full Code
~~~cpp
#include <iostream>
using namespace std;

class Course{
	public:
	int Id;
	char* Instructor;
	int RoomNr;
};

class Student{
	private:
	char* Name;
	int Number;
	Course* Courses ;

	public:
	int Course_count;
	Student(){
		Name = (char *)malloc(64);
		Number = 0;
		Courses = (Course *)malloc(sizeof(Course) * 16);
		Course_count = 0;
	}
	void SetName(char* pName){
		Name = pName;
	}
	const char* GetName(){
		return Name;
	}
	void SetNumber(int input){
		Number = input;
	}
	void SetCourse(Course input){
		Courses[Course_count] = input;
		Course_count++;
	}
	Course GetCourses(int Int_Index){
		return Courses[Int_Index];
	}
};

void PrintCourseInfo(int Course_ID, Student Arr_Student[], int StudentSize){

	cout << "Course_ID : " << Course_ID << endl;

	for ( int i = 0; i < StudentSize; ++i){
		for ( int j = 0; j < Arr_Student[i].Course_count; ++j){
			if (Course_ID == (Arr_Student[i].GetCourses(j)).Id){
				cout << Arr_Student[i].GetName() << endl;
			}
		}
	}
}

int main(){
	Course Arr_Course[3];
	for ( int i = 0; i < 3; ++i){
		Arr_Course[i].Id = i + 1;
		Arr_Course[i].RoomNr = 101 + i;
	}
	Arr_Course[0].Instructor = "Instructor_1";
	Arr_Course[1].Instructor = "Instructor_2";
	Arr_Course[2].Instructor = "Instructor_3";

	Student Arr_Student[3];
	for (int i = 0; i < 3; i++){
		Arr_Student[i].SetNumber(i + 1);
	}
	Arr_Student[0].SetName("Student_1");
	Arr_Student[1].SetName("Student_2");
	Arr_Student[2].SetName("Student_3");

	Arr_Student[0].SetCourse(Arr_Course[1]);
	Arr_Student[0].SetCourse(Arr_Course[2]);

	Arr_Student[1].SetCourse(Arr_Course[0]);
	Arr_Student[1].SetCourse(Arr_Course[1]);
	Arr_Student[1].SetCourse(Arr_Course[2]);

	Arr_Student[2].SetCourse(Arr_Course[2]);
}

~~~
