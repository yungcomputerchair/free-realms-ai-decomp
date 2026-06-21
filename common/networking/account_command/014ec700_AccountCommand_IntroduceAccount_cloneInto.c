// addr: 0x014ec700
// name: AccountCommand_IntroduceAccount_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandIntroduceAccount.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_IntroduceAccount_cloneInto(void * this, void * target) */

void __thiscall AccountCommand_IntroduceAccount_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Casts the target to AccountCommand_IntroduceAccount, clones base state,
                       assigns two strings, copies the property set, and copies a scalar field. RTTI
                       provides the class name. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &AccountCommand_IntroduceAccount::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\account_command\\AccountCommandIntroduceAccount.cpp",0x97)
    ;
  }
  AccountCommand_cloneInto(this,target_00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)target_00 + 8)
             ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              ((int)this + 8),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)target_00 + 0x24),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x24),0,0xffffffff);
  PropertySet_copyPropertiesFrom(*(int *)((int)this + 0x44));
  *(undefined4 *)((int)target_00 + 0x40) = *(undefined4 *)((int)this + 0x40);
  return;
}

