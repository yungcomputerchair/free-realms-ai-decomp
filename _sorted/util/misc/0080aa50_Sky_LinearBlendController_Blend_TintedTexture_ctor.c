// addr: 0x0080aa50
// name: Sky_LinearBlendController_Blend_TintedTexture_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Sky_LinearBlendController_Blend_TintedTexture_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs
                       Sky::LinearBlendController<SkyDefinition::Blend<SkyDefinition::TintedTexture>>,
                       initializing its three blend/key members and blend-progress state. */
  puStack_8 = &LAB_01567ff7;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *param_1 = Sky::LinearBlendController<SkyDefinition::Blend<SkyDefinition::TintedTexture>_>::
             vftable;
  local_4 = 2;
  FUN_00806720(param_1 + 4,uVar1);
  FUN_00806720(param_1 + 0x20);
  FUN_00806720(param_1 + 0x3c);
  param_1[0x58] = _DAT_0175b420;
  *(undefined1 *)(param_1 + 0x59) = 0;
  local_4._0_1_ = 1;
  SkyDefinition_TintedTexturePair_dtor();
  local_4 = (uint)local_4._1_3_ << 8;
  SkyDefinition_TintedTexturePair_dtor();
  local_4 = 0xffffffff;
  SkyDefinition_TintedTexturePair_dtor();
  ExceptionList = local_c;
  return;
}

