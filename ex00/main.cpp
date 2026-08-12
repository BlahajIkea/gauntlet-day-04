#include <iostream>
#include "entity.hpp"
#include <string>
#include <vector>

int main()  
{
    std::vector<Entity> roster; 
    roster.push_back(Entity{7, "orc", 30}); 
    roster.push_back(Entity{2, "bat", 8});
    roster.push_back(Entity{42, "boss", 300});
    roster.push_back(Entity{13, "rat", 4});

    std::cout << "-- roster -- "  << std::endl;
    for (auto i = roster.begin(); i != roster.end(); ) {
        std::cout << i->id << " " << i->name << " (hp " << i->hp << ")" << std::endl;
        i++;
    }
    
    std::cout << "-- survivors -- "  << std::endl; // Adds survior splitter
    
    for (auto j = roster.begin(); j != roster.end(); ) {
        if (j->hp <= 5) 
            roster.erase(j);
        else {
            std::cout << j->id << " " << j->name << " (hp " << j->hp << ")" << std::endl;
            j++;
        }
    }
}