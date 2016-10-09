#include <stdio.h>
#include "ObjectImitation.h"

int main(int argc, const char *argv[])
{
    ObjectImitation *object = ObjectImitationInit("Zafer");
    object->greet(object);
    object->release(object);
}