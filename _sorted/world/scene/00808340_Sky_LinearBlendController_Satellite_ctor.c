// addr: 0x00808340
// name: Sky_LinearBlendController_Satellite_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * Sky_LinearBlendController_Satellite_ctor(void * this) */

void * __fastcall Sky_LinearBlendController_Satellite_ctor(void *this)

{
  uint uVar1;
  void *extraout_EDX;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Sky::LinearBlendController<SkyDefinition::Satellite>, invoking
                       the satellite member constructor three times and clearing the trailing flag.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015678e4;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  *(undefined ***)this = Sky::LinearBlendController<SkyDefinition::Satellite>::vftable;
  local_10 = this;
  FUN_00804bc0(uVar1);
  local_4 = 0;
  FUN_00804bc0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00804bc0();
  *(undefined4 *)((int)extraout_EDX + 0xd0) = _DAT_0175b420;
  *(undefined1 *)((int)extraout_EDX + 0xd4) = 0;
  ExceptionList = local_c;
  return extraout_EDX;
}

