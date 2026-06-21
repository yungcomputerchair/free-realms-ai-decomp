// addr: 0x008fd630
// name: FUN_008fd630
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_008fd630(int *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates/clones an object through a virtual factory, links it onto the tail
                       of a doubly linked list using offsets 0xd0/0xd4, and increments a count. No
                       class evidence, so left unnamed. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01589671;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = (**(code **)(*param_1 + 8))(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  uStack_4 = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_008ea200();
  }
  *(int *)(iVar1 + 0xd4) = param_1[2];
  *(undefined4 *)(iVar1 + 0xd0) = 0;
  if (param_1[2] == 0) {
    param_1[1] = iVar1;
  }
  else {
    *(int *)(param_1[2] + 0xd0) = iVar1;
  }
  param_1[2] = iVar1;
  param_1[3] = param_1[3] + 1;
  ExceptionList = local_c;
  return;
}

