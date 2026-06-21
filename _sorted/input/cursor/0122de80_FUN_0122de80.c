// addr: 0x0122de80
// name: FUN_0122de80
// subsystem: common/input/cursor
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_0122de80(int param_1)

{
  char cVar1;
  int iVar2;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x15);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x15);
  }
  return;
}

