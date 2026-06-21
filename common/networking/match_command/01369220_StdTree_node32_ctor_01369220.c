// addr: 0x01369220
// name: StdTree_node32_ctor_01369220
// subsystem: common/networking/match_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall StdTree_node32_ctor_01369220(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a tree-like container with a 0x20-byte sentinel/head node and zero
                       element count. The sentinel is self-linked and its marker byte at +0x1d is
                       set. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01680018;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_01352310(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return param_1;
}

