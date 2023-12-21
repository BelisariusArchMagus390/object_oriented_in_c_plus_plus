#ifndef RACE_H
#define RACE_H

#include "character_sheet.hpp"

#include <iostream>

#include <array>
#include <string>

class RaceStat{
    private:
        CharacterSheet character;
    public:
        void chooseRace(char choice){
            std::array<std::string, 2> abilitie;

            switch(choice){
                case 'h': // Humano
                    abilitie.at(0) = "Perseverança";
                    abilitie.at(1) = "Aumenta a defesa física e mágica em 5 por 3 turnos";

                    setCharacterValues(5, 15, 3, 6, 3, 10, 5, "Humano", abilitie);
                break;


                case 'e': // Elfo
                    abilitie.at(0) = "Sabedoria élfica";
                    abilitie.at(1) = "Aumenta a defesa mágica em 12 por 2 turnos";

                    setCharacterValues(10, 5, 6, 3, 7, 0, 4, "Elfo", abilitie);
                break;


                case 'a': // Anão
                    abilitie.at(0) = "Fúria anã";
                    abilitie.at(1) = " e aplica o efeito sangramento por 3 turnos";

                    setCharacterValues(7, 3, 3, 3, 4, 0, 14, "Anão", abilitie);
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
            std::string race,
            std::array<std::string, 2> abilitie){

                character.setLifeStatus(life_status);
                character.setManaStatus(mana_status);
                character.setPhysicalDefenseStatus(physical_defense_status);
                character.setMagicalDefenseStatus(magical_defense_status);
                character.setPhysicalAttackPowerStatus(physical_attack_power_status);
                character.setMagicalAttackPowerStatus(magical_attack_power_status);
                character.setAttackSpeedStatus(attack_speed_status);
                character.setRace(race);
                character.setAbilities(abilitie, 1);
        }
};

#endif
