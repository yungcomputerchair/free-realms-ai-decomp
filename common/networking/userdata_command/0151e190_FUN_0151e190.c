// addr: 0x0151e190
// name: FUN_0151e190
// subsystem: common/networking/userdata_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0151e190(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 local_8 [8];
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)(param_1 + 8) - uVar1) >> 2) <
      (uint)((int)(*(int *)(param_1 + 0xc) - uVar1) >> 2))) {
    puVar2 = *(undefined4 **)(param_1 + 8);
    *puVar2 = *param_2;
    *(undefined4 **)(param_1 + 8) = puVar2 + 1;
    return;
  }
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 < uVar1) {
    FUN_00d83c2d();
  }
  FUN_0151e100(local_8,param_1,uVar3,param_2);
  return;
}

