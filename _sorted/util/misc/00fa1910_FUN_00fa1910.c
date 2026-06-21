// addr: 0x00fa1910
// name: FUN_00fa1910
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00fa1910(int *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates/clones a Login::GameServerData-like object through a virtual
                       factory, links it to the tail of a doubly linked list, and increments the
                       list count. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0162af91;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = (**(code **)(*param_1 + 8))(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  uStack_4 = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    Login_GameServerData_ref_ctor();
  }
  *(int *)(iVar1 + 0xc) = param_1[2];
  *(undefined4 *)(iVar1 + 8) = 0;
  if (param_1[2] == 0) {
    param_1[1] = iVar1;
  }
  else {
    *(int *)(param_1[2] + 8) = iVar1;
  }
  param_1[2] = iVar1;
  param_1[3] = param_1[3] + 1;
  ExceptionList = local_c;
  return;
}

