// addr: 0x014f5240
// name: NetworkCommand_EULA_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall NetworkCommand_EULA_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs NetworkCommand_EULA, including string/tree member initialization.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b2904;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  NetworkCommand_ctor(param_1);
  *param_1 = NetworkCommand_EULA::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  StdRbTree_ctor(param_1 + 10);
  local_4._0_1_ = 2;
  StdTree_node48_ctor_01321780(uVar1);
  local_4 = CONCAT31(local_4._1_3_,3);
  StdTree_node48_ctor_01321780();
  param_1[8] = 0;
  param_1[9] = 0;
  ExceptionList = local_c;
  return param_1;
}

