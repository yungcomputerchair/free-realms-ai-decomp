// addr: 0x014e8730
// name: AccountCommand_RequestUpdateStadium_assignStadiumString
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_RequestUpdateStadium_assignStadiumString(int this_obj, int
   string_arg) */

void __thiscall
AccountCommand_RequestUpdateStadium_assignStadiumString(void *this,int this_obj,int string_arg)

{
  uint in_stack_0000001c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Assigns the RequestUpdateStadium command's string member at offset 8 from a
                       temporary std::string and releases the temporary buffer when needed. Evidence
                       is caller 014e87b0, whose RTTI cast uses AccountCommand_RequestUpdateStadium
                       and whose source file is AccountCommandRequestUpdateStadium.cpp. */
  puStack_8 = &LAB_016b0788;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 8),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &this_obj,0,0xffffffff);
  local_4 = 0xffffffff;
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)string_arg);
  }
  ExceptionList = local_c;
  return;
}

