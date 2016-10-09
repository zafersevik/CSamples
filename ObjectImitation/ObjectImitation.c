#include "ObjectImitation.h"
#include <stdlib.h>
#include <stdio.h>

static void release(ObjectImitation *self);
static void greet(ObjectImitation *self);

ObjectImitation* ObjectImitationInit(char* name)
{
    ObjectImitation* object = malloc(sizeof(ObjectImitation));
    object->release = &release;
    object->name = name;
    object->greet = &greet;
    
    return object;
}

static void release(ObjectImitation *self)
{
    free(self);
}

static void greet(ObjectImitation *self)
{
    printf("Hello %s \n", self->name);
}