// addr: 0x013c2860
// name: Serializer_appendString
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Serializer_appendString(void * this, void * value) */

bool __thiscall Serializer_appendString(void *this,void *value)

{
  bool bVar1;
  int iVar2;
  int unaff_EDI;
  
                    /* Appends a std::string to a serializer/buffer by first writing the length and
                       then appending either the heap or small-string buffer including the
                       terminator. Evidence is the diagnostic string "Wrong state in appendString
                       %d", Serializer_appendInteger, and GrowableBuffer_append. */
  if (*(int *)((int)this + 0x10) == 0) {
    *(undefined4 *)((int)this + 0x10) = 2;
  }
  if (*(int *)((int)this + 0x10) != 2) {
    FUN_012f5dc0("Wrong state in appendString %d",*(int *)((int)this + 0x10));
  }
  bVar1 = Serializer_appendInteger(this,*(uint *)((int)value + 0x14));
  if (!bVar1) {
    return false;
  }
  if (0xf < *(uint *)((int)value + 0x18)) {
    iVar2 = GrowableBuffer_append
                      (this,*(void **)((int)value + 4),(void *)(*(int *)((int)value + 0x14) + 1),
                       unaff_EDI);
    return SUB41(iVar2,0);
  }
  iVar2 = GrowableBuffer_append
                    (this,(void *)((int)value + 4),(void *)(*(int *)((int)value + 0x14) + 1),
                     unaff_EDI);
  return SUB41(iVar2,0);
}

