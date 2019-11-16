#include "helloworld.h"
#include "../../HelloWorldLib/Include/hellolib.h"
#include "../../HelloWorldUserLib/Include/hellouserlib.h"
#include "../../HelloWorldUseBoth/Include/hellousebothlib.h"
#include <string>
#include <iostream>
 
std::string getHelloWorldString()
{
    std::string helloString = getHelloString();
    std::string helloUserString = getHelloUserString();
    std::string allTheStrings = helloString + ";" + helloUserString;
    std::string helloWorldString = "Hey From All Of Us! " + allTheStrings;
    return helloWorldString;
}

int main(){
    std::cout<<getHelloWorldString()<<std::endl;
    while(true){
    }
}
