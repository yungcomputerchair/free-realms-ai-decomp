// addr: 0x01321780
// name: StdTree_node48_ctor_01321780
// subsystem: common/networking/match_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall StdTree_node48_ctor_01321780(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a tree-like container with a 0x30-byte sentinel/head node and zero
                       element count. The sentinel links point back to itself and its marker byte at
                       +0x2d is set. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01678dd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0131da80(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x2d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return param_1;
}

