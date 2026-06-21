// addr: 0x0150a6c0
// name: CommandObject_DiscardPile_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_DiscardPile_dtor(void * this) */

void __fastcall CommandObject_DiscardPile_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_DiscardPile: installs the
                       CommandObject_DiscardPile vftable and chains to the CommandObject base
                       destructor. */
  puStack_8 = &LAB_016b59b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_DiscardPile::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_DiscardPile::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

