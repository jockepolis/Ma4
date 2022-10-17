
#include <cstdlib>
// Person class 

class Person{
	public:
		int get();
		void set(int);
		int fib();
	private:
		int age;
		int fib_c2(int);
	};
 
Person::Person(int n){
	age = n;
	}
 
int Person::get(){
	return age;
	}
 
void Person::set(int n){
	age = n;
	}

int Person::fib(){
	return fib_c2(age);
	}	

int Person::fib_c2(int n){
	if (n <= 1)
		return n;
	return fib_c2(n-1) + fib_c2(n-2);
	}
	

extern "C"{
	Person* Person_new(int n) {return new Person(n);}
	int Person_get(Person* person) {return person->get();}
	int Person_fib(Person* person) {return person->fib();}
	void Person_set(Person* person, int n) {person->set(n);}
	void Person_delete(Person* person){
		if (person){
			delete person;
			person = nullptr;
			}
		}
	}			delete person;
			person = nullptr;
			}
		}
	}
