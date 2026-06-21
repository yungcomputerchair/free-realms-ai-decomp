// addr: 0x012f3760
// name: FUN_012f3760
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int FUN_012f3760(void * this, uint newLength_, char fillChar_) */

int __thiscall FUN_012f3760(void *this,uint newLength_,char fillChar_)

{
  undefined3 in_stack_00000009;
  
                    /* Resizes or fills a small-string-optimized string buffer, updating the length
                       and maintaining the null terminator. */
  if (newLength_ == 0xffffffff) {
    FUN_00d81ddb();
  }
  else if (newLength_ != 0xffffffff) goto LAB_012f377e;
  FUN_00d81ddb();
LAB_012f377e:
  if (*(uint *)((int)this + 0x18) < newLength_) {
    FUN_0041c08c(newLength_,*(undefined4 *)((int)this + 0x14));
  }
  else if (newLength_ == 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    if (0xf < *(uint *)((int)this + 0x18)) {
      **(undefined1 **)((int)this + 4) = 0;
      return (int)this;
    }
    *(undefined1 *)((int)this + 4) = 0;
    return (int)this;
  }
  if (newLength_ != 0) {
    FUN_0126fc30(0,newLength_,_fillChar_);
    *(uint *)((int)this + 0x14) = newLength_;
    if (0xf < *(uint *)((int)this + 0x18)) {
      *(undefined1 *)(*(int *)((int)this + 4) + newLength_) = 0;
      return (int)this;
    }
    *(undefined1 *)((int)this + newLength_ + 4) = 0;
  }
  return (int)this;
}

