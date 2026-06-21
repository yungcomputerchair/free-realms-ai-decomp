// addr: 0x00914670
// name: ActorEffectDefinition_ctor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall ActorEffectDefinition_ctor(undefined4 *param_1,void *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the common ActorEffectDefinition base after
                       SensoryEffectDefinition, installing the derived vtable and initializing its
                       name/string member. Evidence: direct ActorEffectDefinition::vftable
                       assignment and derived actor effect constructors call it first. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158cb73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SensoryEffectDefinition_ctor(param_1,param_2);
  *param_1 = ActorEffectDefinition::vftable;
  param_1[10] = SoeUtil::IString<char>::vftable;
  param_1[0xb] = &DAT_01be48fc;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  local_4 = 1;
  FUN_007c9f30(0,0,0);
  ExceptionList = local_c;
  return param_1;
}

