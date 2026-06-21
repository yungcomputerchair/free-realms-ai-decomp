// addr: 0x0080a700
// name: Sky_LinearBlendController_BlendHorizon_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * Sky_LinearBlendController_BlendHorizon_ctor(void * this) */

void * __fastcall Sky_LinearBlendController_BlendHorizon_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Sky::LinearBlendController over
                       SkyDefinition::Blend<SkyDefinition::Horizon>, building three blend members
                       and clearing the trailing flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01567f57;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this =
       Sky::LinearBlendController<SkyDefinition::Blend<SkyDefinition::Horizon>_>::vftable;
  FUN_00808b00(uVar1);
  local_4 = 0;
  FUN_00808b00();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00808b00();
  *(undefined4 *)((int)this + 0x1c0) = _DAT_0175b420;
  *(undefined1 *)((int)this + 0x1c4) = 0;
  ExceptionList = local_c;
  return this;
}

