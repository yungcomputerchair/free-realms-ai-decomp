// addr: 0x012972c0
// name: GrowableBuffer_append
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GrowableBuffer_append(void * self, void * data, int size) */

int __thiscall GrowableBuffer_append(void *this,void *self,void *data,int size)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  
                    /* Appends raw bytes to a growable buffer, expanding capacity to the next
                       0x40-byte boundary when needed. Returns 0 on allocation failure and 1 after
                       memcpy succeeds. */
  iVar1 = *(int *)((int)this + 4) + (int)data;
  if (*(int *)((int)this + 8) < iVar1) {
    uVar4 = iVar1 - 1U & 0x8000003f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
    }
    iVar1 = (iVar1 - uVar4) + 0x3f;
    iVar2 = FUN_00d8a744(*(undefined4 *)this,iVar1);
    *(int *)this = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
    *(int *)((int)this + 8) = iVar1;
  }
  pvVar3 = _memcpy((void *)(*(int *)this + *(int *)((int)this + 4)),self,(size_t)data);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + (int)data;
  return CONCAT31((int3)((uint)pvVar3 >> 8),1);
}

