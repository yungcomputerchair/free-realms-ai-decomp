// addr: 0x013e1de0
// name: FUN_013e1de0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool FUN_013e1de0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
                    /* Compares a C string against a small-string object using FUN_00f942a0; returns
                       true on exact match. */
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_00f942a0(0,*(undefined4 *)(param_2 + 0x14),param_1,(int)pcVar2 - (int)(param_1 + 1));
  return iVar3 == 0;
}

