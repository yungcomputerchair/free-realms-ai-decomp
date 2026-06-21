// addr: 0x01441e20
// name: FUN_01441e20
// subsystem: common/networking/login_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall FUN_01441e20(int *param_1,void *param_2)

{
  void *reader;
  uint uVar1;
  uint extraout_EAX;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
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

