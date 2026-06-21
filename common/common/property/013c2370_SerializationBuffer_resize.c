// addr: 0x013c2370
// name: SerializationBuffer_resize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SerializationBuffer_resize(void * this, uint size) */

void __thiscall SerializationBuffer_resize(void *this,uint size)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  
                    /* Sets the active byte count and ensures the backing buffer is allocated or
                       reallocated. Existing allocations are rounded up to a 64-byte capacity
                       boundary before reallocating. */
  *(uint *)((int)this + 4) = size;
  if (*(int *)this == 0) {
    pvVar2 = _malloc(size);
    *(void **)this = pvVar2;
    *(uint *)((int)this + 8) = size;
  }
  else {
    uVar3 = size - 1 & 0x8000003f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xffffffc0) + 1;
    }
    iVar4 = (size - uVar3) + 0x3f;
    iVar1 = FUN_00d8a744(*(int *)this,iVar4);
    *(int *)this = iVar1;
    if (iVar1 != 0) {
      *(int *)((int)this + 8) = iVar4;
      return;
    }
  }
  return;
}

