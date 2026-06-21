// addr: 0x004cb631
// name: GWaitList_ctor
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GWaitList_ctor(void * this) */

void * __fastcall GWaitList_ctor(void *this)

{
                    /* Initializes a small 0x24-byte waiter/list helper by calling a base
                       initializer and zeroing three fields at offsets 0x18, 0x1c, and 0x20. This
                       object is allocated for GEvent and GSemaphore constructors. */
  FUN_004cb462(0);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  return this;
}

