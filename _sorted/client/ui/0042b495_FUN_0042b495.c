// addr: 0x0042b495
// name: FUN_0042b495
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0042b495(int param_1,int *param_2)

{
  int iVar1;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  iVar1 = FUN_0042b2c9();
  if (iVar1 != 0) {
    FUN_004072e2(*param_2,param_2[1],(param_2[2] - *param_2) + 1,(param_2[3] - param_2[1]) + 1,4);
    *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) & 0xf4ff;
  }
  return;
}

