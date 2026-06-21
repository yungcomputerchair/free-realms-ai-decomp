// addr: 0x0139e190
// name: PilePlayArea_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PilePlayArea_deletingDtor(void * this, char flags) */

void * __thiscall PilePlayArea_deletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor for PilePlayArea: calls PilePlayArea_dtor and
                       conditionally frees this. */
  PilePlayArea_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

