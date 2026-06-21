// addr: 0x0041c7a5
// name: StdIntRange_moveToEndThunk
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdIntRange_moveToEndThunk(void * first, void * last, void * resultEnd)
    */

void __cdecl StdIntRange_moveToEndThunk(void *first,void *last,void *resultEnd)

{
                    /* Thin adapter that forwards a 4-byte range move operation to the lower thunk,
                       passing last as an extra template-generated argument. It is part of the STL
                       move/erase helper chain. */
  StdIntRange_moveBackwardThunk(first,last,resultEnd,last);
  return;
}

