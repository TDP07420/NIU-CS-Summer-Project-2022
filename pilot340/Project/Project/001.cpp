/**
 * Project 1 - Pilot 340
 * Written by David Lyons, Thomas Dela Pena, and Emily Brown
 */
#include <iostream>
#include <string>

char interpret_entity(std::string ent);

/**
 * @brief State machine for parsing HTML with entities
 * 
 * @author David Lyons
 */
int main() {
    std::cin >> std::noskipws;

    bool entity_found = false;
    std::string entity;
    char c;
    while (std::cin >> c) {
        if (!entity_found) { //START state
            if (c == '&') { //Entity found
                entity = c;
                entity_found = true;
            } else std::cout << c;
        } else { //ENTITY state
            if (c == ';') { //End of entity
                std::cout << interpret_entity(entity);
                entity_found = false;
            }
            else entity.push_back(c);
        }
    }
}

/****
 * @brief Interprets the entity being read within the FSM
 * 
 * @param ent Entity to interpret
 * @return Character the entity resolves to
 *
 * @author Thomas Dela Pena
 * @author Emily Brown
 */
char interpret_entity(std::string ent)
{
    // character entities
    if (ent == "&amp")
        return '&';
    else if (ent == "&lt")
        return '<';
    else if (ent == "&gt")
        return '>';
    else if (ent == "&quot")
        return '"';
    else if (ent == "&apos")
        return '\'';
    else if (ent[1] == '#') // integer entities
    {
        if (ent[2] == 'x')
            return (char) std::stoi(std::string(ent, 3), 0, 16); //Convert hex
        else
            return (char) std::stoi(std::string(ent, 2)); //Convert dec
    } 
    else exit(1);
}