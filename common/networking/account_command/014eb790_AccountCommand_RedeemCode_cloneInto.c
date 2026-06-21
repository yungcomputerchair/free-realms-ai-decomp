// addr: 0x014eb790
// name: AccountCommand_RedeemCode_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandRedeemCode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_RedeemCode_cloneInto(void * this, void * target) */

void __thiscall AccountCommand_RedeemCode_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Casts the target to AccountCommand_RedeemCode, clones base state, assigns the
                       redeem-code string, and copies a byte flag plus a scalar field. RTTI provides
                       the class name. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &AccountCommand_RedeemCode::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\account_command\\AccountCommandRedeemCode.cpp",
                 0x4e);
  }
  AccountCommand_cloneInto(this,target_00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)target_00 + 8)
             ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              ((int)this + 8),0,0xffffffff);
  *(undefined1 *)((int)target_00 + 0x24) = *(undefined1 *)((int)this + 0x24);
  *(undefined4 *)((int)target_00 + 0x28) = *(undefined4 *)((int)this + 0x28);
  return;
}

