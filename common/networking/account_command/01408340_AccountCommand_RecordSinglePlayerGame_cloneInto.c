// addr: 0x01408340
// name: AccountCommand_RecordSinglePlayerGame_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandRecordSinglePlayerGame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_RecordSinglePlayerGame_cloneInto(void * this, void *
   target) */

void __thiscall AccountCommand_RecordSinglePlayerGame_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Casts the target to AccountCommand_RecordSinglePlayerGame, clones base state,
                       copies several scalar fields, updates/copies the shared DAT_01cbe234 value,
                       and assigns the trailing string. RTTI identifies the class. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &AccountCommand_RecordSinglePlayerGame::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\account_command\\AccountCommandRecordSinglePlayerGame.cpp"
                 ,0x82);
  }
  AccountCommand_cloneInto(this,target_00);
  *(undefined4 *)((int)target_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)target_00 + 0x10) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)target_00 + 0x14) = *(undefined4 *)((int)this + 0x14);
  DAT_01cbe234 = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)target_00 + 0x18) = DAT_01cbe234;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)target_00 + 0x1c),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x1c),0,0xffffffff);
  return;
}

