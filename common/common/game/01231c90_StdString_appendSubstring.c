// addr: 0x01231c90
// name: StdString_appendSubstring
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall StdString_appendSubstring(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  
                    /* Appends up to count bytes from src starting at pos to dst, growing dst if
                       needed and maintaining the null terminator. */
  if (*(uint *)(param_2 + 0x14) < param_3) {
    FUN_00d81e1a();
  }
  uVar1 = *(int *)(param_2 + 0x14) - param_3;
  if (uVar1 < param_4) {
    param_4 = uVar1;
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((-uVar1 - 1 <= param_4) || (uVar1 + param_4 < uVar1)) {
    FUN_00d81ddb();
  }
  if (param_4 != 0) {
    uVar1 = *(int *)(param_1 + 0x14) + param_4;
    if (uVar1 == 0xffffffff) {
      FUN_00d81ddb();
    }
    if (*(uint *)(param_1 + 0x18) < uVar1) {
      FUN_0041c08c(uVar1,*(undefined4 *)(param_1 + 0x14));
    }
    else if (uVar1 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (0xf < *(uint *)(param_1 + 0x18)) {
        **(undefined1 **)(param_1 + 4) = 0;
        return param_1;
      }
      *(undefined1 *)(param_1 + 4) = 0;
      return param_1;
    }
    if (uVar1 != 0) {
      if (*(uint *)(param_2 + 0x18) < 0x10) {
        param_2 = param_2 + 4;
      }
      else {
        param_2 = *(int *)(param_2 + 4);
      }
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        iVar2 = param_1 + 4;
      }
      else {
        iVar2 = *(int *)(param_1 + 4);
      }
      _memcpy_s((void *)(*(int *)(param_1 + 0x14) + iVar2),
                *(uint *)(param_1 + 0x18) - *(int *)(param_1 + 0x14),(void *)(param_2 + param_3),
                param_4);
      *(uint *)(param_1 + 0x14) = uVar1;
      if (0xf < *(uint *)(param_1 + 0x18)) {
        *(undefined1 *)(*(int *)(param_1 + 4) + uVar1) = 0;
        return param_1;
      }
      *(undefined1 *)(param_1 + 4 + uVar1) = 0;
    }
  }
  return param_1;
}

