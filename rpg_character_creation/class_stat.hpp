#ifndef CLASS_STAT_H
#define CLASS_STAT_H

#include "character_sheet.hpp"

class ClassStat{
    private:
        CharacterSheet character;
    public:
        void chooseClass(std::string choice){
            switch(choice){
                case "mago":
                    std::array<std::string, 2> abilitie;
                    abilitie[0] = "Bola de fogo";
                    abilitie[1] = "20 de dano mágico e aplica o efeito queimadura por 3 turnos";

                    std::array<std::string, 2> equipament;
                    equipament[0] = "Cetro mágico";
                    equipament[1] = "Aumenta o dano mágico em 5";

                    setCharacterValues(5, 15, 3, 6, 3, 10, 5, "Mago", abilitie, equipament);
                break;


                case "cavaleiro":
                    std::array<std::string, 2> abilitie;
                    abilitie[0] = "Voto de cavaleiro";
                    abilitie[1] = "15 de dano físico e aplica o efeito sangramento por 2 turnos";

                    std::array<std::string, 2> equipament;
                    equipament[0] = "Espada de cavaleiro";
                    equipament[1] = "Aumenta o dano físico em 7";

                    setCharacterValues(10, 5, 6, 3, 7, 0, 4, "Cavaleiro", abilitie, equipament);
                break;


                case "ladino":
                    std::array<std::string, 2> abilitie;
                    abilitie[0] = "Dança das adagas";
                    abilitie[1] = "2 ataques de 10 de dano físico cada e aplica o efeito sangramento por 3 turnos";

                    std::array<std::string, 2> equipament;
                    equipament[0] = "Conjunto de duas adagas";
                    equipament[1] = "Aumenta o dano físico em 4";

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
            character.setAbilities(abilities, 1);
            character.setEquipament(equipament);
        }
};

#endif
