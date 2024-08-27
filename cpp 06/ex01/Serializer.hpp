#ifndef SERIALIZER_H
#define SERIALIZER_H

#include <iostream>
# include<string>
# include<cstdlib>
# include<climits>
# include<stdint.h>

typedef struct Data
{
    std::string name;
    int num;
} Data;

class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer &src);
        Serializer &operator=(const Serializer &src);
    public:
        
        ~Serializer();
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif