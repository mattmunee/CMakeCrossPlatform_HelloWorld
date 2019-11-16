#include "hellousebothlib.h"
#include "../../HelloWorldLib/Include/hellolib.h"
#include "../../HelloWorldUserLib/Include/hellouserlib.h"
#include <string>
 
std::string getAllTheStrings()
{
    std::string helloString = getHelloString();
    std::string helloUserString = getHelloUserString();
    std::string allTheStrings = helloString + ";" + helloUserString;
    return allTheStrings;
}
