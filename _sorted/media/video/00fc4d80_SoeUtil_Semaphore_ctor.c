// addr: 0x00fc4d80
// name: SoeUtil_Semaphore_ctor
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SoeUtil_Semaphore_ctor(void * this, long initialCount_, long
   maximumCount_) */

void * __thiscall SoeUtil_Semaphore_ctor(void *this,long initialCount_,long maximumCount_)

{
  HANDLE pvVar1;
  
                    /* Wraps CreateSemaphoreA and stores the resulting HANDLE in the object.
                       Evidence: direct CreateSemaphoreA call and many synchronization constructors
                       call it with 0 and 0x7fffffff. */
  pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,initialCount_,maximumCount_,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  return this;
}

