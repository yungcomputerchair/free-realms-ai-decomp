// addr: 0x00928360
// name: SoundControlDefinition_entryCtor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall SoundControlDefinition_entryCtor(int param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a SoundControlDefinition entry and stores its list/hash key at
                       offset 0xd8. Evidence: calls SoundControlDefinition constructor 00928290 then
                       writes the key used by the link helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158fd78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SoundControlDefinition_ctor();
  *(undefined4 *)(param_1 + 0xd8) = *param_2;
  ExceptionList = local_c;
  return param_1;
}

