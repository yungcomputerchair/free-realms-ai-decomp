// addr: 0x014e81b0
// name: AccountCommand_RespondActivateStadiumPiece_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandRespondActivateStadiumPiece.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_RespondActivateStadiumPiece_cloneInto(void * this, void *
   target) */

void __thiscall AccountCommand_RespondActivateStadiumPiece_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Casts the target to AccountCommand_RespondActivateStadiumPiece, asserts on
                       failure, copies the offset-8 field, and clones base AccountCommand state.
                       RTTI provides the class name. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &AccountCommand_RespondActivateStadiumPiece::RTTI_Type_Descriptor
                                   ,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\account_command\\AccountCommandRespondActivateStadiumPiece.cpp"
                 ,0x38);
  }
  *(undefined4 *)((int)target_00 + 8) = *(undefined4 *)((int)this + 8);
  AccountCommand_cloneInto(this,target_00);
  return;
}

