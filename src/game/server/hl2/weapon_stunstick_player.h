//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
//=============================================================================//

#ifndef WEAPON_STUNSTICK_PLAYER_H
#define WEAPON_STUNSTICK_PLAYER_H
#ifdef _WIN32
#pragma once
#endif

#include "basebludgeonweapon.h"

#define	STUNSTICK_RANGE				75.0f
#define	STUNSTICK_REFIRE			0.8f
#define	STUNSTICK_BEAM_MATERIAL		"sprites/lgtning.vmt"
#define STUNSTICK_GLOW_MATERIAL		"sprites/light_glow02_add"
#define STUNSTICK_GLOW_MATERIAL2	"effects/blueflare1"
#define STUNSTICK_GLOW_MATERIAL_NOZ	"sprites/light_glow02_add_noz"

class CWeaponStunStickPlayer : public CBaseHLBludgeonWeapon
{
	DECLARE_CLASS( CWeaponStunStickPlayer, CBaseHLBludgeonWeapon );
	DECLARE_DATADESC();

public:
	CWeaponStunStickPlayer();

	DECLARE_SERVERCLASS(); 
	DECLARE_PREDICTABLE();
	DECLARE_ACTTABLE();

	virtual void Precache();

	void		Spawn();

	float		GetRange( void )		{ return STUNSTICK_RANGE; }
	float		GetFireRate( void )		{ return STUNSTICK_REFIRE; }


	bool		Deploy( void );
	bool		Holster( CBaseCombatWeapon *pSwitchingTo = NULL );
	
	void		Drop( const Vector &vecVelocity );
	void		ImpactEffect( trace_t &traceHit );
	void		SecondaryAttack( void )	{}
	void		SetStunState( bool state );
	bool		GetStunState( void );

	void		Operator_HandleAnimEvent( animevent_t *pEvent, CBaseCombatCharacter *pOperator );
	int			WeaponMeleeAttack1Condition( float flDot, float flDist );
	
	float		GetDamageForActivity( Activity hitActivity );

	virtual bool	PlayFleshyHittySoundOnHit() const { return true; }

	CWeaponStunStickPlayer( const CWeaponStunStickPlayer & );

private:

	CNetworkVar( bool, m_bActive );
};

#endif