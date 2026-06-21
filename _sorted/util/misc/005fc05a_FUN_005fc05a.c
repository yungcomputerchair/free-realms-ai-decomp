// addr: 0x005fc05a
// name: FUN_005fc05a
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
FUN_005fc05a(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  
                    /* Initializes or resets a custom table/buffer: frees existing auxiliary
                       storage, allocates at least 0x80 16-byte slots, sets owner/key fields, and
                       invokes a helper for the payload. No class evidence, so left unnamed. */
  if (param_1[0x11] == -1) {
    if ((void *)param_1[0x17] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0x17]);
    }
    param_1[0x17] = 0;
    param_1[0x18] = 0xffffffff;
    *param_1 = param_2;
    if ((void *)param_1[0xf] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0xf]);
    }
    uVar2 = 0x80;
    if (0x7f < param_4) {
      uVar2 = param_4;
    }
    param_1[0xe] = uVar2;
    pvVar3 = Mem_Alloc(-(uint)((int)((ulonglong)uVar2 * 0x10 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar2 * 0x10));
    param_1[0x10] = 0;
    param_1[0xf] = pvVar3;
    FUN_005fa7b5(param_3);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

