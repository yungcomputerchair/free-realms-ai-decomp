// addr: 0x00926d40
// name: ActorLightEmitterDefinition_entryCtor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall
ActorLightEmitterDefinition_entryCtor(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a light emitter definition entry and stores its hash/list key at
                       offset 0xd8. Evidence: called by the light insertion path before the link
                       helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158f8d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActorLightEmitterDefinition_ctor(*param_3);
  *(undefined4 *)(param_1 + 0xd8) = *param_2;
  ExceptionList = local_c;
  return param_1;
}

