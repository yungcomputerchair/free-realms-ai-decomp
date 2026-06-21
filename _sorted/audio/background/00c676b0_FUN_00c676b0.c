// addr: 0x00c676b0
// name: FUN_00c676b0
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall FUN_00c676b0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    piVar2 = (int *)*puVar1;
    if (*piVar2 == param_2) break;
    puVar1 = (undefined4 *)puVar1[1];
  }
  if (puVar1[2] == 0) {
    *(undefined4 *)(param_1 + 0x1c) = puVar1[1];
  }
  else {
    *(undefined4 *)(puVar1[2] + 4) = puVar1[1];
  }
  if (puVar1[1] == 0) {
    uVar3 = puVar1[2];
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    (**(code **)(*(int *)(param_1 + 0x18) + 0xc))(puVar1);
    return piVar2;
  }
  *(undefined4 *)(puVar1[1] + 8) = puVar1[2];
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  (**(code **)(*(int *)(param_1 + 0x18) + 0xc))(puVar1);
  return piVar2;
}

