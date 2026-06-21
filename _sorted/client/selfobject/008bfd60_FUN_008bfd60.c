// addr: 0x008bfd60
// name: FUN_008bfd60
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_008bfd60(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  piVar1 = param_1 + (*(uint *)(param_2 + 0x10) & 3) + 5;
  iVar2 = *piVar1;
  do {
    if (iVar2 == 0) {
LAB_008bfd89:
      if (*(int *)(param_2 + 0xc) == 0) {
        param_1[2] = *(int *)(param_2 + 8);
      }
      else {
        *(undefined4 *)(*(int *)(param_2 + 0xc) + 8) = *(undefined4 *)(param_2 + 8);
      }
      if (*(int *)(param_2 + 8) == 0) {
        param_1[3] = *(int *)(param_2 + 0xc);
      }
      else {
        *(undefined4 *)(*(int *)(param_2 + 8) + 0xc) = *(undefined4 *)(param_2 + 0xc);
      }
      param_1[4] = param_1[4] + -1;
                    /* WARNING: Could not recover jumptable at 0x008bfdc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
    if (iVar2 == param_2) {
      *piVar1 = *(int *)(iVar2 + 0x14);
      goto LAB_008bfd89;
    }
    piVar1 = (int *)(iVar2 + 0x14);
    iVar2 = *piVar1;
  } while( true );
}

