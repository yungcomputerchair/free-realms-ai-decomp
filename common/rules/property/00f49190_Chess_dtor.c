// addr: 0x00f49190
// name: Chess_dtor
// subsystem: common/rules/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Chess_dtor(void * this) */

void __thiscall Chess::Chess_dtor(Chess *this)

{
                    /* Destructor for Chess; closes the FILE pointer at this+0x1288 and clears it.
                       Evidence is the decorated public Chess::~Chess symbol and all callers using
                       it as a destructor. */
  if (*(FILE **)(this + 0x1288) != (FILE *)0x0) {
    _fclose(*(FILE **)(this + 0x1288));
    *(undefined4 *)(this + 0x1288) = 0;
  }
  return;
}

