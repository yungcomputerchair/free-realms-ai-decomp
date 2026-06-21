// addr: 0x00946310
// name: ActorSoundEmitterDefinition_entryCtor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall ActorSoundEmitterDefinition_entryCtor(int param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an ActorSoundEmitterDefinition entry and stores its list/hash key
                       at offset 0x1b8. Evidence: called by the actor sound emitter insertion
                       wrapper before list linkage. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015936d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActorSoundEmitterDefinition_ctor();
  *(undefined4 *)(param_1 + 0x1b8) = *param_2;
  ExceptionList = local_c;
  return param_1;
}

