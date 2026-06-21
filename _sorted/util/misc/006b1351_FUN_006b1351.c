// addr: 0x006b1351
// name: FUN_006b1351
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
FUN_006b1351(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (param_1[0x11] == -1) {
    if ((void *)param_1[0x19] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0x19]);
    }
    param_1[0x19] = 0;
    param_1[0x1a] = 0xffffffff;
    *param_1 = param_2;
    if ((void *)param_1[0xf] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0xf]);
    }
    uVar5 = 0x80;
    if (0x7f < param_4) {
      uVar5 = param_4;
    }
    param_1[0xe] = uVar5;
    pvVar2 = Mem_Alloc(-(uint)((int)((ulonglong)uVar5 * 0x1c >> 0x20) != 0) |
                       (uint)((ulonglong)uVar5 * 0x1c));
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      iVar4 = uVar5 - 1;
      if (-1 < iVar4) {
        puVar3 = (undefined4 *)((int)pvVar2 + 0x18);
        do {
          puVar3[-4] = 0;
          puVar3[-3] = 0;
          *puVar3 = 0x12;
          puVar3 = puVar3 + 7;
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
      }
    }
    param_1[0x10] = 0;
    param_1[0xf] = pvVar2;
    FUN_006b124c(param_3);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

