// addr: 0x013a2550
// name: CollectionData_itemTree_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall CollectionData_itemTree_ctor(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes the embedded tree/list sentinel used by CollectionData's
                       collection-item container and sets the count to zero. Evidence: only called
                       during CollectionData construction before later item-list teardown walks the
                       sentinel at the same subobject. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01685918;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_013a06a0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return param_1;
}

