#include <stdio.h>
#include "ObjectImitation.h"

int main(void)
{
    ObjectImitation *object = ObjectImitationInit("Zafer");
    object->greet(object);
    object->release(object);
}