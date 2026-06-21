// addr: 0x014ecfb0
// name: AccountCommand_GetAccountsByPartialName_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandGetAccountsByPartialName.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_GetAccountsByPartialName_cloneInto(void * this, void *
   target) */

void __thiscall AccountCommand_GetAccountsByPartialName_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Casts the target to AccountCommand_GetAccountsByPartialName, clones base
                       state, copies a scalar, assigns the partial-name string, and copies
                       container/vector members. RTTI provides the class name. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &AccountCommand_GetAccountsByPartialName::RTTI_Type_Descriptor,0)
  ;
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\account_command\\AccountCommandGetAccountsByPartialName.cpp"
                 ,0x4c);
  }
  AccountCommand_cloneInto(this,target_00);
  *(undefined4 *)((int)target_00 + 0x54) = *(undefined4 *)((int)this + 0x54);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)target_00 + 0x38),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x38),0,0xffffffff);
  FUN_005f1e5c((int)this + 8);
  StdVector28_assign((int)this + 0x18);
  StdVector28_assign((int)this + 0x28);
  return;
}

