// addr: 0x00ba0680
// name: FUN_00ba0680
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00ba0680(int param_1,void *param_2)

{
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
    if (NAN(*(float *)(param_1 + 0x38))) {
      *(undefined1 *)((int)param_2 + 0x11) = 1;
    }
  }
  Stream_ReadVec4(param_2,(float *)(param_1 + 0x40));
  Stream_ReadVec4(param_2,(float *)(param_1 + 0x50));
  Stream_ReadVec4(param_2,(float *)(param_1 + 0x60));
  Stream_ReadVec4(param_2,(float *)(param_1 + 0x70));
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x108) = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
    return;
  }
  *(undefined4 *)(param_1 + 0x10c) = **(undefined4 **)((int)param_2 + 8);
  *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  return;
}

