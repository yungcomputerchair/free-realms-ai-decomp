// addr: 0x01515650
// name: CWPlayerPlayArea_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWPlayerPlayArea_ctor(void * this) */

void * __fastcall CWPlayerPlayArea_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWPlayerPlayArea, invoking its base constructor, assigning
                       CWPlayerPlayArea::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b7258;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PlayerPlayArea_ctor(this);
  *(undefined ***)this = CWPlayerPlayArea::vftable;
  *(undefined ***)((int)this + 8) = CWPlayerPlayArea::vftable;
  *(undefined4 *)((int)this + 0x3c) = 0;
  ExceptionList = local_c;
  return this;
}

