// addr: 0x00927760
// name: ActorRumbleEffectDefinition_entryCtor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall
ActorRumbleEffectDefinition_entryCtor(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a rumble effect definition entry and records its list/hash key at
                       offset 0xc8. Evidence: used only by the rumble insertion helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158fad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActorRumbleEffectDefinition_ctor(*param_3);
  *(undefined4 *)(param_1 + 200) = *param_2;
  ExceptionList = local_c;
  return param_1;
}

