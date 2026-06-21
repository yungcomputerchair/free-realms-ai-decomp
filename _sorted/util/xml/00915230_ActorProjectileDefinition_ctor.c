// addr: 0x00915230
// name: ActorProjectileDefinition_ctor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall ActorProjectileDefinition_ctor(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an ActorProjectileDefinition derived from ActorEffectDefinition
                       and initializes its AssetRequester and string members. Evidence: direct
                       ActorProjectileDefinition::vftable assignment after the base constructor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158cdc4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActorEffectDefinition_ctor();
  param_1[0x24] = AssetManagement::AssetRequestInterface::AssetRequester::vftable;
  param_1[0x25] = param_2;
  *param_1 = ActorProjectileDefinition::vftable;
  param_1[0x24] = ActorProjectileDefinition::vftable;
  param_1[0x26] = SoeUtil::IString<char>::vftable;
  param_1[0x27] = &DAT_01be48fc;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  ExceptionList = local_c;
  return param_1;
}

