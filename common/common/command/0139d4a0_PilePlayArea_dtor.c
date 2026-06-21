// addr: 0x0139d4a0
// name: PilePlayArea_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PilePlayArea_dtor(void * this) */

void __fastcall PilePlayArea_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for PilePlayArea; resets vftables and then chains to
                       PlayArea_dtor. */
  puStack_8 = &LAB_01685398;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = PilePlayArea::vftable;
  *(undefined ***)((int)this + 8) = PilePlayArea::vftable;
  local_4 = 0xffffffff;
  PlayArea_dtor(this);
  ExceptionList = local_c;
  return;
}

