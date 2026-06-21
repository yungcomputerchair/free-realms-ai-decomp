// addr: 0x005ee56f
// name: FUN_005ee56f
// subsystem: common/networking/userdata_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_005ee56f(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  uVar1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (0xfffffff < param_2) {
      uVar1 = FUN_005eb925();
    }
    iVar2 = FUN_005de776(param_2,uVar1);
    *(int *)(param_1 + 4) = iVar2;
    *(int *)(param_1 + 8) = iVar2;
    *(uint *)(param_1 + 0xc) = param_2 * 0x10 + iVar2;
    uVar1 = 1;
  }
  return uVar1;
}

