// addr: 0x00993a20
// name: FUN_00993a20
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00993a20(int param_1,void *param_2)

{
  int iVar1;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (param_2 != (void *)0x0) {
    iVar1 = FUN_00992c30(*(undefined4 *)((int)param_2 + 0x9c));
    if (iVar1 != 0) {
      FUN_008cf8a0();
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
  }
  *(int *)((int)param_2 + 0x178) = param_1;
  FUN_00993790(*(undefined4 *)((int)param_2 + 0x9c),param_2);
  *(undefined1 *)(*(int *)(param_1 + 0xe0) + 0x25c) = 1;
  FUN_00c31fc0();
  *(undefined1 *)(*(int *)(param_1 + 0xe4) + 0x25c) = 1;
  FUN_00c32040();
  FUN_00c33910(0);
  return;
}

