// addr: 0x01368640
// name: StdTree_node76_ctor_01368640
// subsystem: common/networking/match_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall StdTree_node76_ctor_01368640(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a tree-like container with a 0x4c-byte sentinel/head node and zero
                       element count. The sentinel links point to itself and the marker byte at
                       +0x49 is set. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167fe88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_01352490(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x49) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return param_1;
}

