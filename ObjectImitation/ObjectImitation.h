#ifndef ObjectImitation_h
#define ObjectImitation_h

typedef struct
{
    char *name;
    void (*greet)(void *self);
    void (*release)(void *self);
} ObjectImitation;

ObjectImitation *ObjectImitationInit(char *name);

#endif /* ObjectImitation_h */