#pragma once

class C_BasePlayer;
class C_BaseEntity;
class C_BaseCombatWeapon;
class C_PlantedC4;
class Color;
class ClientClass;
class CUserCmd;

namespace Visuals
{
    namespace Player
    {
        bool Begin(C_BasePlayer* pl);

        void RenderBox();
        void RenderName();
        void RenderHealth();
        void RenderArmour();
        void RenderWeapon();
        void RenderSnapline();
    }

    namespace Misc
    {
		void ZeusRangeESP(C_BasePlayer * local);
		void RenderCrosshair();
        void RenderWeapon(C_BaseCombatWeapon* ent);
        void RenderDefuseKit(C_BaseEntity* ent);
        void RenderPlantedC4(C_BaseEntity* ent);
		void ThirdPerson();
    }

    bool CreateFonts();
    void DestroyFonts();
	void GrenadeESP(C_BaseEntity * ent);
}
