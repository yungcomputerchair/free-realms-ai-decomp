// addr: 0x00941210
// name: ActorCompositeEffectDefinition_ctor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall ActorCompositeEffectDefinition_ctor(undefined4 *param_1,void *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an ActorCompositeEffectDefinition and initializes its embedded
                       list of ActorCompositeEffectEntry objects. Evidence: direct
                       ActorCompositeEffectDefinition::vftable and
                       SoeUtil::List<ActorCompositeEffectEntry> vtable assignments. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01592b83;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SensoryEffectDefinition_ctor(param_1,param_2);
  *param_1 = ActorCompositeEffectDefinition::vftable;
  param_1[0xc] = SoeUtil::List<ActorCompositeEffectEntry,-1>::vftable;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  ExceptionList = local_c;
  return param_1;
}

