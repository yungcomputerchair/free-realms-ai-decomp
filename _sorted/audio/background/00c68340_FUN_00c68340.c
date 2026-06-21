// addr: 0x00c68340
// name: FUN_00c68340
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00c68340(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  if (*(int *)(param_1 + 0x34) != 0) {
    do {
      puVar1 = (undefined4 *)**(int **)(param_1 + 0x2c);
      FUN_00c680e0(*puVar1,puVar1[2],puVar1[1]);
      iVar2 = *(int *)(param_1 + 0x2c);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 8) == 0) {
          *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar2 + 4);
        }
        else {
          *(undefined4 *)(*(int *)(iVar2 + 8) + 4) = *(undefined4 *)(iVar2 + 4);
        }
        if (*(int *)(iVar2 + 4) == 0) {
          *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar2 + 8);
        }
        else {
          *(undefined4 *)(*(int *)(iVar2 + 4) + 8) = *(undefined4 *)(iVar2 + 8);
        }
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
        (**(code **)(*(int *)(param_1 + 0x28) + 0xc))(iVar2);
      }
    } while (*(int *)(param_1 + 0x34) != 0);
  }
  return;
}

