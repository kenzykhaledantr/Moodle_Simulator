#ifndef CCOURSE
#define CCOURSE
namespace xclass{
class CCourse{  // define a class called CCourse to take some different varable for each student.

private: // the access modifier is private which make the user not deal with it 
char course_name[20]; // this is a variable course_name which is string 
char course_code[5]; // this is a variable course_code which is string 
float course_cost[5];// this is a variable course_cost which is float 
  

// doing these functions to make all the private variable public to make the user work with it 

public: // the access modifier is private which make the user deals with it 
inline void setcourse_name(char name[20]); // this is the set function for course_name and take parameter which is name
inline void setcourse_code(char code[5]); // this is the set function for course_code and take parameter which is code 
inline void setcourse_cost(float cost[5]);// this is the set function for cost and take parameter which is cost

inline char getcourse_name(); // this is the get function for course_name to return the value of it which it is char 
inline char getcourse_code(); // this is the get function for course_code  to return the value of it 
inline float getcourse_cost(); // this is the get function for course_cost to return the value of it 


inline void AddCourse();  // this is a function for input all the information for the course 
inline void getCourseinfo(); // this is a function for give you all the information about the course
};

}

#endif