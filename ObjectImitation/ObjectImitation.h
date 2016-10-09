#ifndef ObjectImitation_h
#define ObjectImitation_h

typedef struct ObjectImitation
{
    void (*release)(struct ObjectImitation *self);
    char *name;
    void (*greet)(struct ObjectImitation *self);
} ObjectImitation;

ObjectImitation *ObjectImitationInit(char *name);

#endif /* ObjectImitation_h */