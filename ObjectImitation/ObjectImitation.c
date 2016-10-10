#include "ObjectImitation.h"
#include <stdlib.h>
#include <stdio.h>

static void release(ObjectImitation *self);
static void greet(ObjectImitation *self);
static void sayGoodbye(ObjectImitation *self);

ObjectImitation* ObjectImitationInit(char* name)
{
    ObjectImitation* object = malloc(sizeof(ObjectImitation));
    object->release = &release;
    object->name = name;
    object->greet = &greet;
    object->sayGoodbye = &sayGoodbye;
    
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

static void sayGoodbye(ObjectImitation *self) 
{
    printf("Goodbye %s \n", self->name);
}