// addr: 0x01331750
// name: Pair8_uninitializedCopyWrapper
// subsystem: common/networking/synch_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Pair8_uninitializedCopyWrapper(void * first, void * last, void * dest,
   int flags) */

void __thiscall
Pair8_uninitializedCopyWrapper(void *this,void *first,void *last,void *dest,int flags)

{
  undefined4 local_4;
  
                    /* Wrapper around the exception-aware uninitialized copy for 8-byte pair
                       elements. It masks the low flag byte before delegating to
                       Pair8_uninitializedCopyRange. */
  local_4 = (uint)this & 0xffffff00;
  Pair8_uninitializedCopyRange(first,last,dest,this,dest,local_4);
  return;
}

