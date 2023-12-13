#include <iostream>
#include <array>

class CharacterSheet{
    public:
        std::string name;
        float life_status;
        float mana_status;
        float defense_status;
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

        void setLifeStatus(float life_status_){
            life_status = life_status_;
        }

        void  setManaStatus(float mana_status_){
            mana_status = mana_status_;
        }

        void setDefenseStatus(float defense_status_){
            defense_status = defense_status_;
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

        void setAbilities(std::string abilitie[], int index_abilitie[]){
            int line = index_abilitie[0];
            int collumn = index_abilitie[1];

            std::string name_abilitie = abilitie[0];
            std::string desctription_abilitie = abilitie[1];

            abilities[line][collumn] = name_abilitie;
            abilities[line][collumn+1] = desctription_abilitie;
        }

        void setEquipament(std::string equipament_[]){
            std::string name_equipament = equipament_[0];
            std::string description_equipament = equipament_[1];
        }

        //Getters of atributes
        std::string getName(void){
            return name;
        }

        float getLifeStatus(void){
            return life_status;
        }

        float getManaStatus(void){
            return mana_status;
        }

        float getDefenseStatus(void){
            return defense_status;
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

        std::string getAbilities(void){
            
        }


};