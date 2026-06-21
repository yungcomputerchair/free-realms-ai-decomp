// addr: 0x01009180
// name: FUN_01009180
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_01009180(int *param_1,void *param_2)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Object-pool acquire/reuse helper; exact pooled type is unclear from available
                       context. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01632d23;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00fc45f0(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  local_4 = 0;
  if (param_1[0x2a] == 0) {
    if ((*param_1 != 0) && (*param_1 <= param_1[0x26])) {
      local_4 = 0xffffffff;
      if (param_1 != (int *)0xfffffff8) {
        FUN_00fc4610();
      }
      ExceptionList = local_c;
      return (void *)0x0;
    }
    pvVar1 = Mem_Alloc(0x70);
    local_4._0_1_ = 1;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = (void *)FUN_01008f00(param_2);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (param_1[0x27] < param_1[0x26] + 1) {
      FUN_00d0b1a0(param_1[0x26] + 1,0);
    }
    param_1[0x26] = param_1[0x26] + 1;
    *(void **)(param_1[0x25] + -4 + param_1[0x26] * 4) = pvVar1;
  }
  else {
    pvVar1 = *(void **)(param_1[0x29] + -4 + param_1[0x2a] * 4);
    FUN_01008eb0(pvVar1,param_2);
    param_1[0x2a] = param_1[0x2a] + -1;
  }
  local_4 = 0xffffffff;
  if (param_1 != (int *)0xfffffff8) {
    FUN_00fc4610();
  }
  ExceptionList = local_c;
  return pvVar1;
}

