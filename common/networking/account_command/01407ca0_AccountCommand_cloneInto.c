// addr: 0x01407ca0
// name: AccountCommand_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommand.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_cloneInto(void * this, void * target) */

void __thiscall AccountCommand_cloneInto(void *this,void *target)

{
  void *this_00;
  
                    /* Casts the target NetworkCommand to AccountCommand, asserts on failure, copies
                       the base NetworkCommand state, then copies AccountCommand's scalar field at
                       offset 4. RTTI names the base account command class. */
  this_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &AccountCommand::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\account_command\\AccountCommand.cpp",0x2f);
  }
  NetworkCommand_cloneBaseFields(this_00);
  *(undefined4 *)((int)this_00 + 4) = *(undefined4 *)((int)this + 4);
  return;
}

