#ifndef CLASS_STAT_H
#define CLASS_STAT_H

#include "character_sheet.hpp"

class ClassStat{
    public:
        CharacterSheet character;
    public:
        void chooseClass(std::string choice){
            switch(choice){
                case "mago":
                    
                break;


                case "cavaleiro":

                break;


                case "ladino":

                break;
            }
        }

        void setCharacterValues(float life_status, 
        float mana_status
        float defense_status,
        float physical_attack_power_status,
        float magical_attack_power_status,
        float attack_speed_status,
        std::string class_status,
        std::array<std::array<std::string, 2>, 2> abilities,
        std::array<std::string, 2> equipament){
            
        }
};

#endif