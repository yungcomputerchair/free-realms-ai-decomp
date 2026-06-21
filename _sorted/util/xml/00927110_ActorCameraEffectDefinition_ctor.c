// addr: 0x00927110
// name: ActorCameraEffectDefinition_ctor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall ActorCameraEffectDefinition_ctor(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an ActorCameraEffectDefinition, including the AssetRequester
                       subobject and camera-effect default parameters. Evidence: direct
                       ActorCameraEffectDefinition::vftable assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158f9a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActorEffectDefinition_ctor();
  param_1[0x24] = AssetManagement::AssetRequestInterface::AssetRequester::vftable;
  param_1[0x25] = param_2;
  uVar1 = _DAT_0175b420;
  param_1[0x27] = _DAT_0175b420;
  param_1[0x28] = uVar1;
  param_1[0x29] = DAT_017eb904;
  param_1[0x2a] = 0;
  uVar1 = DAT_017eb6dc;
  *param_1 = ActorCameraEffectDefinition::vftable;
  param_1[0x24] = ActorCameraEffectDefinition::vftable;
  param_1[0x26] = 1;
  param_1[0x2b] = uVar1;
  param_1[0x2c] = uVar1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  ExceptionList = local_c;
  return param_1;
}

