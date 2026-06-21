// addr: 0x0080a790
// name: Sky_LinearBlendController_Blend_Horizon_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Sky_LinearBlendController_Blend_Horizon_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs
                       Sky::LinearBlendController<SkyDefinition::Blend<SkyDefinition::Horizon>>,
                       initializing three blend/key members, blend progress to 1.0, and clearing
                       active state. */
  puStack_8 = &LAB_01567fa7;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *param_1 = Sky::LinearBlendController<SkyDefinition::Blend<SkyDefinition::Horizon>_>::vftable;
  local_4 = 2;
  FUN_00806660(param_1 + 4,uVar1);
  FUN_00806660(param_1 + 0x28);
  FUN_00806660(param_1 + 0x4c);
  param_1[0x70] = _DAT_0175b420;
  *(undefined1 *)(param_1 + 0x71) = 0;
  local_4._0_1_ = 1;
  FUN_00809510();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00809510();
  local_4 = 0xffffffff;
  FUN_00809510();
  ExceptionList = local_c;
  return;
}

