// addr: 0x01365d80
// name: StdTree_node24_ctor_01365d80
// subsystem: common/networking/match_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall StdTree_node24_ctor_01365d80(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs another tree-like container instantiation with a 0x18-byte
                       sentinel/head node and zero count. It uses a distinct allocator helper but
                       the same self-linked sentinel pattern. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167f6f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_01352550(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return param_1;
}

