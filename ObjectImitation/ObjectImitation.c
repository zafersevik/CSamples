#include "ObjectImitation.h"
#include <stdlib.h>
#include <stdio.h>

static void release(void *self);
static void greet(void *self);

ObjectImitation* ObjectImitationInit(char* name)
{
    ObjectImitation* object = malloc(sizeof(ObjectImitation));
    object->release = &release;
    
    object->name = name;
    object->greet = &greet;
    
    return object;
}

static void greet(void *self)
{
    printf("hello %s \n", ((ObjectImitation*)self)->name);
}

static void release(void *self)
{
    free(self);
}