// addr: 0x00524b61
// name: GWaitForMultipleObjects_registerWaiterOnAll
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GWaitForMultipleObjects_registerWaiterOnAll(void * objectArray, void *
   waiter) */

int __thiscall
GWaitForMultipleObjects_registerWaiterOnAll(void *this,void *objectArray,void *waiter)

{
  uint in_EAX;
  uint3 extraout_var;
  uint uVar1;
  
                    /* Attempts to register the same waiter on every object in an array; if any
                       registration fails, it rolls back previously registered entries. Returns 1 on
                       full success and 0 on rollback. */
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    do {
      in_EAX = GSynchronizationObject_addWaiter
                         (*(void **)(*(int *)this + uVar1 * 4),objectArray,this);
      if ((char)in_EAX == '\0') {
        while (uVar1 != 0) {
          uVar1 = uVar1 - 1;
          GSynchronizationObject_removeWaiter(*(void **)(*(int *)this + uVar1 * 4),objectArray,this)
          ;
          in_EAX = (uint)extraout_var << 8;
        }
        return in_EAX & 0xffffff00;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)this + 4));
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}

