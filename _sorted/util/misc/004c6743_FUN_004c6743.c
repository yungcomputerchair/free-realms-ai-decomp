// addr: 0x004c6743
// name: FUN_004c6743
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int copy_record_with_extra_field(int thisObj_, int src_) */

int __thiscall copy_record_with_extra_field(void *this,int thisObj_,int src_)

{
                    /* Calls a base/copy helper for src, then copies the field at +0x10 into this.
                       Exact class identity is not evident. */
  FUN_004c6700(thisObj_);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(thisObj_ + 0x10);
  return (int)this;
}

