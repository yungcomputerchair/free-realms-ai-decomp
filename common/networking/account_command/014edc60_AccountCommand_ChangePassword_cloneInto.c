// addr: 0x014edc60
// name: AccountCommand_ChangePassword_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandChangePassword.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_ChangePassword_cloneInto(void * this, void * target) */

void __thiscall AccountCommand_ChangePassword_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Casts the target to AccountCommand_ChangePassword, clones base state, and
                       assigns the password-related string at offset 8. RTTI provides the class
                       name. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &AccountCommand_ChangePassword::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\account_command\\AccountCommandChangePassword.cpp"
                 ,0x38);
  }
  AccountCommand_cloneInto(this,target_00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)target_00 + 8)
             ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              ((int)this + 8),0,0xffffffff);
  return;
}

