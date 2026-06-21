// addr: 0x006aa7c0
// name: FUN_006aa7c0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 get_optional_pair(int thisObj_, undefined4 * outA, undefined4 *
   outB) */

uint __thiscall get_optional_pair(void *this,int thisObj_,undefined4 *outA,undefined4 *outB)

{
  uint in_EAX;
  uint uVar1;
  
                    /* Returns false if flag/count at +0x34 is zero; otherwise optionally writes
                       fields +0x38 and +0x3c to output pointers and returns true. Class identity is
                       not evident. */
  if (*(int *)((int)this + 0x34) == 0) {
    uVar1 = in_EAX & 0xffffff00;
  }
  else {
    if (thisObj_ != 0) {
      *(undefined4 *)thisObj_ = *(undefined4 *)((int)this + 0x38);
    }
    if (outA != (undefined4 *)0x0) {
      *outA = *(undefined4 *)((int)this + 0x3c);
    }
    uVar1 = CONCAT31((int3)((uint)outA >> 8),1);
  }
  return uVar1;
}

