// addr: 0x01009020
// name: FUN_01009020
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_01009020(int *param_1,void *param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Allocates a new 0x68-byte buffer object or reuses one from a free list,
                       transfers an owned pointer from source, and tracks active/free counts under a
                       guard. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01632cf3;
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
    pvVar2 = Mem_Alloc(0x68);
    local_4._0_1_ = 1;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = CaptureCommon_JPGEncodeJob_ctor(pvVar2,param_2);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (param_1[0x27] < param_1[0x26] + 1) {
      FUN_00d0b1a0(param_1[0x26] + 1,0);
    }
    param_1[0x26] = param_1[0x26] + 1;
    *(void **)(param_1[0x25] + -4 + param_1[0x26] * 4) = pvVar2;
  }
  else {
    pvVar2 = *(void **)(param_1[0x29] + -4 + param_1[0x2a] * 4);
    uVar1 = *(undefined4 *)((int)param_2 + 4);
    *(undefined4 *)((int)param_2 + 4) = 0;
    if (*(int **)((int)pvVar2 + 0x5c) != (int *)0x0) {
      (**(code **)(**(int **)((int)pvVar2 + 0x5c) + 4))();
      *(undefined4 *)((int)pvVar2 + 0x5c) = 0;
    }
    *(undefined4 *)((int)pvVar2 + 0x5c) = uVar1;
    *(undefined1 *)((int)pvVar2 + 100) = *(undefined1 *)((int)param_2 + 0xc);
    param_1[0x2a] = param_1[0x2a] + -1;
  }
  local_4 = 0xffffffff;
  if (param_1 != (int *)0xfffffff8) {
    FUN_00fc4610();
  }
  ExceptionList = local_c;
  return pvVar2;
}

