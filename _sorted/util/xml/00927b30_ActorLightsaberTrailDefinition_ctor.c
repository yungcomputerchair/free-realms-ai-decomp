// addr: 0x00927b30
// name: ActorLightsaberTrailDefinition_ctor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall ActorLightsaberTrailDefinition_ctor(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an ActorLightsaberTrailDefinition, including AssetRequester state,
                       a string member, and default trail parameters. Evidence: direct
                       ActorLightsaberTrailDefinition::vftable assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158fbb4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActorEffectDefinition_ctor();
  param_1[0x24] = AssetManagement::AssetRequestInterface::AssetRequester::vftable;
  param_1[0x25] = param_2;
  *param_1 = ActorLightsaberTrailDefinition::vftable;
  param_1[0x24] = ActorLightsaberTrailDefinition::vftable;
  param_1[0x26] = SoeUtil::IString<char>::vftable;
  param_1[0x27] = &DAT_01be48fc;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = DAT_01805ef4;
  uVar1 = _DAT_0175b420;
  param_1[0x2c] = _DAT_0175b420;
  param_1[0x2d] = uVar1;
  param_1[0x2e] = uVar1;
  param_1[0x2f] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

