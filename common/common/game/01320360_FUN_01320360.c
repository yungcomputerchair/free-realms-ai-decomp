// addr: 0x01320360
// name: FUN_01320360
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_01320360(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 void *param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Searches parallel vectors for a matching integer key and invokes a helper
                       with the corresponding id and 0x1c-byte record; if absent, calls the helper
                       with default/empty data. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01678b78;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  uVar3 = 0;
  iVar2 = StdVector_size(param_6);
  if (0 < iVar2) {
    do {
      if ((*(int *)((int)param_6 + 4) == 0) ||
         ((uint)(*(int *)((int)param_6 + 8) - *(int *)((int)param_6 + 4) >> 2) <= uVar3)) {
        FUN_00d83c2d(uVar1);
      }
      if (*(int *)(*(int *)((int)param_6 + 4) + uVar3 * 4) == param_2) {
        if ((*(int *)(param_7 + 4) == 0) ||
           ((uint)((*(int *)(param_7 + 8) - *(int *)(param_7 + 4)) / 0x1c) <= uVar3)) {
          FUN_00d83c2d(uVar1);
        }
        iVar2 = *(int *)(param_7 + 4);
        if ((*(int *)(param_5 + 4) == 0) ||
           ((uint)(*(int *)(param_5 + 8) - *(int *)(param_5 + 4) >> 2) <= uVar3)) {
          FUN_00d83c2d(uVar1);
        }
        FUN_0131eae0(param_1,param_2,param_3,param_4,
                     *(undefined4 *)(*(int *)(param_5 + 4) + uVar3 * 4),1,iVar2 + uVar3 * 0x1c);
        ExceptionList = local_c;
        return;
      }
      uVar3 = uVar3 + 1;
      iVar2 = StdVector_size(param_6);
    } while ((int)uVar3 < iVar2);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  local_4 = 0;
  FUN_0131eae0(param_1,param_2,param_3,param_4,0,0,local_28);
  local_4 = 0xffffffff;
  if (local_10 < 0x10) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_24);
}

