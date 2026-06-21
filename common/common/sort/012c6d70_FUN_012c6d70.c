// addr: 0x012c6d70
// name: FUN_012c6d70
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_012c6d70(int param_1)

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
  return;
}

