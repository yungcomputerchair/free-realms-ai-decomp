// addr: 0x00508063
// name: GSynchronizationObject_removeWaiter
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char GSynchronizationObject_removeWaiter(void * this, void * waiterObject,
   void * callback) */

char __thiscall GSynchronizationObject_removeWaiter(void *this,void *waiterObject,void *callback)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  void **ppvVar6;
  undefined1 local_18 [8];
  void *local_10;
  void *local_c;
  char local_5;
  
                    /* Locks the object's critical section, scans its waiter vector for the matching
                       two-word waiter record, erases the match if found, unlocks, and returns
                       whether a record was removed. Used for rollback and wait cleanup. */
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x14));
  local_10 = waiterObject;
  uVar5 = 0;
  local_5 = '\0';
  local_c = callback;
  iVar2 = FUN_004cdd69();
  if (iVar2 != 0) {
    do {
      ppvVar6 = &local_10;
      FUN_004cdd7c(uVar5);
      cVar1 = FUN_004c4753(ppvVar6);
      if (cVar1 != '\0') {
        FUN_004e025d(*(undefined4 *)((int)this + 8),(int)this + 4);
        puVar4 = (undefined4 *)FUN_004ed3d9(local_18,uVar5);
        FUN_00505aaf(&local_10,*puVar4,puVar4[1]);
        local_5 = '\x01';
        break;
      }
      uVar5 = uVar5 + 1;
      uVar3 = FUN_004cdd69();
    } while (uVar5 < uVar3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x14));
  return local_5;
}

