// addr: 0x008fc5e0
// name: FUN_008fc5e0
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_008fc5e0(int param_1,int param_2)

{
  uint uVar1;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0xc);
  uVar1 = *(uint *)(param_2 + 4);
  if (*(int *)(param_1 + 0xc) == 0) {
    *(int *)(param_1 + 8) = param_2;
  }
  else {
    *(int *)(*(int *)(param_1 + 0xc) + 0x48) = param_2;
  }
  *(int *)(param_1 + 0xc) = param_2;
  *(uint *)(param_2 + 0x40) = uVar1;
  uVar1 = uVar1 % 100;
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x14 + uVar1 * 4);
  *(int *)(param_1 + 0x14 + uVar1 * 4) = param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  uVar1 = *(uint *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_1 + 0x1ac);
  if (*(int *)(param_1 + 0x1ac) == 0) {
    *(int *)(param_1 + 0x1a8) = param_2;
  }
  else {
    *(int *)(*(int *)(param_1 + 0x1ac) + 0x58) = param_2;
  }
  *(int *)(param_1 + 0x1ac) = param_2;
  *(uint *)(param_2 + 0x50) = uVar1;
  uVar1 = uVar1 % 100;
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x1b4 + uVar1 * 4);
  *(int *)(param_1 + 0x1b4 + uVar1 * 4) = param_2;
  *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
  return param_2;
}

