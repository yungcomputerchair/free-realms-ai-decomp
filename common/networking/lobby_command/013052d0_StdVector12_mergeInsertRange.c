// addr: 0x013052d0
// name: StdVector12_mergeInsertRange
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * StdVector12_mergeInsertRange
                 (void *param_1,void *param_2,void *param_3,undefined1 *param_4,int param_5,
                 int param_6)

{
  int iVar1;
  void *pvVar2;
  undefined1 auStackY_100 [152];
  undefined1 local_24 [4];
  void *local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Merges/inserts ranges of 12-byte records during a vector algorithm, using
                       temporary storage when one side fits and falling back to element movement
                       otherwise. Evidence: only caller is the recursive merge helper 01306db0, and
                       all element-distance math divides by 0xc. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016760e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((int)param_4 <= param_5) {
    iVar1 = FUN_01305130();
    if ((int)param_4 <= iVar1) {
      (*(undefined4 **)(param_6 + 0x14))[1] = **(undefined4 **)(param_6 + 0x14);
      local_4 = 0xffffffff;
      FUN_013051d0(local_24,param_1,param_2);
      local_4 = 0xffffffff;
      if (local_20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_20);
      }
      Std_copy_12byteRecords();
      param_4 = auStackY_100;
      pvVar2 = (void *)Std_copyBackward_12byteRecords
                                 (**(undefined4 **)(param_6 + 0x14),
                                  (*(undefined4 **)(param_6 + 0x14))[1],param_3,param_4,param_4,
                                  param_4);
      ExceptionList = local_c;
      return pvVar2;
    }
  }
  iVar1 = FUN_01305130();
  if (iVar1 < param_5) {
    if ((param_1 != param_2) && (param_2 != param_3)) {
      Std_rotate_12byteRecords(param_1,param_2,param_3);
    }
    ExceptionList = local_c;
    return (void *)((int)param_1 + param_5 * 0xc);
  }
  (*(undefined4 **)(param_6 + 0x14))[1] = **(undefined4 **)(param_6 + 0x14);
  local_4 = 0xffffffff;
  FUN_013051d0(local_24,param_2,param_3);
  local_4 = 0xffffffff;
  if (local_20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  Std_copyBackward_12byteRecords();
  param_4 = auStackY_100;
  pvVar2 = (void *)Std_copy_12byteRecords
                             (**(undefined4 **)(param_6 + 0x14),
                              (*(undefined4 **)(param_6 + 0x14))[1],param_1,param_4,param_4,param_4)
  ;
  ExceptionList = local_c;
  return pvVar2;
}

