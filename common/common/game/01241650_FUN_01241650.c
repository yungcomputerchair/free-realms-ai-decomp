// addr: 0x01241650
// name: FUN_01241650
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_01241650(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  uVar4 = *(uint *)(param_1 + 0x18);
  puVar3 = (undefined4 *)(param_1 + 4);
  puVar2 = puVar3;
  if (0xf < uVar4) {
    puVar2 = (undefined4 *)*puVar3;
  }
  if (puVar2 <= param_2) {
    puVar2 = puVar3;
    if (0xf < uVar4) {
      puVar2 = (undefined4 *)*puVar3;
    }
    if (param_2 < (undefined4 *)(*(int *)(param_1 + 0x14) + (int)puVar2)) {
      if (0xf < uVar4) {
        puVar3 = (undefined4 *)*puVar3;
      }
      iVar1 = StdString_appendSubstring(param_1,(int)param_2 - (int)puVar3,param_3);
      return iVar1;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x14);
  if ((-uVar4 - 1 <= param_3) || (uVar4 + param_3 < uVar4)) {
    FUN_00d81ddb();
  }
  if (param_3 != 0) {
    uVar4 = *(int *)(param_1 + 0x14) + param_3;
    if (uVar4 == 0xffffffff) {
      FUN_00d81ddb();
    }
    if (*(uint *)(param_1 + 0x18) < uVar4) {
      FUN_0041c08c(uVar4,*(undefined4 *)(param_1 + 0x14));
    }
    else if (uVar4 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (0xf < *(uint *)(param_1 + 0x18)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
      return param_1;
    }
    if (uVar4 != 0) {
      puVar2 = puVar3;
      if (0xf < *(uint *)(param_1 + 0x18)) {
        puVar2 = (undefined4 *)*puVar3;
      }
      _memcpy_s((void *)(*(int *)(param_1 + 0x14) + (int)puVar2),
                *(uint *)(param_1 + 0x18) - *(int *)(param_1 + 0x14),param_2,param_3);
      *(uint *)(param_1 + 0x14) = uVar4;
      if (0xf < *(uint *)(param_1 + 0x18)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      *(undefined1 *)((int)puVar3 + uVar4) = 0;
    }
  }
  return param_1;
}

