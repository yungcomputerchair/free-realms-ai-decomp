// addr: 0x012c3e30
// name: SynchronizationService_handleStartDefaultDesiredCount
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationService_handleStartDefaultDesiredCount(void * this, uint
   collectionId_, int expectedId_) */

void __thiscall
SynchronizationService_handleStartDefaultDesiredCount(void *this,uint collectionId_,int expectedId_)

{
  int in_stack_0000000c;
  
                    /* Wrapper for Start handling that supplies a zero desired-count argument before
                       dispatching to SynchronizationService_handleStart. */
  SynchronizationService_handleStart(this,collectionId_,expectedId_,in_stack_0000000c,0);
  return;
}

