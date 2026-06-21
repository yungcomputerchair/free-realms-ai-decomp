// addr: 0x007ed500
// name: DeepGranny_Mixer_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeepGranny_Mixer_ctor(void * this, void * owner, void * resource) */

void __thiscall DeepGranny_Mixer_ctor(void *this,void *owner,void *resource)

{
                    /* Constructs a DeepGranny::Mixer, stores two constructor arguments, zeroes
                       counters/pointers, and increments a reference count on the resource argument
                       when present. */
  *(void **)((int)this + 4) = owner;
  *(undefined ***)this = DeepGranny::Mixer::vftable;
  *(void **)((int)this + 8) = resource;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  if (resource != (void *)0x0) {
    LOCK();
    *(int *)((int)resource + 4) = *(int *)((int)resource + 4) + 1;
    UNLOCK();
  }
  return;
}

