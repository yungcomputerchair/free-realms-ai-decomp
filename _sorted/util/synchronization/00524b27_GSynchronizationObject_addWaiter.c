// addr: 0x00524b27
// name: GSynchronizationObject_addWaiter
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GSynchronizationObject_addWaiter(void * this, void * waiterObject, void *
   callback) */

int __thiscall GSynchronizationObject_addWaiter(void *this,void *waiterObject,void *callback)

{
  undefined4 extraout_EAX;
  void *local_c;
  void *local_8;
  
                    /* Locks the object's critical section at offset 0x14, appends a two-word waiter
                       record, unlocks, and returns success. Used by timeout wait logic to register
                       a temporary event with the target object. */
  local_c = this;
  local_8 = this;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x14));
  local_c = waiterObject;
  local_8 = callback;
  FUN_0051fa9d(&local_c);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x14));
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

