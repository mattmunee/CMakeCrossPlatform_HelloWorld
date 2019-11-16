#include "hellouserlib.h"
#include "../../HelloWorldLib/Include/hellolib.h"
#include <string>
 
std::string getHelloUserString()
{
    std::string helloString = getHelloString();
    std::string helloUserString = helloString + " I'm a user.";
    return helloUserString;
}
