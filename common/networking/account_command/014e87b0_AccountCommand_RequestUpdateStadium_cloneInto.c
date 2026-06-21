// addr: 0x014e87b0
// name: AccountCommand_RequestUpdateStadium_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandRequestUpdateStadium.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_RequestUpdateStadium_cloneInto(void * this, void * target)
    */

void __fastcall AccountCommand_RequestUpdateStadium_cloneInto(void *this,void *target)

{
  void *this_00;
  undefined1 *puStack00000004;
  int in_stack_ffffffcc;
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Casts the target to AccountCommand_RequestUpdateStadium, copies the stadium
                       update string/member through a helper, then delegates base AccountCommand
                       cloning. RTTI provides the class name. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b07b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = 0x14e87ec;
  this_00 = (void *)FUN_00d8d382();
  if (this_00 == (void *)0x0) {
    FUN_012f5a60();
  }
  puStack00000004 = &stack0xffffffcc;
  uVar1 = uVar1 & 0xffffff00;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0xffffffcc,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 8),0,0xffffffff);
  uStack_4 = 0xffffffff;
  AccountCommand_RequestUpdateStadium_assignStadiumString(this_00,in_stack_ffffffcc,uVar1);
  AccountCommand_cloneInto(this,this_00);
  ExceptionList = local_c;
  return;
}

