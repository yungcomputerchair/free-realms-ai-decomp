// addr: 0x012400a0
// name: BinaryStreamCursor_readDwordCursor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * BinaryStreamCursor_readDwordCursor(void * cursor, void * outCursor) */

void * __thiscall BinaryStreamCursor_readDwordCursor(void *this,void *cursor,void *outCursor)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* Copies the current stream cursor to outCursor, validates it can read a dword,
                       advances the source cursor by four bytes, and returns outCursor. */
  iVar1 = *(int *)this;
  uVar2 = *(undefined4 *)((int)this + 4);
  *(int *)cursor = iVar1;
  *(undefined4 *)((int)cursor + 4) = uVar2;
  if (iVar1 == 0) {
    FUN_00d83c2d();
  }
  if (*(uint *)(*(int *)this + 8) <= *(uint *)((int)this + 4)) {
    FUN_00d83c2d();
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return cursor;
}

