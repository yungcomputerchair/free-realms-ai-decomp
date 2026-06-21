// addr: 0x014db690
// name: GameCommand_OfferDraw_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_OfferDraw_ctor(void * this) */

void * __fastcall GameCommand_OfferDraw_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_OfferDraw command object by running its common base
                       constructor, installing the GameCommand_OfferDraw vtable, and clearing
                       command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ae1b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_OfferDraw::vftable;
  ExceptionList = local_c;
  return this;
}

