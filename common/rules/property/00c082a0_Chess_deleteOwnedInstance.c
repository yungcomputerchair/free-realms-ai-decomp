// addr: 0x00c082a0
// name: Chess_deleteOwnedInstance
// subsystem: common/rules/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Chess_deleteOwnedInstance(void * slot) */

void __fastcall Chess_deleteOwnedInstance(void *slot)

{
  Chess *this;
  
                    /* Deletes the Chess instance stored in a pointer slot by calling Chess::~Chess
                       and freeing it, if non-null. Evidence is the dereference of param_1 followed
                       by the known destructor/free sequence. */
  this = *(Chess **)slot;
  if (this != (Chess *)0x0) {
    Chess::Chess_dtor(this);
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return;
}

