// addr: 0x013217f0
// name: Engine_FRTWGameService_ctor
// subsystem: common/networking/match_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall Engine_FRTWGameService_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Engine::FRTWGameService by running the GameServiceBase
                       constructor, installing the Engine::FRTWGameService vftable, initializing
                       scalar state, and constructing several tree members. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01678e5e;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  GameServiceBase_ctor(param_1);
  *param_1 = Engine::FRTWGameService::vftable;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  local_4._1_3_ = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  local_4._0_1_ = 4;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 1;
  StdTree_node48_ctor_01321780(uVar1);
  local_4._0_1_ = 5;
  StdTree_node48_ctor_01321780();
  local_4 = CONCAT31(local_4._1_3_,6);
  StdTree_node48_ctor_01321780();
  param_1[0x2c] = 0x65;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0xffffffff;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  ExceptionList = local_c;
  return param_1;
}

