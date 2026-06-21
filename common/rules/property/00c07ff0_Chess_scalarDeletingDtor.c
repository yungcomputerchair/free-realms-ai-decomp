// addr: 0x00c07ff0
// name: Chess_scalarDeletingDtor
// subsystem: common/rules/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Chess_scalarDeletingDtor(void * this, byte flags_) */

void * __thiscall Chess_scalarDeletingDtor(void *this,byte flags_)

{
                    /* Scalar deleting destructor for Chess: calls Chess::~Chess and frees this when
                       bit 0 of the flags is set. Evidence is the direct destructor call and
                       conditional _free pattern. */
  Chess::Chess_dtor(this);
  if ((flags_ & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

