// addr: 0x006ad2af
// name: FUN_006ad2af
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool __thiscall FUN_006ad2af(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
                    /* Calls the 006aa675 buffer setup helper, stores an associated context field,
                       initializes additional state, and clears a status pointer. No class evidence
                       is available. */
  cVar1 = FUN_006aa675(param_3);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x1c) = param_2;
    FUN_00420fb6();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return cVar1 != '\0';
}

