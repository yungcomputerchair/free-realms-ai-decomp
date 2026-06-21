// addr: 0x00927250
// name: ActorCameraEffectDefinition_entryCtor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall
ActorCameraEffectDefinition_entryCtor(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a camera effect definition entry and stores its key/id at offset
                       0xc8 for list hashing. Evidence: called by camera insertion before the link
                       helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158f9d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActorCameraEffectDefinition_ctor(*param_3);
  *(undefined4 *)(param_1 + 200) = *param_2;
  ExceptionList = local_c;
  return param_1;
}

