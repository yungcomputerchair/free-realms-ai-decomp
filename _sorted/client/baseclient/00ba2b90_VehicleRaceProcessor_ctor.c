// addr: 0x00ba2b90
// name: VehicleRaceProcessor_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * VehicleRaceProcessor_ctor(void * this, void * client) */

void * __thiscall VehicleRaceProcessor_ctor(void *this,void *client)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the vehicle race game processor, allocating RaceConfig and
                       VehicleRaceResultsDataSource after chaining the generic GameProcessor
                       constructor path. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015e5caa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameProcessor_ctor(this,client);
  local_4 = 0;
  *(undefined ***)this = VehicleRaceProcessor::vftable;
  RaceConfig_ctor((void *)((int)this + 0x30));
  *(undefined4 *)((int)this + 0x1a8) = _DAT_018248bc;
  *(undefined4 *)((int)this + 0x1ac) = DAT_0175afd0;
  *(undefined1 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined1 *)((int)this + 0x198) = 0;
  *(undefined1 *)((int)this + 0x199) = 0;
  *(undefined1 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0xffffffff;
  *(undefined1 *)((int)this + 0x1c0) = 1;
  *(undefined1 *)((int)this + 0x1c1) = 0;
  *(undefined1 *)((int)this + 0x1c2) = 0;
  *(undefined1 *)((int)this + 0x1c3) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 4;
  *(undefined ***)((int)this + 0x294) = SoeUtil::List<ProxiedVehicleRace,-1>::vftable;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined ***)((int)this + 0x2a4) = SoeUtil::List<RacerInfo,-1>::vftable;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined ***)((int)this + 0x2b4) =
       SoeUtil::Array<SoeUtil::StrongType<unsigned___int64,SoeUtilSignatureCharacterGuid,0>,0,1>::
       vftable;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  *(undefined4 *)((int)this + 700) = 0;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined ***)((int)this + 0x2d0) = SoeUtil::List<ProxiedVehicleRacePickup,-1>::vftable;
  *(undefined4 *)((int)this + 0x2dc) = 0;
  *(undefined4 *)((int)this + 0x2d4) = 0;
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *(undefined ***)((int)this + 0x2e0) = SoeUtil::List<ProxiedVehicleRaceMissile,-1>::vftable;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  *(undefined4 *)((int)this + 0x2e4) = 0;
  *(undefined4 *)((int)this + 0x2e8) = 0;
  *(undefined ***)((int)this + 0x2f0) = SoeUtil::List<ProxiedVehicleRaceMine,-1>::vftable;
  *(undefined4 *)((int)this + 0x2fc) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined4 *)((int)this + 0x2f8) = 0;
  *(undefined ***)((int)this + 0x300) = SoeUtil::List<ProxiedVehicleRaceExplosion,-1>::vftable;
  *(undefined4 *)((int)this + 0x30c) = 0;
  *(undefined4 *)((int)this + 0x304) = 0;
  *(undefined4 *)((int)this + 0x308) = 0;
  *(undefined ***)((int)this + 0x310) = SoeUtil::List<ProxiedVehicleProximityArrow,-1>::vftable;
  *(undefined4 *)((int)this + 0x31c) = 0;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  *(undefined ***)((int)this + 800) = SoeUtil::List<ProxiedVehicleProximityArrow,-1>::vftable;
  *(undefined4 *)((int)this + 0x32c) = 0;
  *(undefined4 *)((int)this + 0x324) = 0;
  *(undefined4 *)((int)this + 0x328) = 0;
  local_4._0_1_ = 0xb;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined1 *)((int)this + 0x2c8) = 0;
  if (*(int *)((int)this + 700) < 8) {
    FUN_00b70880(8);
  }
  else {
    *(undefined4 *)((int)this + 700) = 8;
  }
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x278) = 0;
  *(undefined4 *)((int)this + 0x27c) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  pvVar1 = Mem_Alloc(0x268);
  local_4._0_1_ = 0xc;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = VehicleRaceResultsDataSource_ctor(pvVar1,this);
  }
  local_4 = CONCAT31(local_4._1_3_,0xb);
  FUN_00b9afa0(pvVar1);
  ExceptionList = local_c;
  return this;
}

