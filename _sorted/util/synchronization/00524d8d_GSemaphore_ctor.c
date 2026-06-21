// addr: 0x00524d8d
// name: GSemaphore_ctor
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GSemaphore_ctor(void * this, int initialCount_) */

void * __thiscall GSemaphore_ctor(void *this,int initialCount_)

{
                    /* Constructs a GSemaphore: initializes common synchronization state, creates
                       its waiter list, marks it active, stores the initial count at +0x3c, and
                       zeroes the next count field. The default constructor closure explicitly
                       targets GSemaphore and calls this function. */
  FUN_0051d932();
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_0176f434;
  FUN_004c9e10();
  *(undefined4 *)((int)this + 0x30) = &PTR_LAB_0176f8f4;
  *(undefined ***)this = &PTR_FUN_017708a4;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_0177087c;
  *(undefined4 *)((int)this + 0x30) = &PTR_LAB_01770878;
  FUN_0051f6b1(1);
  GWaitList_create((void **)((int)this + 0x84));
  FUN_004c9e83(1);
  *(int *)((int)this + 0x3c) = initialCount_;
  *(undefined4 *)((int)this + 0x40) = 0;
  return this;
}

