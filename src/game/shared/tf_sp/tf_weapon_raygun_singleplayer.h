//========= Copyright Valve Corporation, All rights reserved. ============//
//
//
//=============================================================================
#ifndef TF_WEAPON_RAYGUN_SINGLEPLAYER_H
#define TF_WEAPON_RAYGUN_SINGLEPLAYER_H
#ifdef _WIN32
#pragma once
#endif

#include "tf_weaponbase_gun.h"

// Client specific.
#ifdef CLIENT_DLL
#define CTFRaygun_SP C_TFRaygun_SP
#endif

//=============================================================================
//
// TF Weapon Pistol.
//
class CTFRaygun_SP : public CTFWeaponBaseGun
{
public:

	DECLARE_CLASS( CTFRaygun_SP, CTFWeaponBaseGun );
	DECLARE_NETWORKCLASS(); 
	DECLARE_PREDICTABLE();

// Server specific.
#ifdef GAME_DLL
	DECLARE_DATADESC();
#endif

	CTFRaygun_SP() {}
	~CTFRaygun_SP() {}

	virtual int		GetWeaponID( void ) const			{ return TF_WEAPON_PISTOL; }

private:
	CTFRaygun_SP( const CTFRaygun_SP & ) {}
};

#endif // TF_WEAPON_RAYGUN_SINGLEPLAYER_H
