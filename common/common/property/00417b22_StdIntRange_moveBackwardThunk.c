// addr: 0x00417b22
// name: StdIntRange_moveBackwardThunk
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdIntRange_moveBackwardThunk(void * first, void * last, void *
   resultEnd, void * unused) */

void __cdecl StdIntRange_moveBackwardThunk(void *first,void *last,void *resultEnd,void *unused)

{
                    /* Thin adapter that forwards to the 4-byte-element move-backward helper. Extra
                       arguments are compiler/STL thunk artifacts. */
  StdIntRange_moveBackward(first,(int)last,(int)resultEnd);
  return;
}

