// addr: 0x005de4df
// name: FUN_005de4df
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_005de4df(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  
                    /* Initializes an internal table/buffer if uninitialized: sets sentinel indices,
                       chooses at least 0x80 slots, allocates slotCount*16 bytes, and returns
                       success. No class/file evidence, so left unnamed. */
  if (param_1[0x11] == -1) {
    param_1[0x17] = 0;
    param_1[1] = 0;
    param_1[0x11] = 0xffffffff;
    param_1[0x18] = 0xffffffff;
    *param_1 = param_2;
    uVar2 = 0x80;
    if (0x7f < param_3) {
      uVar2 = param_3;
    }
    param_1[0xe] = uVar2;
    pvVar3 = Mem_Alloc(-(uint)((int)((ulonglong)uVar2 * 0x10 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar2 * 0x10));
    param_1[0x10] = 0;
    param_1[0xf] = pvVar3;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

