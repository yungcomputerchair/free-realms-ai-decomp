// addr: 0x01330330
// name: FUN_01330330
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall FUN_01330330(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  uVar2 = *(uint *)(param_1 + 4);
  uVar1 = *(uint *)(param_1 + 8);
  *param_2 = 0;
  if (uVar1 < uVar2) {
    FUN_00d83c2d();
  }
  *param_2 = param_1;
  param_2[1] = uVar2;
  return param_2;
}

