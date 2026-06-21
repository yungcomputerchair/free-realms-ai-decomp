// addr: 0x00d00eb0
// name: FUN_00d00eb0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_00d00eb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x208-byte object from owner parameters, links it into an owner
                       collection, and runs post-create initialization. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016116cb;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  pvVar3 = Mem_Alloc(0x208);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    _Memory = (int *)0x0;
  }
  else {
    _Memory = (int *)FUN_00cffc80(*param_1,param_2,param_3);
  }
  local_4 = 0xffffffff;
  if (*_Memory != 0) {
    if ((int)param_1[0x28f] < param_1[0x28e] + 1) {
      FUN_00d00300(param_1[0x28e] + 1,0);
    }
    puVar1 = (undefined4 *)(param_1[0x28d] + param_1[0x28e] * 4);
    param_1[0x28e] = param_1[0x28e] + 1;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = _Memory;
    }
    ExceptionList = local_c;
    return param_1[0x28e] + -1;
  }
  FUN_00d00380(uVar2);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

