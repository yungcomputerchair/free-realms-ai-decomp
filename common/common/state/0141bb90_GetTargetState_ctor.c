// addr: 0x0141bb90
// name: GetTargetState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GetTargetState_ctor(void * this) */

void * __fastcall GetTargetState_ctor(void *this)

{
  uint uVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_44 [4];
  void *local_40;
  undefined4 local_30;
  uint local_2c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GetTargetState, initializing base state, vtable, name, default
                       cancel/zero button strings, selection flags, and target fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01693b52;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffa8);
  *(undefined ***)this = GetTargetState::vftable;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  local_4._0_1_ = 3;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "GetTargetState",0xe);
  *(undefined1 *)((int)this + 0xf8) = 0;
  *(undefined1 *)((int)this + 0x120) = 1;
  *(undefined1 *)((int)this + 0x121) = 0;
  *(undefined1 *)((int)this + 0x10c) = 0;
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_44,"cancel",6);
  local_4._0_1_ = 4;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0145d850(local_28,local_44);
  local_4._0_1_ = 5;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x8c),
             pbVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  uVar1 = (uint)local_24 >> 8;
  local_24 = (void *)(uVar1 << 8);
  local_4._0_1_ = 3;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)(uVar1 << 8);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_28,"0",1);
  local_4._0_1_ = 6;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0145d850(local_44,local_28);
  local_4._0_1_ = 7;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0xa8),
             pbVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,6);
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  *(undefined4 *)((int)this + 0x138) = 1;
  ExceptionList = local_c;
  return this;
}

