#ifndef CLASS_STAT_H
#define CLASS_STAT_H

#include "character_sheet.hpp"

#include <array>
#include <string>

class ClassStat{
    private:
        CharacterSheet character;

        float life = character.getLifeStatus();
        float mana = character.getManaStatus();
        float physical_defense = character.getPhysicalDefenseStatus();
        float magical_defense = character.getMagicalDefenseStatus();            
        float physical_attack_power = character.getPhysicalAttackPowerStatus();
        float magical_attack_power = character.getMagicalAttackPowerStatus();
        float attack_speed = character.getAttackSpeedStatus();

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

                    life = life + 5;
                    mana = mana + 15;
                    physical_defense = physical_defense + 3;
                    magical_defense = magical_defense + 6;
                    physical_attack_power = physical_attack_power + 3;
                    magical_attack_power = magical_attack_power + 10;
                    attack_speed = attack_speed + 5;

                    setCharacterValues(life, mana, physical_defense, magical_defense, physical_attack_power, magical_attack_power, attack_speed, "Mago", abilitie, equipament);
                break;

                case 'c': // Cavaleiro
                    abilitie.at(0) = "Voto de cavaleiro";
                    abilitie.at(1) = "15 de dano físico e aplica o efeito sangramento por 2 turnos";
                    
                    equipament.at(0) = "Espada de cavaleiro";
                    equipament.at(1) = "Aumenta o dano físico em 7";

                    life = life + 10;
                    mana = mana + 5;
                    physical_defense = physical_defense + 6;
                    magical_defense = magical_defense + 3;
                    physical_attack_power = physical_attack_power + 7;
                    magical_attack_power = magical_attack_power + 0;
                    attack_speed = attack_speed + 4;

                    setCharacterValues(life, mana, physical_defense, magical_defense, physical_attack_power, magical_attack_power, attack_speed, "Cavaleiro", abilitie, equipament);
                break;

                case 'l': // Ladino                    
                    abilitie.at(0) = "Dança das adagas";
                    abilitie.at(1) = "2 ataques de 10 de dano físico cada e aplica o efeito sangramento por 3 turnos";

                    equipament.at(0) = "Conjunto de duas adagas";
                    equipament.at(1) = "Aumenta o dano físico em 4";

                    life = life + 7;
                    mana = mana + 3;
                    physical_defense = physical_defense + 3;
                    magical_defense = magical_defense + 3;
                    physical_attack_power = physical_attack_power + 4;
                    magical_attack_power = magical_attack_power + 0;
                    attack_speed = attack_speed + 14;

                    setCharacterValues(life, mana, physical_defense, magical_defense, physical_attack_power, magical_attack_power, attack_speed, "Ladino", abilitie, equipament);
                break;
            }
        }

        void setCharacterValues(float life_status_, 
            float mana_status_,
            float physical_defense_status_,
            float magical_defense_status_,
            float physical_attack_power_status_,
            float magical_attack_power_status_,
            float attack_speed_status_,
            std::string class_status_,
            std::array<std::string, 2> abilitie_,
            std::array<std::string, 2> equipament_){

                character.setLifeStatus(life_status_);
                character.setManaStatus(mana_status_);
                character.setPhysicalDefenseStatus(physical_defense_status_);
                character.setMagicalDefenseStatus(magical_defense_status_);
                character.setPhysicalAttackPowerStatus(physical_attack_power_status_);
                character.setMagicalAttackPowerStatus(magical_attack_power_status_);
                character.setAttackSpeedStatus(attack_speed_status_);
                character.setClass_status(class_status_);
                character.setAbilities(abilitie_, 1);
                character.setEquipament(equipament_);
        }
};

#endif
