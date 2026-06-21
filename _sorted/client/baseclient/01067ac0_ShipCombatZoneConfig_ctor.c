// addr: 0x01067ac0
// name: ShipCombatZoneConfig_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * ShipCombatZoneConfig_ctor(void * this) */

void * __fastcall ShipCombatZoneConfig_ctor(void *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
                    /* Initializes a ship-combat zone configuration with many default scalar values
                       plus arrays/lists for docks, pickups, whirlpools, jet streams, forts, tag
                       locations, and rank modifiers. */
  *(undefined ***)this = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 4) = &DAT_01cb73b0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar3 = DAT_018089a4;
  uVar5 = DAT_017fe21c;
  uVar4 = _DAT_017f1d54;
  uVar1 = DAT_017ea718;
  *(undefined4 *)((int)this + 0x38) = DAT_017ed858;
  uVar2 = DAT_017eb904;
  *(undefined4 *)((int)this + 0x60) = uVar1;
  uVar1 = DAT_0176b1ac;
  *(undefined4 *)((int)this + 0x40) = uVar2;
  *(undefined4 *)((int)this + 0x7c) = uVar2;
  *(undefined4 *)((int)this + 0x88) = uVar2;
  uVar2 = DAT_0181bc48;
  *(undefined4 *)((int)this + 100) = uVar1;
  uVar1 = DAT_017ed82c;
  *(undefined4 *)((int)this + 0x90) = uVar2;
  uVar2 = DAT_017e99a8;
  *(undefined4 *)((int)this + 0x28) = uVar3;
  *(undefined4 *)((int)this + 0x68) = uVar1;
  *(undefined4 *)((int)this + 0x6c) = uVar1;
  uVar1 = _DAT_0175b420;
  *(undefined4 *)((int)this + 0x74) = uVar3;
  uVar3 = DAT_017ec67c;
  *(undefined4 *)((int)this + 0x94) = uVar2;
  uVar2 = DAT_01814c14;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x21) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = uVar4;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x70) = uVar1;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x80) = uVar4;
  *(undefined4 *)((int)this + 0x84) = uVar3;
  *(undefined4 *)((int)this + 0x8c) = uVar4;
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined4 *)((int)this + 0x14) = 1;
  *(undefined1 *)((int)this + 0x18) = 1;
  *(undefined1 *)((int)this + 0x2d) = 1;
  *(undefined4 *)((int)this + 0x24) = 0xc;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = uVar2;
  uVar2 = DAT_01811154;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined1 *)((int)this + 0xbc) = 0;
  *(undefined1 *)((int)this + 0xbd) = 0;
  *(undefined1 *)((int)this + 0xbe) = 0;
  *(undefined1 *)((int)this + 0xbf) = 0;
  *(undefined1 *)((int)this + 0xc0) = 0;
  *(undefined1 *)((int)this + 0xc1) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = uVar2;
  *(undefined4 *)((int)this + 0xcc) = 0xc;
  *(undefined4 *)((int)this + 0xd0) = 0xc;
  *(undefined4 *)((int)this + 0xd4) = 2;
  *(undefined4 *)((int)this + 0xd8) = uVar5;
  *(undefined4 *)((int)this + 0xdc) = _DAT_0188109c;
  *(undefined4 *)((int)this + 0xe0) = uVar2;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0x682;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0x682;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0x682;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0x682;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x114) = uVar4;
  *(undefined4 *)((int)this + 0x118) = DAT_0180b058;
  *(undefined4 *)((int)this + 0x11c) = DAT_0181c5ac;
  *(undefined4 *)((int)this + 0x10c) = 0x682;
  *(undefined4 *)((int)this + 0x110) = uVar1;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  uVar1 = _DAT_01802608;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x15c) = uVar1;
  *(undefined4 *)((int)this + 0x160) = DAT_01881098;
  *(undefined4 *)((int)this + 0x168) = DAT_01881094;
  *(undefined4 *)((int)this + 0x16c) = _DAT_01802764;
  *(undefined4 *)((int)this + 0x170) = _DAT_017ed7e4;
  uVar1 = DAT_017649d4;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x164) = uVar3;
  *(undefined4 *)((int)this + 0x174) = uVar1;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined ***)((int)this + 0x180) = SoeUtil::List<ShipCombatZoneDockConfig,-1>::vftable;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined ***)((int)this + 400) =
       SoeUtil::Array<ShipCombatZonePickupLocationConfig,0,1>::vftable;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined ***)((int)this + 0x1a0) = SoeUtil::Array<ShipCombatZoneWhirlpoolConfig,0,1>::vftable;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined ***)((int)this + 0x1b0) = SoeUtil::Array<ShipCombatZoneJetStreamConfig,0,1>::vftable;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined ***)((int)this + 0x1c0) = SoeUtil::Array<ShipCombatZoneFortConfig,0,1>::vftable;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined ***)((int)this + 0x1d0) = SoeUtil::Array<ShipCombatZoneTagLocationConfig,0,1>::vftable
  ;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined ***)((int)this + 0x1e0) = SoeUtil::Array<ShipCombatRankModifierConfig,0,1>::vftable;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  return this;
}

