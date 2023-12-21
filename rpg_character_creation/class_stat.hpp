#ifndef CLASS_STAT_H
#define CLASS_STAT_H

#include "character_sheet.hpp"

#include <array>
#include <string>

class ClassStat{
    private:
        CharacterSheet character;
    public:
        void chooseClass(char choice){
            std::array<std::string, 2> abilitie;
            std::array<std::string, 2> equipament;

            

            switch(choice){
                case 'm': // Mago                    
                    abilitie.at(0) = "Bola de fogo";
                    abilitie.at(1) = "20 de dano mágico e aplica o efeito queimadura por 3 turnos";

                    equipament.at(0) = "Cetro mágico";
                    equipament.at(1) = "Aumenta o dano mágico em 5";

                    setCharacterValues(5, 15, 3, 6, 3, 10, 5, "Mago", abilitie, equipament);
                break;

                case 'c': // Cavaleiro
                    abilitie.at(0) = "Voto de cavaleiro";
                    abilitie.at(1) = "15 de dano físico e aplica o efeito sangramento por 2 turnos";
                    
                    equipament.at(0) = "Espada de cavaleiro";
                    equipament.at(1) = "Aumenta o dano físico em 7";

                    setCharacterValues(10, 5, 6, 3, 7, 0, 4, "Cavaleiro", abilitie, equipament);
                break;

                case 'l': // Ladino                    
                    abilitie.at(0) = "Dança das adagas";
                    abilitie.at(1) = "2 ataques de 10 de dano físico cada e aplica o efeito sangramento por 3 turnos";

                    equipament.at(0) = "Conjunto de duas adagas";
                    equipament.at(1) = "Aumenta o dano físico em 4";

                    setCharacterValues(7, 3, 3, 3, 4, 0, 14, "Ladino", abilitie, equipament);
                break;
            }
        }

        void setCharacterValues(float life_status, 
            float mana_status,
            float physical_defense_status,
            float magical_defense_status,
            float physical_attack_power_status,
            float magical_attack_power_status,
            float attack_speed_status,
            std::string class_status,
            std::array<std::string, 2>abilitie,
            std::array<std::string, 2> equipament){

                character.setLifeStatus(life_status);
                character.setManaStatus(mana_status);
                character.setPhysicalDefenseStatus(physical_defense_status);
                character.setMagicalDefenseStatus(magical_defense_status);
                character.setPhysicalAttackPowerStatus(physical_attack_power_status);
                character.setMagicalAttackPowerStatus(magical_attack_power_status);
                character.setAttackSpeedStatus(attack_speed_status);
                character.setClass_status(class_status);
                character.setAbilities(abilitie, 1);
                character.setEquipament(equipament);
        }
};

#endif
