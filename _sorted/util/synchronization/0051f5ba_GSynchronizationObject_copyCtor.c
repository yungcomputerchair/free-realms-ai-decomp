// addr: 0x0051f5ba
// name: GSynchronizationObject_copyCtor
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GSynchronizationObject_copyCtor(void * this, void * other) */

void * __thiscall GSynchronizationObject_copyCtor(void *this,void *other)

{
                    /* Copies the common synchronization object base by invoking the GInterface copy
                       step, installing synchronization vtables, and copying two fields at offsets
                       0x30 and 0x34. Used by factory/copy paths in this synchronization cluster. */
  GInterface_copyCtor(this,other);
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_0176f434;
  *(undefined ***)this = &PTR_GSynchronizationObject_deletingDtor_017709b0;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_01770988;
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)((int)other + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)((int)other + 0x34);
  return this;
}

