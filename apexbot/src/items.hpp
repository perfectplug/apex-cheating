#pragma once

#include "hash.hpp"

#include <cstdint>
#include <bitset>

enum class AmmoType: uint8_t {
	LightRounds,
	EnergyAmmo,
	ShotgunShells,
	HeavyRounds,
	SniperAmmo,
	SpecialHeavyRounds,
	SpecialShotgunShells,
	ExperimentalAmmo,
	SpecialLightAmmo,
};

enum class Rarity: uint8_t {
	Common,
	Rare,
	Epic,
	Legendary,
	Heirloom,
};

enum class WeaponIndex: uint32_t {
	R301 = 0,
	SENTINEL = 1,
	MELEE_SURVIVAL = 17,
	ALTERNATOR = 59,
	RE45,
	DEVOTION,
	LONGBOW,
	EVA8_AUTO,
	FLATLINE,
	G7_SCOUT,
	HEMLOK,
	KRABER,
	MASTIFF,
	MOZAMBIQUE,
	PROWLER,
	PEACEKEEPER,
	R99,
	P2020,
	SPITFIRE,
	TRIPLE_TAKE,
	WINGMAN,
	HAVOC,
	LSTAR,
	CHARGE_RIFLE,
	VOLT,
};

enum class WeaponName: uint32_t {
	R301 = hash("mp_weapon_rspn101"),
	SENTINEL = hash("mp_weapon_sentinel"),
	MELEE_SURVIVAL = hash("mp_weapon_melee_survival"),
	ALTERNATOR = hash("mp_weapon_alternator_smg"),
	RE45 = hash("mp_weapon_autopistol"),
	DEVOTION = hash("mp_weapon_esaw"),
	LONGBOW = hash("mp_weapon_dmr"),
	EVA8_AUTO = hash("mp_weapon_shotgun"),
	FLATLINE = hash("mp_weapon_vinson"),
	G7_SCOUT = hash("mp_weapon_g2"),
	HEMLOK = hash("mp_weapon_hemlok"),
	KRABER = hash("mp_weapon_sniper"),
	MASTIFF = hash("mp_weapon_mastiff"),
	MOZAMBIQUE = hash("mp_weapon_shotgun_pistol"),
	PROWLER = hash("mp_weapon_pdw"),
	PEACEKEEPER = hash("mp_weapon_energy_shotgun"),
	R99 = hash("mp_weapon_r97"),
	P2020 = hash("mp_weapon_semipistol"),
	SPITFIRE = hash("mp_weapon_lmg"),
	TRIPLE_TAKE = hash("mp_weapon_doubletake"),
	WINGMAN = hash("mp_weapon_wingman"),
	HAVOC = hash("mp_weapon_energy_ar"),
	LSTAR = hash("mp_weapon_lstar"),
	CHARGE_RIFLE = hash("mp_weapon_defender"),
	VOLT = hash("mp_weapon_volt_smg"),
};

enum class ItemID : uint32_t {
	KRABER_HEIRLOOM = 1,
	MASTIFF = 2,
	MASTIFF_GOLD = 3,
	LSTAR = 7,
	LSTAR_GOLD = 8,
	HAVOC = 12,
	HAVOC_GOLD = 13,
	DEVOTION = 17,
	DEVOTION_GOLD = 18,
	TRIPLE_TAKE = 22,
	TRIPLE_TAKE_GOLD = 23,
	FLATLINE = 27,
	FLATLINE_GOLD = 28,
	HEMLOK = 32,
	HEMLOK_GOLD = 33,
	G7_SCOUT = 37,
	G7_SCOUT_GOLD = 38,
	ALTERNATOR = 42,
	ALTERNATOR_GOLD = 43,
	R99 = 47,
	R99_GOLD = 48,
	PROWLER_HEIRLOOM = 52,
	VOLT = 57,
	VOLT_GOLD = 58,
	LONGBOW = 62,
	LONGBOW_GOLD = 63,
	CHARGE_RIFLE = 67,
	CHARGE_RIFLE_GOLD = 68,
	SPITFIRE = 72,
	SPITFIRE_GOLD = 73,
	R301 = 77,
	R301_GOLD = 78,
	EVA8_AUTO = 82,
	EVA8_AUTO_GOLD = 83,
	PEACEKEEPER_HEIRLOOM = 87,
	MOZAMBIQUE = 88,
	MOZAMBIQUE_GOLD = 89,
	WINGMAN = 93,
	WINGMAN_GOLD = 94,
	P2020 = 98,
	P2020_GOLD = 99,
	RE45 = 103,
	RE45_GOLD = 104,
	SENTINEL = 108,
	SENTINEL_GOLD = 109,

	LIGHT_ROUNDS = 113,
	ENERGY_AMMO,
	SHOTGUN_SHELLS,
	HEAVY_ROUNDS,
	SNIPER_AMMO,

	ULTIMATE_ACCELERANT,
	PHOENIX_KIT,
	MED_KIT,
	SYRINGE,
	SHIELD_BATTERY,
	SHIELD_CELL,

	HELMET_LV1,
	HELMET_LV2,
	HELMET_LV3,
	HELMET_LV4,
	BODY_ARMOR_LV1,
	BODY_ARMOR_LV2,
	BODY_ARMOR_LV3,
	BODY_ARMOR_LV4,
	EVO_SHIELD_LV0,
	EVO_SHIELD_LV1,
	EVO_SHIELD_LV2,
	EVO_SHIELD_LV3,
	EVO_SHIELD_LV4,
	KNOCKDOWN_SHIELD_LV1,
	KNOCKDOWN_SHIELD_LV2,
	KNOCKDOWN_SHIELD_LV3,
	KNOCKDOWN_SHIELD_LV4,
	BACKPACK_LV1,
	BACKPACK_LV2,
	BACKPACK_LV3,
	BACKPACK_LV4,

	THERMITE_GRENADE,
	FRAG_GRENADE,
	ARC_STAR,

	HCOG_CLASSIC,
	HCOG_BRUISER,
	HOLO,
	VARIABLE_HOLO,
	DIGITAL_THREAT,
	HCOG_RANGER,
	VARIABLE_AOG,
	SNIPER,
	VARIABLE_SNIPER,
	DIGITAL_SNIPER_THREAT,

	BARREL_STABILIZER_LV1,
	BARREL_STABILIZER_LV2,
	BARREL_STABILIZER_LV3,
	BARREL_STABILIZER_LV4,
	LIGHT_MAGAZINE_LV1,
	LIGHT_MAGAZINE_LV2,
	LIGHT_MAGAZINE_LV3,
	HEAVY_MAGAZINE_LV1,
	HEAVY_MAGAZINE_LV2,
	HEAVY_MAGAZINE_LV3,
	ENERGY_MAGAZINE_LV1,
	ENERGY_MAGAZINE_LV2,
	ENERGY_MAGAZINE_LV3,
	SNIPER_MAGAZINE_LV1,
	SNIPER_MAGAZINE_LV2,
	SNIPER_MAGAZINE_LV3,
	SHOTGUN_BOLT_LV1,
	SHOTGUN_BOLT_LV2,
	SHOTGUN_BOLT_LV3,
	STANDARD_STOCK_LV1,
	STANDARD_STOCK_LV2,
	STANDARD_STOCK_LV3,
	SNIPER_STOCK_LV1,
	SNIPER_STOCK_LV2,
	SNIPER_STOCK_LV3,

	TURBOCHARGER,
	SKULLPIERCER_RIFLING,
	HAMMERPOINT_ROUNDS,
	DOUBLE_TAP_TRIGGER,
	HOPUP_187,
	QUICKDRAW_HOLSTER,
	VAULT_KEY,
	MOBILE_RESPAWN_BEACON,
	ITEM_191,
	TREASURE_PACK,
};

using ItemSet = std::bitset<256>;

// Returns the set of attachment items compatible with this weapon.
ItemSet weapon_set(WeaponName weapon_name);
