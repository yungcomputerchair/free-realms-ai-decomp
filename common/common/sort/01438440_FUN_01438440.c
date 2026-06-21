// addr: 0x01438440
// name: FUN_01438440
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_01438440(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  uint uVar1;
  uint uVar2;
  undefined1 local_8 [8];
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < *(uint *)(param_1 + 4)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 8) < uVar2) {
    FUN_00d83c2d();
  }
  FUN_012c6910(local_8,param_1,uVar2,param_1,uVar1);
  uVar1 = *(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 8) < uVar1) {
    FUN_00d83c2d();
  }
  FUN_01437a10(param_1,uVar1,param_2,param_3,param_4,param_5,param_4);
  return;
}

