// addr: 0x014e9630
// name: AccountCommand_ValidateUsername_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandValidateUsername.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_ValidateUsername_cloneInto(void * this, void * target) */

void __thiscall AccountCommand_ValidateUsername_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Casts the target to AccountCommand_ValidateUsername, clones base state,
                       assigns the username string, and copies two byte flags. RTTI provides the
                       class name. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &AccountCommand_ValidateUsername::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\account_command\\AccountCommandValidateUsername.cpp",0x43)
    ;
  }
  AccountCommand_cloneInto(this,target_00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)target_00 + 8)
             ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              ((int)this + 8),0,0xffffffff);
  *(undefined1 *)((int)target_00 + 0x24) = *(undefined1 *)((int)this + 0x24);
  *(undefined1 *)((int)target_00 + 0x25) = *(undefined1 *)((int)this + 0x25);
  return;
}

