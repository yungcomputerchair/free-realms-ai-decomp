// addr: 0x0085c530
// name: FUN_0085c530
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0085c530(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  piVar1 = param_1 + (*(uint *)(param_2 + 0x14) & 0x7f) + 5;
  iVar2 = *piVar1;
  do {
    if (iVar2 == 0) {
LAB_0085c559:
      if (*(int *)(param_2 + 0x10) == 0) {
        param_1[2] = *(int *)(param_2 + 0xc);
      }
      else {
        *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc) = *(undefined4 *)(param_2 + 0xc);
      }
      if (*(int *)(param_2 + 0xc) == 0) {
        param_1[3] = *(int *)(param_2 + 0x10);
      }
      else {
        *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x10) = *(undefined4 *)(param_2 + 0x10);
      }
      param_1[4] = param_1[4] + -1;
                    /* WARNING: Could not recover jumptable at 0x0085c591. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
    if (iVar2 == param_2) {
      *piVar1 = *(int *)(iVar2 + 0x18);
      goto LAB_0085c559;
    }
    piVar1 = (int *)(iVar2 + 0x18);
    iVar2 = *piVar1;
  } while( true );
}

