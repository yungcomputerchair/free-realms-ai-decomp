// addr: 0x00914d40
// name: ActorMeshEmitterDefinition_ctor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall ActorMeshEmitterDefinition_ctor(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an ActorMeshEmitterDefinition, including its AssetRequester
                       subobject, mesh path string, and default numeric fields. Evidence: direct
                       ActorMeshEmitterDefinition::vftable assignment and AssetRequester vtable
                       setup. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158ccf4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActorEffectDefinition_ctor();
  param_1[0x24] = AssetManagement::AssetRequestInterface::AssetRequester::vftable;
  param_1[0x25] = param_2;
  *param_1 = ActorMeshEmitterDefinition::vftable;
  param_1[0x24] = ActorMeshEmitterDefinition::vftable;
  param_1[0x26] = SoeUtil::IString<char>::vftable;
  param_1[0x27] = &DAT_01be48fc;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  uVar1 = _DAT_0175b420;
  param_1[0x2a] = 2;
  param_1[0x2b] = 0;
  param_1[0x2c] = uVar1;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  ExceptionList = local_c;
  return param_1;
}

