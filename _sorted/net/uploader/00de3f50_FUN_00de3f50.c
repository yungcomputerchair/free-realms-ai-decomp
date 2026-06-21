// addr: 0x00de3f50
// name: FUN_00de3f50
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_00de3f50(void * this, int value1_, int value2_, int flags_, float
   value3_, float value4_) */

bool __thiscall
FUN_00de3f50(void *this,int value1_,int value2_,int flags_,float value3_,float value4_)

{
  bool bVar1;
  
                    /* Normalizes flag bits, compares the requested state against cached fields,
                       updates the cache and marks a dirty byte if changed. No class evidence;
                       likely not uploader-specific. */
  bVar1 = false;
  *(undefined1 *)((int)this + 0x1ec) = 0;
  *(undefined1 *)((int)this + 0x1ed) = 0;
  *(undefined4 *)((int)this + 0x1e0) = *(undefined4 *)((int)this + 0x1e0);
  *(undefined4 *)((int)this + 0x1e4) = *(undefined4 *)((int)this + 0x1e4);
  *(undefined4 *)((int)this + 0x1e8) = *(undefined4 *)((int)this + 0x1e8);
  if ((flags_ & 2U) != 0) {
    flags_ = flags_ | 0x81;
  }
  if ((char)flags_ < '\0') {
    flags_ = flags_ | 0x80;
  }
  if ((((*(int *)((int)this + 0x1bc) == value1_) && (*(int *)((int)this + 0x1c0) == value2_)) &&
      (bVar1 = true, *(float *)((int)this + 0x1c4) == value3_)) &&
     ((*(float *)((int)this + 0x1c8) == value4_ && (*(uint *)((int)this + 0x1b8) == flags_)))) {
    return true;
  }
  *(int *)((int)this + 0x1c0) = value2_;
  *(int *)((int)this + 0x1bc) = value1_;
  *(int *)((int)this + 0x1b8) = flags_;
  *(float *)((int)this + 0x1c4) = value3_;
  *(float *)((int)this + 0x1c8) = value4_;
  *(undefined1 *)((int)this + 0x1ee) = 1;
  return bVar1;
}

