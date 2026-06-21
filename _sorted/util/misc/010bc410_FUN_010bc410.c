// addr: 0x010bc410
// name: FUN_010bc410
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall FUN_010bc410(void *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 *node;
  uint *extraout_EAX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x60-byte breadcrumb/path node or record for an owner and returns
                       an identifier/status. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01648adb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = lookup_1024_hash_canonical_node(param_1,param_2,DAT_01b839d8 ^ (uint)&stack0xffffffec);
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_c;
    return (uint)puVar1 & 0xffffff00;
  }
  node = Mem_Alloc(0x60);
  local_4 = 0;
  if (node == (undefined4 *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    init_large_path_node(node);
    puVar1 = extraout_EAX;
  }
  *puVar1 = param_2;
  puVar1[4] = *param_3;
  puVar1[5] = param_3[1];
  puVar1[6] = param_3[2];
  puVar1[7] = param_3[3];
  puVar1[0x17] = *(uint *)((int)param_1 + 0xc);
  if (*(int *)((int)param_1 + 0xc) == 0) {
    *(uint **)((int)param_1 + 0x10) = puVar1;
  }
  else {
    *(uint **)(*(int *)((int)param_1 + 0xc) + 0x58) = puVar1;
  }
  *(uint **)((int)param_1 + 0xc) = puVar1;
  puVar1[0x15] = param_2;
  puVar1[0x14] = *(uint *)((int)param_1 + (param_2 & 0x3ff) * 4 + 0x18);
  *(uint **)((int)param_1 + (param_2 & 0x3ff) * 4 + 0x18) = puVar1;
  *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + 1;
  ExceptionList = local_c;
  return 1;
}

