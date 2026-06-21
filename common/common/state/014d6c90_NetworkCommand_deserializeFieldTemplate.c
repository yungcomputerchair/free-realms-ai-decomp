// addr: 0x014d6c90
// name: NetworkCommand_deserializeFieldTemplate
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall NetworkCommand_deserializeFieldTemplate(int *param_1,void *param_2)

{
  void *reader;
  uint uVar1;
  uint extraout_EAX;
  
                    /* Deserializer wrapper that begins a field, calls
                       NetworkCommand_deserializeTemplate on it, and finalizes the field on success.
                        */
  reader = param_2;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  if ((char)uVar1 != '\0') {
    NetworkCommand_deserializeTemplate(param_1,reader);
    uVar1 = extraout_EAX;
    if ((char)extraout_EAX != '\0') {
      uVar1 = (**(code **)(*param_1 + 0x14))(reader);
      return uVar1;
    }
  }
  return uVar1 & 0xffffff00;
}

