// addr: 0x00a18cc0
// name: FUN_00a18cc0
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00a18cc0(int param_1,int param_2)

{
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  FUN_008e93e0(param_2);
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  if (*(char **)(param_2 + 0xc) < *(char **)(param_2 + 8) + 1) {
    *(undefined1 *)(param_1 + 0x6c) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(bool *)(param_1 + 0x6c) = **(char **)(param_2 + 8) != '\0';
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
    return;
  }
  *(undefined4 *)(param_1 + 0x74) = **(undefined4 **)(param_2 + 8);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  return;
}

