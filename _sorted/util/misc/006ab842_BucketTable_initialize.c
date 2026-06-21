// addr: 0x006ab842
// name: BucketTable_initialize
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint BucketTable_initialize(void * this, int owner_, uint requestedCount_) */

uint __thiscall BucketTable_initialize(void *this,int owner_,uint requestedCount_)

{
  uint in_EAX;
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
                    /* Initializes a bucket/slot table when uninitialized, choosing at least 0x80
                       entries, allocating entry_count*0x14+4 bytes, storing the count header, and
                       setting each entry's sentinel pointer. */
  if (*(int *)((int)this + 0x44) == -1) {
    *(undefined4 *)((int)this + 100) = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 0x44) = 0xffffffff;
    *(undefined4 *)((int)this + 0x68) = 0xffffffff;
    *(int *)this = owner_;
    uVar1 = 0x80;
    if (0x7f < requestedCount_) {
      uVar1 = requestedCount_;
    }
    *(uint *)((int)this + 0x38) = uVar1;
    uVar4 = -(uint)((int)((ulonglong)uVar1 * 0x14 >> 0x20) != 0) | (uint)((ulonglong)uVar1 * 0x14);
    puVar2 = Mem_Alloc(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
    if (puVar2 == (uint *)0x0) {
      puVar5 = (uint *)0x0;
      iVar3 = 0;
    }
    else {
      *puVar2 = uVar1;
      puVar5 = puVar2 + 1;
      iVar3 = uVar1 - 1;
      if (-1 < iVar3) {
        puVar2 = puVar2 + 3;
        do {
          *puVar2 = (uint)&DAT_01bc7e28;
          puVar2 = puVar2 + 5;
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
    }
    *(undefined4 *)((int)this + 0x40) = 0;
    *(uint **)((int)this + 0x3c) = puVar5;
    uVar1 = CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  else {
    uVar1 = in_EAX & 0xffffff00;
  }
  return uVar1;
}

