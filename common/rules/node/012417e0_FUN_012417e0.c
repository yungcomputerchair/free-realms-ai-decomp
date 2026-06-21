// addr: 0x012417e0
// name: FUN_012417e0
// subsystem: common/rules/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_012417e0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(param_1,(int)pcVar2 - (int)(param_1 + 1));
  return;
}

