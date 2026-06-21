// addr: 0x0040511b
// name: GObjectIterator_ctorForOwner
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GObjectIterator_ctorForOwner(void * owner, void * iter, int flags_) */

void * __thiscall GObjectIterator_ctorForOwner(void *this,void *owner,void *iter,int flags_)

{
                    /* Initializes a GObjectIterator object, clears iterator state fields, then asks
                       the owner via vfunc +0x50 to populate it. Evidence is the explicit
                       GObjectIterator::vftable assignment and iterator-like zeroed fields. */
  *(undefined ***)owner = GObjectIterator::vftable;
  *(undefined4 *)((int)owner + 4) = 0;
  *(undefined4 *)((int)owner + 8) = 0;
  *(undefined4 *)((int)owner + 0x10) = 0;
  (**(code **)(*(int *)this + 0x50))(owner,iter);
  return owner;
}

