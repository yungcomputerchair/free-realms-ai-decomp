// addr: 0x0052b891
// name: GWaitForMultipleObjects_waitAny
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GWaitForMultipleObjects_waitAny(void * objectArray, uint objectCount_,
   uint timeoutMs_) */

int __cdecl GWaitForMultipleObjects_waitAny(void *objectArray,uint objectCount_,uint timeoutMs_)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *unaff_ESI;
  uint uVar5;
  undefined1 local_a8 [132];
  undefined1 local_24 [8];
  int local_1c;
  int local_18;
  void *local_14;
  uint local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
                    /* Implements wait-any over an array of synchronization objects: first checks
                       for an already signaled object, otherwise creates a temporary GEvent,
                       registers it with all objects, waits with the remaining timeout, then
                       unregisters. Returns the signaled index or -1/0 on no success depending on
                       the failure path. */
  uVar2 = GWaitForMultipleObjects_findFirstSignaled((int)objectArray,objectCount_);
  if ((uVar2 == 0xffffffff) && (timeoutMs_ != 0)) {
    GEvent_ctor(local_a8,'\0');
    local_8 = 0;
    local_c = local_a8;
    local_14 = objectArray;
    local_10 = objectCount_;
    iVar3 = GWaitForMultipleObjects_registerWaiterOnAll(&local_14,&LAB_0052b83f,unaff_ESI);
    if ((char)iVar3 == '\0') {
      uVar2 = 0;
    }
    else {
      if (timeoutMs_ != 0xffffffff) {
        piVar4 = (int *)FUN_004f9372(local_24);
        local_1c = *piVar4;
        local_18 = piVar4[1];
      }
      uVar2 = GWaitForMultipleObjects_findFirstSignaled((int)objectArray,objectCount_);
      uVar5 = timeoutMs_;
      if (uVar2 == 0xffffffff) {
        while( true ) {
          do {
            cVar1 = FUN_00524c72(uVar5);
            if ((cVar1 == '\0') ||
               (uVar2 = GWaitForMultipleObjects_findFirstSignaled((int)objectArray,objectCount_),
               uVar2 != 0xffffffff)) goto LAB_0052b965;
          } while (timeoutMs_ == 0xffffffff);
          piVar4 = (int *)FUN_004f9372(local_24);
          if (timeoutMs_ <= (uint)(*piVar4 - local_1c)) break;
          uVar5 = timeoutMs_ - (*piVar4 - local_1c);
        }
      }
LAB_0052b965:
      FUN_005080fa(&LAB_0052b83f);
    }
    FUN_0051033b();
  }
  return uVar2;
}

