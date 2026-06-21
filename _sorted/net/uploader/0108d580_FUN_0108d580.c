// addr: 0x0108d580
// name: FUN_0108d580
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_0108d580(void * lhs, void * rhs) */

void __thiscall FUN_0108d580(void *this,void *lhs,void *rhs)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
                    /* Swaps two fields at offsets 4 and 8 between two objects. This looks like
                       generic container/string helper code with no uploader evidence. */
  uVar1 = *(undefined4 *)((int)this + 4);
  uVar2 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)lhs + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)lhs + 8);
  *(undefined4 *)((int)lhs + 8) = uVar2;
  *(undefined4 *)((int)lhs + 4) = uVar1;
  return;
}

