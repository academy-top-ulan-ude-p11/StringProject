#include "String.h"

std::ostream& operator<<(std::ostream& out, const String& str)
{
    out << str.str;
    return out;
}
