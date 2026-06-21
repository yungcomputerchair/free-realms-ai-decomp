// addr: 0x0139d3d0
// name: PilePlayArea_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PilePlayArea_ctor(void * this) */

void * __fastcall PilePlayArea_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs PilePlayArea via PlayArea_ctor, assigns PilePlayArea vtable slots,
                       and sets play-area type to 1. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01685368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PlayArea_ctor(this);
  *(undefined ***)this = PilePlayArea::vftable;
  *(undefined ***)((int)this + 8) = PilePlayArea::vftable;
  *(undefined4 *)((int)this + 0x3c) = 1;
  ExceptionList = local_c;
  return this;
}

