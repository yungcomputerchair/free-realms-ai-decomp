// addr: 0x00524c0f
// name: GEvent_ctor
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GEvent_ctor(void * this, char manualReset_) */

void * __thiscall GEvent_ctor(void *this,char manualReset_)

{
                    /* Constructs a GEvent: initializes base synchronization state, creates its
                       waiter list, marks it active, and stores two event flags at offsets 0x3c and
                       0x3d. The default constructor closure explicitly targets GEvent and calls
                       this function. */
  FUN_0051d932();
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_0176f434;
  FUN_004c9e10();
  *(undefined4 *)((int)this + 0x30) = &PTR_LAB_0176f8ec;
  *(undefined ***)this = &PTR_FUN_01770858;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_01770830;
  *(undefined4 *)((int)this + 0x30) = &PTR_LAB_0177082c;
  FUN_0051f6b1(1);
  GWaitList_create((void **)((int)this + 0x80));
  FUN_004c9e83(1);
  *(char *)((int)this + 0x3c) = manualReset_;
  *(undefined1 *)((int)this + 0x3d) = 0;
  return this;
}

