#ifndef CHARACTER_SHEET_H
#define CHARACTER_SHEET_H

#include <array>
#include <string>

class CharacterSheet{
    private:
        std::string name;
        std::string race;
        float life_status;
        float mana_status;
        float physical_defense_status;
        float magical_defense_status;
        float physical_attack_power_status;
        float magical_attack_power_status;
        float attack_speed_status;
        std::string class_status;
        std::array<std::array<std::string, 2>, 2> abilities;
        std::array<std::string, 2> equipament;

    public:
        //Setters of the atributes
        void setName(std::string name_){
            name = name_;
        }

        void setRace(std::string race_){
            race = race_;
        }

        void setLifeStatus(float life_status_){
            life_status = life_status_;
        }

        void  setManaStatus(float mana_status_){
            mana_status = mana_status_;
        }

        void setPhysicalDefenseStatus(float physical_defense_status_){
            physical_defense_status = physical_defense_status_;
        }

        void setMagicalDefenseStatus(float magical_defense_status_){
            magical_defense_status = magical_defense_status_;
        }

        void setPhysicalAttackPowerStatus(float physical_attack_power_status_){
            physical_attack_power_status = physical_attack_power_status_;
        }

        void setMagicalAttackPowerStatus(float magical_attack_power_status_){
            magical_attack_power_status = magical_attack_power_status_;
        }

        void setAttackSpeedStatus(float attack_speed_status_){
            attack_speed_status = attack_speed_status_;
        }

        void setClass_status(std::string class_status_){
            class_status = class_status_;
        }

        void setAbilities(std::array<std::string, 2> abilitie, int index_abilitie){
            std::string name_abilitie = abilitie.at(0);
            std::string desctription_abilitie = abilitie.at(1);

            abilities[index_abilitie][0] = name_abilitie;
            abilities[index_abilitie][1] = desctription_abilitie;
        }

        void setEquipament(std::array<std::string, 2> equipament_){
            std::string name_equipament = equipament_.at(0);
            std::string description_equipament = equipament_.at(1);
            equipament[0] = name_equipament;
            equipament[1] = description_equipament;
        }

        //Getters of atributes
        std::string getName(void){
            return name;
        }

        std::string getRace(void){
            return race;
        }

        float getLifeStatus(void){
            return life_status;
        }

        float getManaStatus(void){
            return mana_status;
        }

        float getPhysicalDefenseStatus(void){
            return physical_defense_status;
        }

        float getMagicalDefenseStatus(void){
            return magical_defense_status;
        }

        float getPhysicalAttackPowerStatus(void){
            return physical_attack_power_status;
        }

        float getMagicalAttackPowerStatus(void){
            return magical_attack_power_status;
        }

        float getAttackSpeedStatus(void){
            return attack_speed_status;
        }

        std::array<std::array<std::string, 2>, 2> getAbilities(void){
            return abilities;
        }

        std::array<std::string, 2> getEquipament(void){
            return equipament;
        }
};

#endif
