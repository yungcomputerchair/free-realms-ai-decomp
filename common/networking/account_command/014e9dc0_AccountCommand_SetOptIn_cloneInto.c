// addr: 0x014e9dc0
// name: AccountCommand_SetOptIn_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandSetOptIn.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_SetOptIn_cloneInto(void * this, void * target) */

void __thiscall AccountCommand_SetOptIn_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Casts the target to AccountCommand_SetOptIn, asserts on failure, clones base
                       AccountCommand state, and copies two bool/byte fields plus one scalar field.
                       RTTI provides the class name. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &AccountCommand_SetOptIn::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\account_command\\AccountCommandSetOptIn.cpp",0x43)
    ;
  }
  AccountCommand_cloneInto(this,target_00);
  *(undefined1 *)((int)target_00 + 8) = *(undefined1 *)((int)this + 8);
  *(undefined1 *)((int)target_00 + 9) = *(undefined1 *)((int)this + 9);
  *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  return;
}

