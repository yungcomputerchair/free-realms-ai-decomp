// addr: 0x00bc0ee0
// name: FUN_00bc0ee0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint * __thiscall FUN_00bc0ee0(int *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates a small hash-table node, stores a two-uint key/value pair, links it
                       into bucket (key & 0x3ff), increments count, and returns a pointer to the
                       value field. No class evidence, so left unnamed. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015ea331;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (uint *)(**(code **)(*param_1 + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    *puVar1 = *param_2;
    puVar1[1] = *param_3;
  }
  puVar1[2] = param_1[(*puVar1 & 0x3ff) + 3];
  param_1[(*puVar1 & 0x3ff) + 3] = (int)puVar1;
  param_1[2] = param_1[2] + 1;
  ExceptionList = local_c;
  return puVar1 + 1;
}

