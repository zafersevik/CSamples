#include <stdio.h>
#include "ObjectImitation.h"

int main(int argc, const char *argv[])
{
    ObjectImitation *object0 = ObjectImitationInit("bach");
    object0->greet(object0);

    ObjectImitation *object1 = ObjectImitationInit("johann sebastian bach");
    object1->greet(object1);

    object0->sayGoodbye(object0);
    object0->release(object0);

    object1->sayGoodbye(object1);
    object1->release(object1);
}