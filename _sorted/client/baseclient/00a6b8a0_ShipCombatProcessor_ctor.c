// addr: 0x00a6b8a0
// name: ShipCombatProcessor_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ShipCombatProcessor_ctor(void * this, void * client) */

void * __thiscall ShipCombatProcessor_ctor(void *this,void *client)

{
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the ship combat game processor, including ShipCombatZoneConfig and
                       ShipCombatResultsDataSource members. */
  puStack_8 = &LAB_015b983e;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *(undefined ***)this = ActorHandler::vftable;
  local_4 = 0;
  *(undefined ***)this = ShipCombatProcessor::vftable;
  *(void **)((int)this + 4) = client;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  FUN_00a6b750(uVar2);
  *(undefined ***)((int)this + 0x3c) = SoeUtil::List<ShipCombatPlayer,-1>::vftable;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined ***)((int)this + 0x50) = SoeUtil::List<ShipCombatProxiedProjectile,-1>::vftable;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined ***)((int)this + 0x60) = SoeUtil::List<ShipCombatProxiedPickup,-1>::vftable;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined ***)((int)this + 0x70) = SoeUtil::List<ShipCombatProxiedFort,-1>::vftable;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  *(undefined ***)((int)this + 0x80) = SoeUtil::List<ShipCombatProxiedChest,-1>::vftable;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  local_4._0_1_ = 6;
  ShipCombatZoneConfig_ctor((void *)((int)this + 0x90));
  local_4._0_1_ = 7;
  *(undefined4 *)((int)this + 0x280) = 0;
  shipCombatConfigRecord_init((void *)((int)this + 0x290));
  uVar1 = DAT_017ec680;
  *(undefined1 *)((int)this + 0x300) = 1;
  *(undefined1 *)((int)this + 0x301) = 0;
  *(undefined1 *)((int)this + 0x302) = 0;
  *(undefined4 *)((int)this + 0x304) = 0;
  *(undefined4 *)((int)this + 0x308) = 0;
  *(undefined4 *)((int)this + 0x30c) = 0;
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 0x330) = 0;
  *(undefined4 *)((int)this + 0x334) = 0;
  *(undefined4 *)((int)this + 0x338) = 0;
  *(undefined4 *)((int)this + 0x33c) = uVar1;
  *(undefined4 *)((int)this + 0x340) = 0;
  *(undefined1 *)((int)this + 0x344) = 0;
  *(undefined1 *)((int)this + 0x345) = 0;
  *(undefined1 *)((int)this + 0x346) = 0;
  *(undefined1 *)((int)this + 0x347) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined1 *)((int)this + 0x368) = 0;
  *(undefined1 *)((int)this + 0x369) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x370) = 0xffffffff;
  *(undefined4 *)((int)this + 0x374) = 0xffffffff;
  *(undefined4 *)((int)this + 0x378) = 0xffffffff;
  *(undefined1 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined1 *)((int)this + 0x390) = 0;
  *(undefined1 *)((int)this + 0x391) = 0;
  *(undefined1 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined1 *)((int)this + 0x3ac) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined ***)((int)this + 0x3c8) =
       SoeUtil::Array<SoeUtil::StrongType<unsigned_int,SoeUtilSignatureEventId,1>,0,1>::vftable;
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *(undefined ***)((int)this + 0x3d8) =
       SoeUtil::Array<SoeUtil::StrongType<unsigned_int,SoeUtilSignatureEventId,1>,0,1>::vftable;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined ***)((int)this + 1000) = SoeUtil::Array<ShipCombatProcessor::DockEvent,0,1>::vftable;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined ***)((int)this + 0x3f8) =
       SoeUtil::Array<SoeUtil::StrongType<unsigned_int,SoeUtilSignatureEventId,1>,0,1>::vftable;
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined ***)((int)this + 0x408) = SoeUtil::Array<SoeUtil::Math::Vector<float,2>,0,1>::vftable;
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined4 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x414) = 0;
  *(undefined ***)((int)this + 0x418) =
       SoeUtil::Array<SoeUtil::StrongType<unsigned_int,SoeUtilSignatureActorId,1>,0,1>::vftable;
  *(undefined4 *)((int)this + 0x41c) = 0;
  *(undefined4 *)((int)this + 0x420) = 0;
  *(undefined4 *)((int)this + 0x424) = 0;
  *(undefined4 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 *)((int)this + 0x434) = 0;
  *(undefined4 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x43c) = 0;
  *(undefined4 *)((int)this + 0x440) = 0;
  *(undefined ***)((int)this + 0x444) = SoeUtil::List<ShipCombatDebugSphere,-1>::vftable;
  *(undefined4 *)((int)this + 0x450) = 0;
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x44c) = 0;
  *(undefined ***)((int)this + 0x454) = SoeUtil::List<ShipCombatDebugLine,-1>::vftable;
  *(undefined4 *)((int)this + 0x460) = 0;
  *(undefined4 *)((int)this + 0x458) = 0;
  *(undefined4 *)((int)this + 0x45c) = 0;
  *(undefined ***)((int)this + 0x464) = SoeUtil::List<ShipCombatDebugText,-1>::vftable;
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined4 *)((int)this + 0x468) = 0;
  *(undefined4 *)((int)this + 0x46c) = 0;
  *(undefined ***)((int)this + 0x474) = SoeUtil::List<ShipCombatDebugText,-1>::vftable;
  *(undefined4 *)((int)this + 0x480) = 0;
  *(undefined4 *)((int)this + 0x478) = 0;
  *(undefined4 *)((int)this + 0x47c) = 0;
  local_4._0_1_ = 0x13;
  pvVar3 = Mem_Alloc(0x268);
  local_4._0_1_ = 0x14;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = ShipCombatResultsDataSource_ctor(pvVar3,this);
  }
  local_4 = CONCAT31(local_4._1_3_,0x13);
  FUN_00a50160(pvVar3);
  ExceptionList = local_c;
  return this;
}

