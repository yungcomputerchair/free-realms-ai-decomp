// addr: 0x00aaf700
// name: FUN_00aaf700
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00aaf700(int *param_1)

{
  int iVar1;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  iVar1 = param_1[1];
  while (iVar1 != 0) {
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 8) == 0) {
        param_1[1] = *(int *)(iVar1 + 4);
      }
      else {
        *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = *(undefined4 *)(iVar1 + 4);
      }
      if (*(int *)(iVar1 + 4) == 0) {
        param_1[2] = *(int *)(iVar1 + 8);
      }
      else {
        *(undefined4 *)(*(int *)(iVar1 + 4) + 8) = *(undefined4 *)(iVar1 + 8);
      }
      param_1[3] = param_1[3] + -1;
      (**(code **)(*param_1 + 0xc))(iVar1);
    }
    iVar1 = param_1[1];
  }
  return;
}

