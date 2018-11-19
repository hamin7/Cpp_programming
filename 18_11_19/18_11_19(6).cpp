#include <iostream>
class Exception{
public:
    int code;
    Exception(){ this->code = 1; }
    Exception( int code ){ 
        this->code = code; 
        std::cout << "cons" << std::endl;
    }
    virtual void what(){ std::cout << "Probblem code is " << this->code << std::endl;}
    ~Exception(){std::cout << "des" << std::endl;}
};

class DerivedException : public Exception{
public:
    DerivedException( ){ this->code = 1; }
    DerivedException( int code ){ this->code = code; }
    virtual void what(){ std::cout << "In derived class ... " << code << std::endl; }
};

int main(){
    try{
        std::cout << "Before try..." << std::endl;
        throw DerivedException(2);
        std::cout << "After try..." << std::endl;
    }catch( Exception &e ){ // call by reference, normal form
    //}catch( Exception e ){
        e.what();
    }
    std::cout << "After catch block" << std::endl;
}
// do not 
// never
// throw new Exception();
// catch(Exception *e)