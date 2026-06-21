// addr: 0x014e7e60
// name: AccountCommand_RespondStadiumInfo_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandRespondStadiumInfo.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_RespondStadiumInfo_cloneInto(void * this, void * target)
    */

void __fastcall AccountCommand_RespondStadiumInfo_cloneInto(void *this,void *target)

{
  void *this_00;
  undefined1 *puStack00000004;
  void *in_stack_ffffffcc;
  uint uVar1;
  void *owned_buffer;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Casts the target to AccountCommand_RespondStadiumInfo, copies three scalar
                       fields and a string/member through a helper, then delegates AccountCommand
                       base cloning. RTTI identifies the class despite optimized exception-frame
                       arguments. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b0538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = 0x14e7e9c;
  this_00 = (void *)FUN_00d8d382();
  if (this_00 == (void *)0x0) {
    FUN_012f5a60();
  }
  *(undefined4 *)((int)this_00 + 8) = *(undefined4 *)((int)this + 8);
  puStack00000004 = &stack0xffffffcc;
  *(undefined4 *)((int)this_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this_00 + 0x10) = *(undefined4 *)((int)this + 0x10);
  owned_buffer = (void *)(uVar1 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0xffffffcc,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x14),0,0xffffffff);
  uStack_4 = 0xffffffff;
  AccountCommand_RespondStadiumInfo_assignStringField(this_00,in_stack_ffffffcc,owned_buffer);
  AccountCommand_cloneInto(this,this_00);
  ExceptionList = local_c;
  return;
}

