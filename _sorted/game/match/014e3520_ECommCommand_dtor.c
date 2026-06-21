// addr: 0x014e3520
// name: ECommCommand_dtor
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ECommCommand_dtor(void * this) */

void __fastcall ECommCommand_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys the ECommCommand base object: installs ECommCommand::vftable and
                       calls the base/member cleanup helper. Evidence is the explicit
                       ECommCommand::vftable assignment and caller
                       ECommCommand_RedeemItemGrant_dtor. */
  puStack_8 = &LAB_016af9a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = ECommCommand::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

