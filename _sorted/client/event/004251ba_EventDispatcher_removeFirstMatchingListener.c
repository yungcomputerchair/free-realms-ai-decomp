// addr: 0x004251ba
// name: EventDispatcher_removeFirstMatchingListener
// subsystem: common/client/event
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool EventDispatcher_removeFirstMatchingListener(void * this, void *
   predicate) */

bool __thiscall EventDispatcher_removeFirstMatchingListener(void *this,void *predicate)

{
  char cVar1;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Finds the first event-listener record in the vector at this+0x1e0 that
                       matches a supplied predicate and erases it; returns true if a record was
                       removed. */
  FUN_00421453(&local_c,(int)this + 0x1e0,predicate);
  FUN_00416edb(*(undefined4 *)((int)this + 0x1e8),(int)this + 0x1e0);
  cVar1 = FUN_0040af15(local_14);
  if (cVar1 == '\0') {
    FUN_00423270(local_14,local_c,local_8);
  }
  return cVar1 == '\0';
}

