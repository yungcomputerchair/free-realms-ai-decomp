// addr: 0x014dbb40
// name: GameCommand_OfferAdjournment_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_OfferAdjournment_ctor(void * this) */

void * __fastcall GameCommand_OfferAdjournment_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_OfferAdjournment command object by running its
                       common base constructor, installing the GameCommand_OfferAdjournment vtable,
                       and clearing command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ae308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_OfferAdjournment::vftable;
  *(undefined4 *)((int)this + 0x24) = 0;
  ExceptionList = local_c;
  return this;
}

