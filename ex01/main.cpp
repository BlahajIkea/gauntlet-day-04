#include "entity.hpp"
#include <string>
#include <map>

int main() 
{
    std::map<int, Entity> byId = 
    {
        {7, {7,"orc", 30} },  
        {2, {2, "bat", 8} },
        {42, {42, "boss", 300} }, 
        {13, {13, "rat", 4} }
    };
    
    auto i = byId.find(42);
    auto j = byId.find(99);

    if (i != byId.end()) {
        std::cout  << "id " << i->second.id << ": " << i->second.name << std::endl;
    }

    if (j == byId.end()) {
        std::cout << "id " << "99 " << "(not found)" << std::endl;
    }

   
   
    std::cout << "-- entities by id --" << std::endl;


    for (const auto& [id, i] : byId)
    {
        std::cout << id << ' ' << i.name << '\n';
    }
}


/*
 for (int i = 0; i < size; i ++) 
    {

        auto result = byId.find(targetId[i]);
        if (result != byId.end())
        {
            std::cout << "true" << std::endl;
            myString = result->second.name;
        }
    }

*/