// addr: 0x008e5240
// name: FUN_008e5240
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_008e5240(int param_1,void *param_2)

{
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (*(short **)((int)param_2 + 0xc) < *(short **)((int)param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(int *)(param_1 + 4) = (int)**(short **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 2;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
    Stream_ReadVec4(param_2,(float *)(param_1 + 0x10));
    return;
  }
  *(undefined4 *)(param_1 + 8) = **(undefined4 **)((int)param_2 + 8);
  *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  Stream_ReadVec4(param_2,(float *)(param_1 + 0x10));
  return;
}

