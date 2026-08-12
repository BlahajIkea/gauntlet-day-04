#include "entity.hpp"
#include <map>

int main() 
{
    std::map<int, Entity> byId = 
    {
        {7, {7,"orc", 30} },  
        {2, {2, "bat", 8} },
        {43, {42, "boss", 300} }, 
        {13, {13, "rat", 4} }
    };
    
for (const auto& [id, i] : byId){
    std::cout << id << ' ' << i.name << '\n';
    }
}