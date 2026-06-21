// addr: 0x0122f860
// name: FUN_0122f860
// subsystem: common/input/cursor
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_0122f860(int *param_1)

{
  char cVar1;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  param_1 = (int *)*param_1;
  cVar1 = *(char *)((int)param_1 + 0x15);
  while (cVar1 == '\0') {
    param_1 = (int *)*param_1;
    cVar1 = *(char *)((int)param_1 + 0x15);
  }
  return;
}

