// addr: 0x013c2270
// name: RawBuffer_assign
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool RawBuffer_assign(void * buffer, void * data, uint size) */

bool __thiscall RawBuffer_assign(void *this,void *buffer,void *data,uint size)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
                    /* Ensures a raw buffer has enough capacity, copies size bytes into it, and
                       records the new length. Capacity grows in 64-byte rounded chunks using
                       realloc-like helper FUN_00d8a744. */
  if (*(int *)((int)this + 8) < (int)data) {
    uVar1 = (int)data - 1U & 0x8000003f;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xffffffc0) + 1;
    }
    iVar3 = (int)data + (0x3f - uVar1);
    iVar2 = FUN_00d8a744(*(undefined4 *)this,iVar3);
    *(int *)this = iVar2;
    if (iVar2 == 0) {
      return false;
    }
    *(int *)((int)this + 8) = iVar3;
  }
  _memcpy(*(void **)this,buffer,(size_t)data);
  *(void **)((int)this + 4) = data;
  return true;
}

